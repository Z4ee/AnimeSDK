#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_346961915DAEB39E.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MonoFourFeetSimpleIK_Class_1_8EF1E1A464863438; }
namespace RPG::Client { class MonoFourFeetSimpleIK_Class_1_FC8FD27D5072ECAA; }
namespace RPG::Client { class MonoFourFeetSimpleIK_OriginTransform; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_AWAKE_OFFSET UNITYSDK_OFFSET(0xA9C2FC0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_COLLECTTHREADDATA_OFFSET UNITYSDK_OFFSET(0xA9C3500)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_GETREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xA9C32D0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_GET_IKENABLED_OFFSET UNITYSDK_OFFSET(0xA9C2DC0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xA9C2E20)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_INITIATE_OFFSET UNITYSDK_OFFSET(0xA9C3010)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_METHOD_5_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xA9C46D0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_PREPROCESS_OFFSET UNITYSDK_OFFSET(0xA9C3D80)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xA9C4610)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xA9C2EC0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_SETIKENABLED_OFFSET UNITYSDK_OFFSET(0xA9C2F50)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_SETUPGROUNDANGLE_OFFSET UNITYSDK_OFFSET(0xA9C3C00)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK__CTOR_OFFSET UNITYSDK_OFFSET(0xA9C4F10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFourFeetSimpleIK_TypeDefinitionIndex = 63254;

	class MonoFourFeetSimpleIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* mainRootTransform; // 0x18
		::Il2CppArray<::RPG::Client::MonoFourFeetSimpleIK_OriginTransform*>* originTransforms; // 0x20
		::Il2CppArray<::RPG::Client::MonoFourFeetSimpleIK_OriginTransform*>* rotateTransforms; // 0x28
		::UnityEngine::Vector2 rotationLimit; // 0x30
		::System::Single rotationSpeed; // 0x38
		::UnityEngine::AnimationCurve* rotationSpeedScaleCurve; // 0x40
		::System::Single fadeInTime; // 0x48
		::System::Single fadeOutTime; // 0x4C
		::System::Boolean Field_5_8; // 0x50
		::System::Single Field_5_9; // 0x54
		::System::Single Field_5_10; // 0x58
		::System::Single Field_5_11; // 0x5C
		::System::Collections::Generic::List_1<::RPG::Client::MonoFourFeetSimpleIK_Class_1_8EF1E1A464863438*>* Field_5_12; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::MonoFourFeetSimpleIK_Class_1_FC8FD27D5072ECAA*>* Field_5_13; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IKEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_GET_IKENABLED_OFFSET))(this);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_AWAKE_OFFSET))(this);
		}

		::System::Void GetReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_GETREFERENCETRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void CollectThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_346961915DAEB39E& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_346961915DAEB39E&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_COLLECTTHREADDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetIKEnabled(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_SETIKENABLED_OFFSET))(this, a1, a2);
		}

		::System::Void SetupGroundAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_SETUPGROUNDANGLE_OFFSET))(this, a1);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_INITIATE_OFFSET))(this);
		}

		::System::Void PreProcess(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_PREPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void Method_5_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_METHOD_5_B09E78EE7EE4F8FA_OFFSET))(this);
		}
	};
}
