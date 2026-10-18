#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_9.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_1DC1CF6E947A9643;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLAYERFORBIDMODULE_GETFORBIDINFO_OFFSET UNITYSDK_OFFSET(0xDBEFC70)
#define RPG_CLIENT_PLAYERFORBIDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xDBEF790)
#define RPG_CLIENT_PLAYERFORBIDMODULE_ISFORBID_OFFSET UNITYSDK_OFFSET(0xDBEFA90)
#define RPG_CLIENT_PLAYERFORBIDMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xDBEF870)
#define RPG_CLIENT_PLAYERFORBIDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xDBEF900)
#define RPG_CLIENT_PLAYERFORBIDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xDBF0400)
#define RPG_CLIENT_PLAYERFORBIDMODULE__ISFORBIDACTIVE_OFFSET UNITYSDK_OFFSET(0xDBEFB80)
#define RPG_CLIENT_PLAYERFORBIDMODULE__ONGETPLAYERFORBIDSCRSP_OFFSET UNITYSDK_OFFSET(0xDBEFE40)
#define RPG_CLIENT_PLAYERFORBIDMODULE__ONMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xDBEFD80)
#define RPG_CLIENT_PLAYERFORBIDMODULE__ONPLAYERFORBIDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xDBF0380)
#define RPG_CLIENT_PLAYERFORBIDMODULE__UPDATEFORBIDLIST_OFFSET UNITYSDK_OFFSET(0xDBEFEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerForbidModule_TypeDefinitionIndex = 66668;

	class PlayerForbidModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_9, ::Class_1_1DC1CF6E947A9643*>* _ForbidDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Boolean IsForbid(::Enum_3_DB663931210BBC27_9 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_DB663931210BBC27_9))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE_ISFORBID_OFFSET))(this, a1);
		}

		::Class_1_1DC1CF6E947A9643* GetForbidInfo(::Enum_3_DB663931210BBC27_9 a1)
		{
			return ((::Class_1_1DC1CF6E947A9643*(*)(::PVOID, ::Enum_3_DB663931210BBC27_9))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE_GETFORBIDINFO_OFFSET))(this, a1);
		}

		::System::Void _OnModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__ONMODULEINITREQUEST_OFFSET))(this);
		}

		::System::Void _OnGetPlayerForbidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__ONGETPLAYERFORBIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerForbidScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__ONPLAYERFORBIDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateForbidList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1DC1CF6E947A9643*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1DC1CF6E947A9643*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__UPDATEFORBIDLIST_OFFSET))(this, a1);
		}

		static ::System::Boolean _IsForbidActive(::Class_1_1DC1CF6E947A9643* a1)
		{
			return ((::System::Boolean(*)(::Class_1_1DC1CF6E947A9643*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__ISFORBIDACTIVE_OFFSET))(a1);
		}
	};
}
