#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_TEMPORARAYTRACKER_CHECKALIVE_OFFSET UNITYSDK_OFFSET(0x1B76DA90)
#define FOUNDATION_TEMPORARAYTRACKER_COMPOSETEMPORARAYTRACKER_OFFSET UNITYSDK_OFFSET(0x1B76DA30)
#define FOUNDATION_TEMPORARAYTRACKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B76DE90)
#define FOUNDATION_TEMPORARAYTRACKER_GET_CAPCITY_OFFSET UNITYSDK_OFFSET(0x1B76DA10)
#define FOUNDATION_TEMPORARAYTRACKER_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B76D9F0)
#define FOUNDATION_TEMPORARAYTRACKER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B76DC10)
#define FOUNDATION_TEMPORARAYTRACKER_SET_CAPCITY_OFFSET UNITYSDK_OFFSET(0x1B76DA20)
#define FOUNDATION_TEMPORARAYTRACKER_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B76DA00)
#define FOUNDATION_TEMPORARAYTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B76DF30)

namespace Foundation
{
	inline static constexpr unsigned int TemporarayTracker_TypeDefinitionIndex = 8068;

	class TemporarayTracker : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::UnityEngine::Object*>* objectsPool; // 0x10
		::System::Int32 _Timeout_k__BackingField; // 0x18
		::System::Int32 _Capcity_k__BackingField; // 0x1C
		::System::Single timeoutTick; // 0x20
		::System::Single disposeTick; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TEMPORARAYTRACKER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TEMPORARAYTRACKER_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_Timeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_TEMPORARAYTRACKER_SET_TIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_Capcity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TEMPORARAYTRACKER_GET_CAPCITY_OFFSET))(this);
		}

		::System::Void set_Capcity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_TEMPORARAYTRACKER_SET_CAPCITY_OFFSET))(this, value);
		}

		static ::Foundation::TemporarayTracker* ComposeTemporarayTracker(::Foundation::TemporarayTracker* tracker, ::System::Int32 timeout, ::System::Int32 capcity)
		{
			return ((::Foundation::TemporarayTracker*(*)(::Foundation::TemporarayTracker*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_TEMPORARAYTRACKER_COMPOSETEMPORARAYTRACKER_OFFSET))(tracker, timeout, capcity);
		}

		::System::Boolean CheckAlive(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TEMPORARAYTRACKER_CHECKALIVE_OFFSET))(this, deltaTime);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TEMPORARAYTRACKER_RELEASE_OFFSET))(this);
		}

		static ::System::Void Dispose(::Foundation::TemporarayTracker* target)
		{
			return ((::System::Void(*)(::Foundation::TemporarayTracker*))((::PBYTE)hIl2Cpp + FOUNDATION_TEMPORARAYTRACKER_DISPOSE_OFFSET))(target);
		}
	};
}
