#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MunicipalChatNPCInfo; }
namespace RPG::GameCore { class MunicipalChatNodeInfo; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATCONFIG_METHOD_2_29AEDB1D95A71E77_OFFSET UNITYSDK_OFFSET(0x1B1D4050)
#define RPG_GAMECORE_MUNICIPALCHATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D42B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatConfig_TypeDefinitionIndex = 16256;

	class MunicipalChatConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MunicipalChatNPCInfo*>* CharacterSlotList; // 0x10
		::System::String* StartNodeName; // 0x18
		::System::String* BreakNodeName; // 0x20
		::System::Single RecoverMinTime; // 0x28
		::System::Single RecoverMaxTime; // 0x2C
		::Il2CppArray<::RPG::GameCore::MunicipalChatNodeInfo*>* NodeList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_29AEDB1D95A71E77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATCONFIG_METHOD_2_29AEDB1D95A71E77_OFFSET))(a1, a2);
		}
	};
}
