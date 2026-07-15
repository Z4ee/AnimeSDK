#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupAdaptDataType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_GROUPTOMEMBERENTITYDATACONFIG_METHOD_2_CC54ACB79E06AB09_OFFSET UNITYSDK_OFFSET(0x1B667FE0)
#define RPG_GAMECORE_GROUPTOMEMBERENTITYDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B668160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupToMemberEntityDataConfig_TypeDefinitionIndex = 19954;

	class GroupToMemberEntityDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TargetMemberInstanceID; // 0x10
		::RPG::GameCore::GroupAdaptDataType SourceDataType; // 0x14
		::RPG::GameCore::DynamicString* SourceName; // 0x18
		::RPG::GameCore::DynamicString* TargetName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPTOMEMBERENTITYDATACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CC54ACB79E06AB09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupToMemberEntityDataConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupToMemberEntityDataConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPTOMEMBERENTITYDATACONFIG_METHOD_2_CC54ACB79E06AB09_OFFSET))(a1, a2);
		}
	};
}
