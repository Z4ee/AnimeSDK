#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoAnimatorStateSync_AnimatorStateSync.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class RootMotionHandler; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOANIMATORSTATESYNC_AWAKE_OFFSET UNITYSDK_OFFSET(0xA90E970)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA90EB20)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_METHOD_5_141D40B68A9E2D14_OFFSET UNITYSDK_OFFSET(0xA90EC60)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_METHOD_5_7E3758126DC70293_OFFSET UNITYSDK_OFFSET(0xA90ED30)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_METHOD_5_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xA90ED10)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA90ED20)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA90EC00)
#define RPG_CLIENT_MONOANIMATORSTATESYNC_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA90EB90)
#define RPG_CLIENT_MONOANIMATORSTATESYNC__CTOR_OFFSET UNITYSDK_OFFSET(0xA90EF80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSync_TypeDefinitionIndex = 63189;

	class MonoAnimatorStateSync : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::RootMotionHandler* source; // 0x18
		::Il2CppArray<::RPG::Client::MonoAnimatorStateSync_AnimatorStateSync>* stateSyncs; // 0x20
		::UnityEngine::Animator* SyncAnimator; // 0x28
		::System::Int32 Field_5_3; // 0x30
		::System::Boolean Field_5_4; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean Method_5_141D40B68A9E2D14(::System::Int32 a1, ::RPG::Client::MonoAnimatorStateSync_AnimatorStateSync& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::MonoAnimatorStateSync_AnimatorStateSync&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_METHOD_5_141D40B68A9E2D14_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_5_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_METHOD_5_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_5_7E3758126DC70293(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESYNC_METHOD_5_7E3758126DC70293_OFFSET))(this, a1);
		}
	};
}
