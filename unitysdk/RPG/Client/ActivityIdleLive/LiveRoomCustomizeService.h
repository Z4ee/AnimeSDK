#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BDB350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE_REQUESTUPDATEICON_OFFSET UNITYSDK_OFFSET(0x9BDAF90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE_REQUESTUPDATETITLE_OFFSET UNITYSDK_OFFSET(0x9BDB170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9BDADD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE__ONUPDATECUSTOMINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9BDAE30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE__REQUESTUPDATEICON_B__4_0_OFFSET UNITYSDK_OFFSET(0x9BDB4D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE__REQUESTUPDATETITLE_B__5_0_OFFSET UNITYSDK_OFFSET(0x9BDB570)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int LiveRoomCustomizeService_TypeDefinitionIndex = 69413;

	class LiveRoomCustomizeService : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _UpdateTitleRspReceivePromise; // 0x10
		::RPG::Client::Promises::Promise* _UpdateIconRspReceivePromise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE__CTOR_OFFSET))(this);
		}

		::System::Void _OnUpdateCustomInfoScRsp(::System::UInt16 cmdId, ::System::Object* rspObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE__ONUPDATECUSTOMINFOSCRSP_OFFSET))(this, cmdId, rspObj);
		}

		::RPG::Client::Promises::IPromise* RequestUpdateIcon(::System::UInt32 id)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE_REQUESTUPDATEICON_OFFSET))(this, id);
		}

		::RPG::Client::Promises::IPromise* RequestUpdateTitle(::System::String* title)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE_REQUESTUPDATETITLE_OFFSET))(this, title);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _RequestUpdateIcon_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE__REQUESTUPDATEICON_B__4_0_OFFSET))(this);
		}

		::System::Void _RequestUpdateTitle_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMCUSTOMIZESERVICE__REQUESTUPDATETITLE_B__5_0_OFFSET))(this);
		}
	};
}
