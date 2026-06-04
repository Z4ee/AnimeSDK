#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D6315C5C2FF98AB8;
namespace System { class String; }

#define RPG_CLIENT_CLIENTSTARTUPCONFIG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB6CF610)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_GETOVERSEAURL_OFFSET UNITYSDK_OFFSET(0xB6CFF30)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_GET_DATA_OFFSET UNITYSDK_OFFSET(0xB6D0110)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_LOAD_OFFSET UNITYSDK_OFFSET(0xB6CF5A0)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_READBINARYFROMFILE_OFFSET UNITYSDK_OFFSET(0xB6CFB70)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xB6CF900)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_SET_DATA_OFFSET UNITYSDK_OFFSET(0xB6D0120)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_TOGGLETOCBDISPATCH_OFFSET UNITYSDK_OFFSET(0xB6CFD90)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_TOGGLETOOSCBDISPATCH_OFFSET UNITYSDK_OFFSET(0xB6CFF70)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_WRITEBINARYTOFILE_OFFSET UNITYSDK_OFFSET(0xB6CFBC0)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_WRITEJSONTOFILE_OFFSET UNITYSDK_OFFSET(0xB6CFD40)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CFB60)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientStartupConfig_TypeDefinitionIndex = 56118;

	class ClientStartupConfig : public ::System::Object
	{
	public:
		static ::RPG::Client::ClientStartupConfig** StaticGet__Data_k__BackingField()
		{
			return (::RPG::Client::ClientStartupConfig**)Il2CppClass::FromTypeDefinitionIndex(ClientStartupConfig_TypeDefinitionIndex)->GetStaticField(0x10E70);
		}
		::Il2CppArray<::System::String*>* OriginLiveGlobalDispatchUrlList; // 0x10
		::Il2CppArray<::System::String*>* GlobalDispatchUrlList; // 0x18
		::Il2CppArray<::System::String*>* OriginTestGlobalDispatchUrlList; // 0x20
		::System::String* BundleIdentifier; // 0x28
		::System::String* ScriptDefines; // 0x30
		::System::String* ChannelName; // 0x38
		::System::String* ProductName; // 0x40
		::Il2CppArray<::System::String*>* OriginCbGlobalDispatchUrlList; // 0x48
		::System::Int32 DefaultServerIndex; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Load()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_LOAD_OFFSET))();
		}

		static ::Class_1_D6315C5C2FF98AB8* Serialize(::RPG::Client::ClientStartupConfig* a1)
		{
			return ((::Class_1_D6315C5C2FF98AB8*(*)(::RPG::Client::ClientStartupConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_SERIALIZE_OFFSET))(a1);
		}

		static ::RPG::Client::ClientStartupConfig* Deserialize(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::RPG::Client::ClientStartupConfig*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_DESERIALIZE_OFFSET))(a1);
		}

		static ::RPG::Client::ClientStartupConfig* ReadBinaryFromFile(::System::String* a1)
		{
			return ((::RPG::Client::ClientStartupConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_READBINARYFROMFILE_OFFSET))(a1);
		}

		static ::System::Void WriteBinaryToFile(::RPG::Client::ClientStartupConfig* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::ClientStartupConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_WRITEBINARYTOFILE_OFFSET))(a1, a2);
		}

		static ::System::Void WriteJsonToFile(::RPG::Client::ClientStartupConfig* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::ClientStartupConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_WRITEJSONTOFILE_OFFSET))(a1, a2);
		}

		static ::System::Void ToggleToCbDispatch(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_TOGGLETOCBDISPATCH_OFFSET))(a1, a2);
		}

		static ::System::String* GetOverSeaUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_GETOVERSEAURL_OFFSET))();
		}

		static ::System::Void ToggleToOSCbDispatch(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_TOGGLETOOSCBDISPATCH_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ClientStartupConfig* get_Data()
		{
			return ((::RPG::Client::ClientStartupConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_GET_DATA_OFFSET))();
		}

		static ::System::Void set_Data(::RPG::Client::ClientStartupConfig* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ClientStartupConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_SET_DATA_OFFSET))(a1);
		}
	};
}
