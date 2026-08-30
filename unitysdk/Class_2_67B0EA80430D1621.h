#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComposeItemFailedType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

class Class_0_16E4307DCC419505_894;
namespace RPG::Client { class CheckItemReachWorldLevel; }
namespace RPG::Client { class ComposeItemData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_67B0EA80430D1621_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x15827030)
#define CLASS_2_67B0EA80430D1621_METHOD_2_8B1BB9EA0DEF0F82_OFFSET UNITYSDK_OFFSET(0x15827420)
#define CLASS_2_67B0EA80430D1621__CTOR_OFFSET UNITYSDK_OFFSET(0x15826FC0)
#define CLASS_2_67B0EA80430D1621__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x158273D0)
#define CLASS_2_67B0EA80430D1621__SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x15827150)
#define CLASS_2_67B0EA80430D1621__UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x15827290)

inline static constexpr unsigned int Class_2_67B0EA80430D1621_TypeDefinitionIndex = 65809;

class Class_2_67B0EA80430D1621 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::RPG::Client::ComposeItemData* BFGABEFBIEO; // 0x10
	::RPG::Client::CheckItemReachWorldLevel* BFPMBBCCHNO; // 0x18
	::Class_0_16E4307DCC419505_894* HEBDLOLLNPK; // 0x20

	::System::Void _ctor(::RPG::Client::ComposeItemData* a1, ::Class_0_16E4307DCC419505_894* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*, ::Class_0_16E4307DCC419505_894*))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Void _SubscribeCustomEvent(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621__SUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
	}

	::System::Void _UnsubscribeCustomEvent(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621__UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621__DOCHECKIMPL_OFFSET))(this);
	}

	::RPG::Client::ComposeItemFailedType Method_2_8B1BB9EA0DEF0F82()
	{
		return ((::RPG::Client::ComposeItemFailedType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67B0EA80430D1621_METHOD_2_8B1BB9EA0DEF0F82_OFFSET))(this);
	}
};
