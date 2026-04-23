#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ResidentPossessionConfigItem; }
namespace System { class String; }

#define RPG_GAMECORE_RESIDENTPOSSESSIONCONFIG_METHOD_2_7E6930D4A0811543_OFFSET UNITYSDK_OFFSET(0x18CAC650)
#define RPG_GAMECORE_RESIDENTPOSSESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAC7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResidentPossessionConfig_TypeDefinitionIndex = 15659;

	class ResidentPossessionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* IgnorePrefixList; // 0x10
		::Il2CppArray<::System::String*>* IgnoreSuffixList; // 0x18
		::Il2CppArray<::RPG::GameCore::ResidentPossessionConfigItem*>* ConfigList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7E6930D4A0811543(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResidentPossessionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResidentPossessionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONCONFIG_METHOD_2_7E6930D4A0811543_OFFSET))(a1, a2);
		}
	};
}
