#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ReactionTaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_REACTIONITEMCONFIG_METHOD_2_34BB0DDC4E60AFDB_OFFSET UNITYSDK_OFFSET(0x1D388F40)
#define RPG_GAMECORE_REACTIONITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D389100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReactionItemConfig_TypeDefinitionIndex = 15463;

	class ReactionItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Stimulus; // 0x10
		::Il2CppArray<::RPG::GameCore::PredicateConfig*>* Condition; // 0x18
		::Il2CppArray<::RPG::GameCore::ReactionTaskConfig*>* Action; // 0x20
		::System::String* ReactionSubTree; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REACTIONITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_34BB0DDC4E60AFDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReactionItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReactionItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REACTIONITEMCONFIG_METHOD_2_34BB0DDC4E60AFDB_OFFSET))(a1, a2);
		}
	};
}
