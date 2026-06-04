#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_56;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYSTATUSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC18CB60)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_GET_TRIGGEREDOPTIONLIST_OFFSET UNITYSDK_OFFSET(0xC18D0B0)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC18CAE0)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_ISOPTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC18CFF0)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_SET_TRIGGEREDOPTIONLIST_OFFSET UNITYSDK_OFFSET(0xC18D0C0)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC18CBC0)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0xC18CB20)
#define RPG_CLIENT_MONOPOLYSTATUSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC18D0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyStatusInfo_TypeDefinitionIndex = 61985;

	class MonopolyStatusInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TriggeredOptionList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_45BB92167AED63A0_56* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsOptionTriggered(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_ISOPTIONTRIGGERED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TriggeredOptionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_GET_TRIGGEREDOPTIONLIST_OFFSET))(this);
		}

		::System::Void set_TriggeredOptionList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_SET_TRIGGEREDOPTIONLIST_OFFSET))(this, a1);
		}
	};
}
