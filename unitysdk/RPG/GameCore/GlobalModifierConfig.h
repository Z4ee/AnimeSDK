#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALMODIFIERCONFIG_METHOD_2_113E92F0CCE60E19_OFFSET UNITYSDK_OFFSET(0x1D94BE40)
#define RPG_GAMECORE_GLOBALMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D95AA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalModifierConfig_TypeDefinitionIndex = 18025;

	class GlobalModifierConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>* ModifierMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_113E92F0CCE60E19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMODIFIERCONFIG_METHOD_2_113E92F0CCE60E19_OFFSET))(a1, a2);
		}
	};
}
