#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/FieldInfo_EventInfo_K_Count.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B7E341C5F1A6F199;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_GET_EVENTSBYCOUNT_OFFSET UNITYSDK_OFFSET(0x7BDFC0)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_GET_EVENTSBYTIME_OFFSET UNITYSDK_OFFSET(0x7BDFB0)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_GET_RUNTIME_OFFSET UNITYSDK_OFFSET(0x7BDF90)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_GET_TOPRACINGCOUNT_OFFSET UNITYSDK_OFFSET(0x7BDFA0)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_METHOD_2_117C21964544FD12_OFFSET UNITYSDK_OFFSET(0x7BDFF0)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_METHOD_2_BE74898B3DC51114_OFFSET UNITYSDK_OFFSET(0x7BDFE0)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CA3070)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x7BDFD0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FieldInfo_EventInfo_TypeDefinitionIndex = 71333;

	struct alignas(8) FieldInfo_EventInfo
	{
		static ::System::Collections::Generic::List_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>** StaticGet__TopRacingCache()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>**)Il2CppClass::FromTypeDefinitionIndex(FieldInfo_EventInfo_TypeDefinitionIndex)->GetStaticField(0x50A40);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_s_CacheEventTypeString()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FieldInfo_EventInfo_TypeDefinitionIndex)->GetStaticField(0x50A48);
		}
		::System::Single startTime; // 0x10
		::System::Int32 totalCount; // 0x14
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* eventRacingCount; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* eventTopRacingCount; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* eventCountByID; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>* events; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>* _eventsByTime; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>* _eventsByCount; // 0x40

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO__CCTOR_OFFSET))();
		}

		::System::Single get_RunTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_GET_RUNTIME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>* get_TopRacingCount()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_GET_TOPRACINGCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>* get_eventsByTime()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_GET_EVENTSBYTIME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>* get_eventsByCount()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_GET_EVENTSBYCOUNT_OFFSET))(this);
		}

		::System::Void Method_2_BE74898B3DC51114(::Class_1_B7E341C5F1A6F199* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_METHOD_2_BE74898B3DC51114_OFFSET))(this, a1);
		}

		::System::Void Method_2_117C21964544FD12(::Class_1_B7E341C5F1A6F199* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_METHOD_2_117C21964544FD12_OFFSET))(this, a1);
		}
	};
}
