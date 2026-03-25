#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChessAbilityConfig; }
namespace RPG::GameCore { class ChessModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHESSABILITYCONFIGLIST_METHOD_2_E37B7D933146EB6F_OFFSET UNITYSDK_OFFSET(0x1708A3B0)
#define RPG_GAMECORE_CHESSABILITYCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1708A520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessAbilityConfigList_TypeDefinitionIndex = 16180;

	class ChessAbilityConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChessAbilityConfig*>* AbilityList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ChessModifierConfig*>* GlobalModifiers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSABILITYCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E37B7D933146EB6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessAbilityConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessAbilityConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSABILITYCONFIGLIST_METHOD_2_E37B7D933146EB6F_OFFSET))(a1, a2);
		}
	};
}
