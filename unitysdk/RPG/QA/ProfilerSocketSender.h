#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Sockets { class Socket; }

#define RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETCLOSE_OFFSET UNITYSDK_OFFSET(0xE7E1800)
#define RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETCONNECT_OFFSET UNITYSDK_OFFSET(0xE7E1440)
#define RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETSENDSTR_OFFSET UNITYSDK_OFFSET(0xE7E1660)
#define RPG_QA_PROFILERSOCKETSENDER_CONNECT_OFFSET UNITYSDK_OFFSET(0xE7E0C90)
#define RPG_QA_PROFILERSOCKETSENDER_SENDAUTOSAVEPATH_OFFSET UNITYSDK_OFFSET(0xE7E13A0)
#define RPG_QA_PROFILERSOCKETSENDER_SENDEND_OFFSET UNITYSDK_OFFSET(0xE7E1320)
#define RPG_QA_PROFILERSOCKETSENDER_SENDFILTEREDRECORD_OFFSET UNITYSDK_OFFSET(0xE7E12B0)
#define RPG_QA_PROFILERSOCKETSENDER_SENDRECORDDIFF_OFFSET UNITYSDK_OFFSET(0xE7E1220)
#define RPG_QA_PROFILERSOCKETSENDER_SENDRECORD_OFFSET UNITYSDK_OFFSET(0xE7E0F50)
#define RPG_QA_PROFILERSOCKETSENDER_SEND_OFFSET UNITYSDK_OFFSET(0xE7E10C0)
#define RPG_QA_PROFILERSOCKETSENDER_SETCONFIGTITLE_OFFSET UNITYSDK_OFFSET(0xE7E13F0)
#define RPG_QA_PROFILERSOCKETSENDER__CTOR_OFFSET UNITYSDK_OFFSET(0xE7E1840)

namespace RPG::QA
{
	inline static constexpr unsigned int ProfilerSocketSender_TypeDefinitionIndex = 52114;

	class ProfilerSocketSender : public ::System::Object
	{
	public:
		static ::System::Net::Sockets::Socket** StaticGet__commonSocketSender()
		{
			return (::System::Net::Sockets::Socket**)Il2CppClass::FromTypeDefinitionIndex(ProfilerSocketSender_TypeDefinitionIndex)->GetStaticField(0x21FA0);
		}
		::System::Net::Sockets::Socket* _socketSender; // 0x10
		::System::Int32 _port; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER__CTOR_OFFSET))(this);
		}

		::System::Boolean Connect(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_CONNECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean SendRecord(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SENDRECORD_OFFSET))(this, a1);
		}

		::System::Boolean SendRecordDiff(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SENDRECORDDIFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SendFilteredRecord(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SENDFILTEREDRECORD_OFFSET))(this, a1, a2);
		}

		::System::Boolean SendEnd(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SENDEND_OFFSET))(this, a1);
		}

		::System::Boolean SendAutoSavePath(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SENDAUTOSAVEPATH_OFFSET))(this, a1);
		}

		::System::Boolean SetConfigTitle(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SETCONFIGTITLE_OFFSET))(this, a1);
		}

		::System::Boolean Send(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_SEND_OFFSET))(this, a1);
		}

		static ::System::Boolean CommonSocketConnect(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETCONNECT_OFFSET))(a1, a2);
		}

		static ::System::Boolean CommonSocketSendStr(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETSENDSTR_OFFSET))(a1);
		}

		static ::System::Void CommonSocketClose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_PROFILERSOCKETSENDER_COMMONSOCKETCLOSE_OFFSET))();
		}
	};
}
