#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NapStringInternCacheBackendLRU_Slot.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_ADDASMOSTRECENT_OFFSET UNITYSDK_OFFSET(0x1F01F640)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_ALLOCATESLOT_OFFSET UNITYSDK_OFFSET(0x1F01F4C0)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F01EFD0)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_GETINTERNEDSTRING_OFFSET UNITYSDK_OFFSET(0x1F01F0C0)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_GET_CACHEDSTRINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1F01EEF0)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_MOVETOMOSTRECENT_OFFSET UNITYSDK_OFFSET(0x1F01F450)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_REMOVEFROMLIST_OFFSET UNITYSDK_OFFSET(0x1F01F530)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_RESETSTATE_OFFSET UNITYSDK_OFFSET(0x1F01ED90)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU__CTOR_OFFSET UNITYSDK_OFFSET(0x1F01ECE0)

namespace Foundation
{
	inline static constexpr unsigned int NapStringInternCacheBackendLRU_TypeDefinitionIndex = 8366;

	class NapStringInternCacheBackendLRU : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* m_HashToSlot; // 0x10
		::System::Object* m_Lock; // 0x18
		::Il2CppArray<::Foundation::NapStringInternCacheBackendLRU_Slot>* m_Slots; // 0x20
		::Il2CppArray<::System::Int32>* m_FreeSlots; // 0x28
		::System::Int32 m_MostRecentSlot; // 0x30
		::System::Int32 m_LeastRecentSlot; // 0x34
		::System::Int32 m_Count; // 0x38
		::System::Int32 m_Capacity; // 0x3C
		::System::Int32 m_FreeCount; // 0x40

		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU__CTOR_OFFSET))(this, capacity);
		}

		::System::Int32 get_CachedStringCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_GET_CACHEDSTRINGCOUNT_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean freeMemory)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_CLEAR_OFFSET))(this, freeMemory);
		}

		::System::String* GetInternedString(::System::UInt64 hash, ::System::Char* chars, ::System::Int32 charCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt64, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_GETINTERNEDSTRING_OFFSET))(this, hash, chars, charCount);
		}

		::System::Void ResetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_RESETSTATE_OFFSET))(this);
		}

		::System::Int32 AllocateSlot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_ALLOCATESLOT_OFFSET))(this);
		}

		::System::Void MoveToMostRecent(::System::Int32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_MOVETOMOSTRECENT_OFFSET))(this, slot);
		}

		::System::Void RemoveFromList(::System::Int32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_REMOVEFROMLIST_OFFSET))(this, slot);
		}

		::System::Void AddAsMostRecent(::System::Int32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_ADDASMOSTRECENT_OFFSET))(this, slot);
		}
	};
}
