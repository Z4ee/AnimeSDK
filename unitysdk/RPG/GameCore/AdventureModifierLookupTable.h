#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREMODIFIERLOOKUPTABLE_METHOD_2_12164D3E7F4E6405_OFFSET UNITYSDK_OFFSET(0x19450420)
#define RPG_GAMECORE_ADVENTUREMODIFIERLOOKUPTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19450500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierLookupTable_TypeDefinitionIndex = 16643;

	class AdventureModifierLookupTable : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>* ModifierMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERLOOKUPTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_12164D3E7F4E6405(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureModifierLookupTable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureModifierLookupTable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERLOOKUPTABLE_METHOD_2_12164D3E7F4E6405_OFFSET))(a1, a2);
		}
	};
}
