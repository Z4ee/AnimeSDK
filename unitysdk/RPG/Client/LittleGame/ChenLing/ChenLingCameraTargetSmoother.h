#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_2090B77B5C7838F2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_APPLYASPECTFOVONCE_OFFSET UNITYSDK_OFFSET(0xD4AFDD0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_APPLYASPECTFOVTOALLCAMERAS_OFFSET UNITYSDK_OFFSET(0xD4B1550)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_INITIALIZEIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xD4AF680)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD4B08F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_682FA2F0C959D8A1_OFFSET UNITYSDK_OFFSET(0xD4B14B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_A3923838734452A7_OFFSET UNITYSDK_OFFSET(0xD4AF9E0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_BD4E024E91D3F21C_OFFSET UNITYSDK_OFFSET(0xD4B11D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_C2F48AC549E484D7_OFFSET UNITYSDK_OFFSET(0xD4B0070)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD4B0ED0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD4B0880)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_STARTFINALPUSH_OFFSET UNITYSDK_OFFSET(0xD4B02D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_STOPFINALPUSH_OFFSET UNITYSDK_OFFSET(0xD4B0800)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD4B1C30)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER__CTOR_OFFSET UNITYSDK_OFFSET(0xD4B1AC0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingCameraTargetSmoother_TypeDefinitionIndex = 77499;

	class ChenLingCameraTargetSmoother : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>** StaticGet_FNADDJDHAEO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingCameraTargetSmoother_TypeDefinitionIndex)->GetStaticField(0x62360);
		}
		::System::Single BattleGroundSize; // 0x18
		::Class_2_2090B77B5C7838F2* Context; // 0x20
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
		::UnityEngine::Vector3 LDONDNFIAJB; // 0x9C
		::UnityEngine::Vector3 IBDIPFNFAHP; // 0xA8
		::UnityEngine::Vector3 NEHBOMMLLGF; // 0xB4
		::UnityEngine::Vector3 FNCNEGLNFDF; // 0xC0
		::UnityEngine::Vector3 NFDLKNNANKP; // 0xCC
		::UnityEngine::Vector3 KEOBEENIBKK; // 0xD8
		::System::Boolean CGDHNDBBDCH; // 0xE4
		::UnityEngine::Vector3 OCJBCKJACMD; // 0xE8
		::UnityEngine::Vector3 EBDBIIDILEG; // 0xF4
		::System::Boolean PMFPMCNKKLI; // 0x100
		::System::Boolean FIIAIDLADFF; // 0x101
		::System::Boolean DKOALINKJAC; // 0x102
		::System::Single HLICPCDLCAI; // 0x104
		::UnityEngine::Vector3 MBPFBBNOODK; // 0x108
		::UnityEngine::Vector3 GAIJCBMJNFO; // 0x114
		::UnityEngine::GameObject* NNDBAONEKOA; // 0x120
		::UnityEngine::Vector3 CNEFKJMJFGL; // 0x128
		::UnityEngine::Vector3 HPJCDGHIIOO; // 0x134
		::System::Single KCBAPGPLEEM; // 0x140
		::System::Single NDBDDFMFHBA; // 0x144
		::System::Boolean OFMCCKGBDPN; // 0x148

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

		::System::Boolean Method_5_A3923838734452A7(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGCAMERATARGETSMOOTHER_METHOD_5_A3923838734452A7_OFFSET))(this, a1, a2, a3);
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
