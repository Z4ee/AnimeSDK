#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_METHOD_3_117FF63320A010CD_OFFSET UNITYSDK_OFFSET(0x19830430)
#define RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_METHOD_3_C4F1BF56E1145911_OFFSET UNITYSDK_OFFSET(0x198303B0)
#define RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19830400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEffectByCharacterType_TypeDefinitionIndex = 21231;

	class HideEffectByCharacterType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityType CharacterType; // 0x18
		::System::Boolean IsHide; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4F1BF56E1145911(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEffectByCharacterType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEffectByCharacterType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_METHOD_3_C4F1BF56E1145911_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_117FF63320A010CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEffectByCharacterType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEffectByCharacterType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_METHOD_3_117FF63320A010CD_OFFSET))(a1, a2);
		}
	};
}
