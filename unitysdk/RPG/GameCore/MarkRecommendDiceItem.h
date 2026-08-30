#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MARKRECOMMENDDICEITEM_METHOD_2_6661CD32BB42EF5F_OFFSET UNITYSDK_OFFSET(0x1D25C800)
#define RPG_GAMECORE_MARKRECOMMENDDICEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D25C900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarkRecommendDiceItem_TypeDefinitionIndex = 15982;

	class MarkRecommendDiceItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x10
		::System::String* IconPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKRECOMMENDDICEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6661CD32BB42EF5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarkRecommendDiceItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarkRecommendDiceItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKRECOMMENDDICEITEM_METHOD_2_6661CD32BB42EF5F_OFFSET))(a1, a2);
		}
	};
}
