#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_32770405D1E18A2A.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_SERVERLISTINFO_GETSERVERHOST_OFFSET UNITYSDK_OFFSET(0x1809ED40)
#define MOLEMOLE_SERVERLISTINFO_GETSERVERNAME_OFFSET UNITYSDK_OFFSET(0x1809ECC0)
#define MOLEMOLE_SERVERLISTINFO_GETSERVERTITLE_OFFSET UNITYSDK_OFFSET(0x1809ED00)
#define MOLEMOLE_SERVERLISTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1809EEC0)

namespace MoleMole
{
	inline static constexpr unsigned int ServerListInfo_TypeDefinitionIndex = 77417;

	class ServerListInfo : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* dispatch_url; // 0x18
		::System::Int32 retcode; // 0x20
		::System::String* title; // 0x28
		::System::Int64 stop_begin_time; // 0x30
		::System::Int64 stop_end_time; // 0x38
		::System::String* msg; // 0x40
		::System::String* env; // 0x48
		::System::String* biz; // 0x50
		::System::Int32 area; // 0x58
		::System::Int32 psn_region; // 0x5C
		::System::String* ping_url; // 0x60
		::System::Boolean is_recommend; // 0x68
		::System::String* ip; // 0x70
		::System::Int32 port; // 0x78
		::System::String* noticeRegion; // 0x80
		::Struct_2_32770405D1E18A2A Status; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERVERLISTINFO__CTOR_OFFSET))(this);
		}

		::System::String* GetServerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERVERLISTINFO_GETSERVERNAME_OFFSET))(this);
		}

		::System::String* GetServerTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERVERLISTINFO_GETSERVERTITLE_OFFSET))(this);
		}

		::System::String* GetServerHost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERVERLISTINFO_GETSERVERHOST_OFFSET))(this);
		}
	};
}
