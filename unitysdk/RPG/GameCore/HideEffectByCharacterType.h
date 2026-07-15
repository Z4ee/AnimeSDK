#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_METHOD_3_117FF63320A010CD_OFFSET UNITYSDK_OFFSET(0x1B683160)
#define RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_METHOD_3_B14EEE98E54A419A_OFFSET UNITYSDK_OFFSET(0x1B683120)
#define RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B683150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEffectByCharacterType_TypeDefinitionIndex = 21646;

	class HideEffectByCharacterType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityType CharacterType; // 0x18
		::System::Boolean IsHide; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B14EEE98E54A419A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEffectByCharacterType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEffectByCharacterType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_METHOD_3_B14EEE98E54A419A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_117FF63320A010CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEffectByCharacterType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEffectByCharacterType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEEFFECTBYCHARACTERTYPE_METHOD_3_117FF63320A010CD_OFFSET))(a1, a2);
		}
	};
}
