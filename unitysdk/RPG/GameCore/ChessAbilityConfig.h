#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChessModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHESSABILITYCONFIG_METHOD_3_1BAD734E898BDE0E_OFFSET UNITYSDK_OFFSET(0x17089FE0)
#define RPG_GAMECORE_CHESSABILITYCONFIG_METHOD_3_FBEB9B87E99E3664_OFFSET UNITYSDK_OFFSET(0x1708A040)
#define RPG_GAMECORE_CHESSABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1708A030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessAbilityConfig_TypeDefinitionIndex = 16179;

	class ChessAbilityConfig : public ::RPG::GameCore::AbilityConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ChessModifierConfig*>* Modifiers; // 0x58
		::System::String* JsonPath; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1BAD734E898BDE0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSABILITYCONFIG_METHOD_3_1BAD734E898BDE0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FBEB9B87E99E3664(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessAbilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSABILITYCONFIG_METHOD_3_FBEB9B87E99E3664_OFFSET))(a1, a2);
		}
	};
}
