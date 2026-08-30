#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_1E995031DDCC6C63_OFFSET UNITYSDK_OFFSET(0x1BBDED00)
#define RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_9B3DFC5CEB06886B_OFFSET UNITYSDK_OFFSET(0x1BBDEEB0)
#define RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_9CEB163A7F796DA0_OFFSET UNITYSDK_OFFSET(0x1BBDED40)
#define RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_FE8A9FEB2BAE82F6_OFFSET UNITYSDK_OFFSET(0x1BBDEE80)
#define RPG_GAMECORE_BYHASINSERTABILITYPENDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDED30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasInsertAbilityPending_TypeDefinitionIndex = 23267;

	class ByHasInsertAbilityPending : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1E995031DDCC6C63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertAbilityPending*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertAbilityPending*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_1E995031DDCC6C63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9CEB163A7F796DA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertAbilityPending* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertAbilityPending*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_9CEB163A7F796DA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE8A9FEB2BAE82F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityPending*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityPending*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_FE8A9FEB2BAE82F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B3DFC5CEB06886B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityPending* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityPending*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_9B3DFC5CEB06886B_OFFSET))(a1, a2);
		}
	};
}
