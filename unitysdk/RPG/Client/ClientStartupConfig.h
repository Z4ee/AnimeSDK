#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D6315C5C2FF98AB8;
namespace System { class String; }

#define RPG_CLIENT_CLIENTSTARTUPCONFIG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x93E3110)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_GETOVERSEAURL_OFFSET UNITYSDK_OFFSET(0x93E3A80)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_GET_DATA_OFFSET UNITYSDK_OFFSET(0x93E3C60)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_LOAD_OFFSET UNITYSDK_OFFSET(0x93E30A0)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_READBINARYFROMFILE_OFFSET UNITYSDK_OFFSET(0x93E36C0)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x93E3420)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_SET_DATA_OFFSET UNITYSDK_OFFSET(0x93E3C70)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_TOGGLETOCBDISPATCH_OFFSET UNITYSDK_OFFSET(0x93E38E0)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_TOGGLETOOSCBDISPATCH_OFFSET UNITYSDK_OFFSET(0x93E3AC0)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_WRITEBINARYTOFILE_OFFSET UNITYSDK_OFFSET(0x93E3710)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG_WRITEJSONTOFILE_OFFSET UNITYSDK_OFFSET(0x93E3890)
#define RPG_CLIENT_CLIENTSTARTUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x93E36B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientStartupConfig_TypeDefinitionIndex = 48635;

	class ClientStartupConfig : public ::System::Object
	{
	public:
		static ::RPG::Client::ClientStartupConfig** StaticGet__Data_k__BackingField()
		{
			return (::RPG::Client::ClientStartupConfig**)Il2CppClass::FromTypeDefinitionIndex(ClientStartupConfig_TypeDefinitionIndex)->GetStaticField(0x12DA0);
		}
		::System::String* ProductName; // 0x10
		::Il2CppArray<::System::String*>* OriginCbGlobalDispatchUrlList; // 0x18
		::System::String* ChannelName; // 0x20
		::System::String* BundleIdentifier; // 0x28
		::Il2CppArray<::System::String*>* OriginLiveGlobalDispatchUrlList; // 0x30
		::Il2CppArray<::System::String*>* OriginTestGlobalDispatchUrlList; // 0x38
		::System::String* ScriptDefines; // 0x40
		::Il2CppArray<::System::String*>* GlobalDispatchUrlList; // 0x48
		::System::Int32 DefaultServerIndex; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Load()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_LOAD_OFFSET))();
		}

		static ::Class_1_D6315C5C2FF98AB8* Serialize(::RPG::Client::ClientStartupConfig* config)
		{
			return ((::Class_1_D6315C5C2FF98AB8*(*)(::RPG::Client::ClientStartupConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_SERIALIZE_OFFSET))(config);
		}

		static ::RPG::Client::ClientStartupConfig* Deserialize(::Il2CppArray<::System::Byte>* byteArray)
		{
			return ((::RPG::Client::ClientStartupConfig*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_DESERIALIZE_OFFSET))(byteArray);
		}

		static ::RPG::Client::ClientStartupConfig* ReadBinaryFromFile(::System::String* fileFullPath)
		{
			return ((::RPG::Client::ClientStartupConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_READBINARYFROMFILE_OFFSET))(fileFullPath);
		}

		static ::System::Void WriteBinaryToFile(::RPG::Client::ClientStartupConfig* config, ::System::String* fileFullPath)
		{
			return ((::System::Void(*)(::RPG::Client::ClientStartupConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_WRITEBINARYTOFILE_OFFSET))(config, fileFullPath);
		}

		static ::System::Void WriteJsonToFile(::RPG::Client::ClientStartupConfig* config, ::System::String* fileFullPath)
		{
			return ((::System::Void(*)(::RPG::Client::ClientStartupConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_WRITEJSONTOFILE_OFFSET))(config, fileFullPath);
		}

		static ::System::Void ToggleToCbDispatch(::System::String* pakType, ::System::String* debugType)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_TOGGLETOCBDISPATCH_OFFSET))(pakType, debugType);
		}

		static ::System::String* GetOverSeaUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_GETOVERSEAURL_OFFSET))();
		}

		static ::System::Void ToggleToOSCbDispatch(::System::String* pakType, ::System::String* debugType)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_TOGGLETOOSCBDISPATCH_OFFSET))(pakType, debugType);
		}

		static ::RPG::Client::ClientStartupConfig* get_Data()
		{
			return ((::RPG::Client::ClientStartupConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_GET_DATA_OFFSET))();
		}

		static ::System::Void set_Data(::RPG::Client::ClientStartupConfig* value)
		{
			return ((::System::Void(*)(::RPG::Client::ClientStartupConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPCONFIG_SET_DATA_OFFSET))(value);
		}
	};
}
