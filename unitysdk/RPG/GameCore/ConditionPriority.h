#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CONDITIONPRIORITY_METHOD_2_AC98736F767718EC_OFFSET UNITYSDK_OFFSET(0x1CFF8910)
#define RPG_GAMECORE_CONDITIONPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF8A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionPriority_TypeDefinitionIndex = 22409;

	class ConditionPriority : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OverridePriority; // 0x10
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONPRIORITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AC98736F767718EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionPriority*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONPRIORITY_METHOD_2_AC98736F767718EC_OFFSET))(a1, a2);
		}
	};
}
