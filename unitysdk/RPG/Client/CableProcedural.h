#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CableProcedural_CableData.h"
#include "unitysdk/RPG/Client/CableProcedural_CurveModel.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CABLEPROCEDURAL_AWAKE_OFFSET UNITYSDK_OFFSET(0xB457A10)
#define RPG_CLIENT_CABLEPROCEDURAL_LATETICK_OFFSET UNITYSDK_OFFSET(0xB457D20)
#define RPG_CLIENT_CABLEPROCEDURAL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB457CC0)
#define RPG_CLIENT_CABLEPROCEDURAL_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xB459D70)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0xB458260)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_4343BB0E5E498E53_OFFSET UNITYSDK_OFFSET(0xB4587A0)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_4C3EA6AB0AC5008C_OFFSET UNITYSDK_OFFSET(0xB458310)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_6F2D07D257FBDAC7_OFFSET UNITYSDK_OFFSET(0xB458D50)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_75DEF244AC8D4B03_OFFSET UNITYSDK_OFFSET(0xB4598A0)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_82674784215D49A4_OFFSET UNITYSDK_OFFSET(0xB459510)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_83A63162250009A2_OFFSET UNITYSDK_OFFSET(0xB459810)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_C0073351A39FCB01_OFFSET UNITYSDK_OFFSET(0xB459B10)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xB458CE0)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xB457B80)
#define RPG_CLIENT_CABLEPROCEDURAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB457B20)
#define RPG_CLIENT_CABLEPROCEDURAL__CTOR_OFFSET UNITYSDK_OFFSET(0xB459DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CableProcedural_TypeDefinitionIndex = 65816;

	class CableProcedural : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_0; // 0x0
		// static const ::System::Single Field_5_1; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_5_2; // 0x18
		::RPG::Client::CableProcedural_CableData cableData; // 0x20
		::RPG::Client::CableProcedural_CurveModel curveModel; // 0x38
		::UnityEngine::Transform* StartPointTransform; // 0x40
		::UnityEngine::Transform* EndPointTransform; // 0x48
		::System::Single pointDensity; // 0x50
		::System::Single sagAmplitude; // 0x54
		::System::Boolean BezierEnable; // 0x58
		::System::Single radius; // 0x5C
		::UnityEngine::Vector3 ScaleXYZ; // 0x60
		::System::Single MaxDistance; // 0x6C
		::UnityEngine::AnimationCurve* ScaleCurve; // 0x70
		::UnityEngine::AnimationCurve* HeightScaleCurve; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ControlList; // 0x80
		::UnityEngine::Vector3 Field_5_16; // 0x88
		::UnityEngine::LineRenderer* Field_5_17; // 0x98
		::System::Int32 Field_5_18; // 0xA0
		::UnityEngine::Vector3 Field_5_19; // 0xA4
		::UnityEngine::Vector3 Field_5_20; // 0xB0
		::System::Single Field_5_21; // 0xBC
		::System::Single Field_5_22; // 0xC0
		::UnityEngine::Vector3 Field_5_23; // 0xC4
		::UnityEngine::Vector3 Field_5_24; // 0xD0
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* Field_5_25; // 0xE0
		::UnityEngine::Vector3 Field_5_26; // 0xE8
		::UnityEngine::Vector3 Field_5_27; // 0xF4
		::UnityEngine::Quaternion Field_5_28; // 0x100
		::UnityEngine::Quaternion Field_5_29; // 0x110
		::System::Boolean Field_5_30; // 0x120
		::System::Single Field_5_31; // 0x124
		::System::Single Field_5_32; // 0x128
		::System::Boolean Field_5_33; // 0x12C
		::System::Single Field_5_34; // 0x130
		::UnityEngine::Vector3 Field_5_35; // 0x134
		::System::Single Field_5_36; // 0x140
		::System::Int32 Field_5_37; // 0x144
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_38; // 0x148
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_39; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_LATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_0E142E3463F30350()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_0E142E3463F30350_OFFSET))(this);
		}

		::System::Void Method_5_83A63162250009A2(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::LineRenderer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_83A63162250009A2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_F4ADC37B63F4E9EF_OFFSET))(this);
		}

		::System::Void Method_5_4343BB0E5E498E53(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::LineRenderer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_4343BB0E5E498E53_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_5_6F2D07D257FBDAC7(::System::Single a1, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_6F2D07D257FBDAC7_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 Method_5_75DEF244AC8D4B03(::System::Int32 a1, ::System::Single a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_75DEF244AC8D4B03_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_5_C0073351A39FCB01(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_C0073351A39FCB01_OFFSET))(this, a1, a2);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_MARKDIRTY_OFFSET))(this);
		}

		::System::Boolean Method_5_4C3EA6AB0AC5008C(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_4C3EA6AB0AC5008C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_82674784215D49A4(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_82674784215D49A4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_CB613A5EF970C11B(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_CB613A5EF970C11B_OFFSET))(this, a1);
		}
	};
}
