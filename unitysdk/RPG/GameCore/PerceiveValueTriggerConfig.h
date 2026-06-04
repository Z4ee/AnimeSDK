#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PerceiveValueTriggerType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PERCEIVEVALUETRIGGERCONFIG_METHOD_2_74F8118125EBCC2F_OFFSET UNITYSDK_OFFSET(0x199ECF90)
#define RPG_GAMECORE_PERCEIVEVALUETRIGGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199ED0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerceiveValueTriggerConfig_TypeDefinitionIndex = 20959;

	class PerceiveValueTriggerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PerceiveValueTriggerType TriggerType; // 0x10
		::System::Single Value; // 0x14
		::RPG::GameCore::DynamicString* TriggerString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERCEIVEVALUETRIGGERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_74F8118125EBCC2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerceiveValueTriggerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerceiveValueTriggerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERCEIVEVALUETRIGGERCONFIG_METHOD_2_74F8118125EBCC2F_OFFSET))(a1, a2);
		}
	};
}
