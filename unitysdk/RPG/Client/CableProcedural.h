#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CableProcedural_CurveModel.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CABLEPROCEDURAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x9211E00)
#define RPG_CLIENT_CABLEPROCEDURAL_LATETICK_OFFSET UNITYSDK_OFFSET(0x9211FF0)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x9212440)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_56BF6518E35FCD15_OFFSET UNITYSDK_OFFSET(0x9213010)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_616B5B1FFE25821C_OFFSET UNITYSDK_OFFSET(0x9213260)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9211F00)
#define RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_D7DC8A0EDD4003E0_OFFSET UNITYSDK_OFFSET(0x92128F0)
#define RPG_CLIENT_CABLEPROCEDURAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9211EB0)
#define RPG_CLIENT_CABLEPROCEDURAL__CTOR_OFFSET UNITYSDK_OFFSET(0x92134A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CableProcedural_TypeDefinitionIndex = 57627;

	class CableProcedural : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_14; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_5_0; // 0x18
		::RPG::Client::CableProcedural_CurveModel curveModel; // 0x20
		::UnityEngine::Transform* StartPointTransform; // 0x28
		::UnityEngine::Transform* EndPointTransform; // 0x30
		::System::Single pointDensity; // 0x38
		::System::Single sagAmplitude; // 0x3C
		::System::Boolean BezierEnable; // 0x40
		::System::Single radius; // 0x44
		::UnityEngine::Vector3 ScaleXYZ; // 0x48
		::System::Single MaxDistance; // 0x54
		::UnityEngine::AnimationCurve* ScaleCurve; // 0x58
		::UnityEngine::AnimationCurve* HeightScaleCurve; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ControlList; // 0x68
		::UnityEngine::Vector3 Field_5_13; // 0x70
		::UnityEngine::LineRenderer* Field_5_15; // 0x80
		::System::Int32 Field_5_16; // 0x88
		::UnityEngine::Vector3 Field_5_17; // 0x8C
		::UnityEngine::Vector3 Field_5_18; // 0x98
		::System::Single Field_5_19; // 0xA4
		::System::Single Field_5_20; // 0xA8
		::UnityEngine::Vector3 Field_5_21; // 0xAC
		::UnityEngine::Vector3 Field_5_22; // 0xB8
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* Field_5_23; // 0xC8

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

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_LATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void Method_5_19B91D58E02869BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_19B91D58E02869BC_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_D7DC8A0EDD4003E0(::System::Single a1, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_D7DC8A0EDD4003E0_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_56BF6518E35FCD15(::System::Int32 a1, ::System::Single a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_56BF6518E35FCD15_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_5_616B5B1FFE25821C(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CABLEPROCEDURAL_METHOD_5_616B5B1FFE25821C_OFFSET))(this, a1, a2);
		}
	};
}
