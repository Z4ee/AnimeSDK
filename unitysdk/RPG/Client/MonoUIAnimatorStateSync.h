#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoUIAnimatorStateSync_StatePair.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOUIANIMATORSTATESYNC_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D4A710)
#define RPG_CLIENT_MONOUIANIMATORSTATESYNC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9D4A940)
#define RPG_CLIENT_MONOUIANIMATORSTATESYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4ABA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIAnimatorStateSync_TypeDefinitionIndex = 56333;

	class MonoUIAnimatorStateSync : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Source; // 0x18
		::UnityEngine::Animator* Target; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonoUIAnimatorStateSync_StatePair>* SyncStates; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _SyncStateDict; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANIMATORSTATESYNC__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANIMATORSTATESYNC_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANIMATORSTATESYNC_LATEUPDATE_OFFSET))(this);
		}
	};
}
