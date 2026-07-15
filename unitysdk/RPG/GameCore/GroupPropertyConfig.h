#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupPropertySide.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_GROUPPROPERTYCONFIG_METHOD_2_6BFF9490B892613C_OFFSET UNITYSDK_OFFSET(0x1D081330)
#define RPG_GAMECORE_GROUPPROPERTYCONFIG_METHOD_2_6E26656A9824F8DA_OFFSET UNITYSDK_OFFSET(0x1D0810A0)
#define RPG_GAMECORE_GROUPPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D081320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupPropertyConfig_TypeDefinitionIndex = 17556;

	class GroupPropertyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* Name; // 0x18
		::RPG::GameCore::GroupPropertySide Side; // 0x20
		::System::Int16 DefaultValue; // 0x24
		::System::Int16 MaxValue; // 0x26
		::System::Int16 MinValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6E26656A9824F8DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPPROPERTYCONFIG_METHOD_2_6E26656A9824F8DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6BFF9490B892613C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPPROPERTYCONFIG_METHOD_2_6BFF9490B892613C_OFFSET))(a1, a2);
		}
	};
}
