#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/UpdateTracker_UpdateClock.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class UpdateTracker_UpdateStatus; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_UPDATETRACKER_GETPREFERREDUPDATE_OFFSET UNITYSDK_OFFSET(0x14668AC0)
#define CINEMACHINE_UPDATETRACKER_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x146683F0)
#define CINEMACHINE_UPDATETRACKER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14668D60)
#define CINEMACHINE_UPDATETRACKER_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0x14668480)
#define CINEMACHINE_UPDATETRACKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14668E70)
#define CINEMACHINE_UPDATETRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x14668E60)

namespace Cinemachine
{
	inline static constexpr unsigned int UpdateTracker_TypeDefinitionIndex = 36915;

	class UpdateTracker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet_sToDelete()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UpdateTracker_TypeDefinitionIndex)->GetStaticField(0xF40);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::Cinemachine::UpdateTracker_UpdateStatus*>** StaticGet_mUpdateStatus()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::Cinemachine::UpdateTracker_UpdateStatus*>**)Il2CppClass::FromTypeDefinitionIndex(UpdateTracker_TypeDefinitionIndex)->GetStaticField(0xF48);
		}
		static ::System::Single* StaticGet_mLastUpdateTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UpdateTracker_TypeDefinitionIndex)->GetStaticField(0x8B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER__CCTOR_OFFSET))();
		}

		static ::System::Void InitializeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_INITIALIZEMODULE_OFFSET))();
		}

		static ::System::Void UpdateTargets(::Cinemachine::UpdateTracker_UpdateClock a1)
		{
			return ((::System::Void(*)(::Cinemachine::UpdateTracker_UpdateClock))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_UPDATETARGETS_OFFSET))(a1);
		}

		static ::Cinemachine::UpdateTracker_UpdateClock GetPreferredUpdate(::UnityEngine::Transform* a1)
		{
			return ((::Cinemachine::UpdateTracker_UpdateClock(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_GETPREFERREDUPDATE_OFFSET))(a1);
		}

		static ::System::Void OnUpdate(::Cinemachine::UpdateTracker_UpdateClock a1)
		{
			return ((::System::Void(*)(::Cinemachine::UpdateTracker_UpdateClock))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_ONUPDATE_OFFSET))(a1);
		}
	};
}
