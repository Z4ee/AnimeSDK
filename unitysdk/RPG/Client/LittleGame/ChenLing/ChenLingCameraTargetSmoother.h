#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E9C9AAD7C711B3E3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_APPLYASPECTFOVONCE_OFFSET UNITYSDK_OFFSET(0x998BBB0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_APPLYASPECTFOVTOALLCAMERAS_OFFSET UNITYSDK_OFFSET(0x998D3E0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_INITIALIZEIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x998B410)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x998C740)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_682FA2F0C959D8A1_OFFSET UNITYSDK_OFFSET(0x998D340)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_A61E03BB3EA971E9_OFFSET UNITYSDK_OFFSET(0x998B770)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_BD4E024E91D3F21C_OFFSET UNITYSDK_OFFSET(0x998D020)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_C2F48AC549E484D7_OFFSET UNITYSDK_OFFSET(0x998BE50)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x998CD20)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x998C6D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_STARTFINALPUSH_OFFSET UNITYSDK_OFFSET(0x998C0F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_STOPFINALPUSH_OFFSET UNITYSDK_OFFSET(0x998C650)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x998D990)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER__CTOR_OFFSET UNITYSDK_OFFSET(0x998D8D0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingCameraTargetSmoother_TypeDefinitionIndex = 63427;

	class ChenLingCameraTargetSmoother : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>** StaticGet_Field_5_40()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingCameraTargetSmoother_TypeDefinitionIndex)->GetStaticField(0x23CB0);
		}
		::System::Single BattleGroundSize; // 0x18
		::Class_2_E9C9AAD7C711B3E3* Context; // 0x20
		::UnityEngine::Vector3 MinZoomOffset; // 0x28
		::UnityEngine::Vector3 MaxZoomOffset; // 0x34
		::UnityEngine::AnimationCurve* ZoomCurve; // 0x40
		::UnityEngine::Vector3 MinAimOffset; // 0x48
		::UnityEngine::Vector3 MaxAimOffset; // 0x54
		::System::Single PositionDamping; // 0x60
		::System::Single ZoomDamping; // 0x64
		::Cinemachine::CinemachineBlendDefinition_Style Style; // 0x68
		::System::Single BlendTime; // 0x6C
		::UnityEngine::AnimationCurve* Curve; // 0x70
		::System::Single BaseAspectRatio; // 0x78
		::System::Single MinAspectRatio; // 0x7C
		::System::Single AspectFovScale; // 0x80
		::System::Single PushDistance; // 0x84
		::System::Single PushDuration; // 0x88
		::UnityEngine::AnimationCurve* PushCurve; // 0x90
		::System::Boolean IsPause; // 0x98
		::UnityEngine::Vector3 Field_5_19; // 0x9C
		::UnityEngine::Vector3 Field_5_20; // 0xA8
		::UnityEngine::Vector3 Field_5_21; // 0xB4
		::UnityEngine::Vector3 Field_5_22; // 0xC0
		::UnityEngine::Vector3 Field_5_23; // 0xCC
		::UnityEngine::Vector3 Field_5_24; // 0xD8
		::System::Boolean Field_5_25; // 0xE4
		::UnityEngine::Vector3 Field_5_26; // 0xE8
		::UnityEngine::Vector3 Field_5_27; // 0xF4
		::System::Boolean Field_5_28; // 0x100
		::System::Boolean Field_5_29; // 0x101
		::System::Boolean Field_5_30; // 0x102
		::System::Single Field_5_31; // 0x104
		::UnityEngine::Vector3 Field_5_32; // 0x108
		::UnityEngine::Vector3 Field_5_33; // 0x114
		::UnityEngine::GameObject* Field_5_34; // 0x120
		::UnityEngine::Vector3 Field_5_35; // 0x128
		::UnityEngine::Vector3 Field_5_36; // 0x134
		::System::Single Field_5_37; // 0x140
		::System::Single Field_5_38; // 0x144
		::System::Boolean Field_5_39; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER__CCTOR_OFFSET))();
		}

		::System::Void InitializeImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_INITIALIZEIMMEDIATE_OFFSET))(this);
		}

		::System::Void StartFinalPush(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_STARTFINALPUSH_OFFSET))(this, a1, a2);
		}

		::System::Void StopFinalPush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_STOPFINALPUSH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Single Method_5_682FA2F0C959D8A1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_682FA2F0C959D8A1_OFFSET))(this);
		}

		::System::Void ApplyAspectFovOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_APPLYASPECTFOVONCE_OFFSET))(this);
		}

		static ::System::Void ApplyAspectFovToAllCameras(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_APPLYASPECTFOVTOALLCAMERAS_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Method_5_A61E03BB3EA971E9(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_A61E03BB3EA971E9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_C2F48AC549E484D7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_C2F48AC549E484D7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_BD4E024E91D3F21C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_BD4E024E91D3F21C_OFFSET))(this, a1, a2);
		}
	};
}
