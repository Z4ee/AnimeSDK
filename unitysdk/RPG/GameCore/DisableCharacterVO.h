#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISABLECHARACTERVO_METHOD_3_8B9B6C260A9BFA4B_OFFSET UNITYSDK_OFFSET(0x1887F520)
#define RPG_GAMECORE_DISABLECHARACTERVO_METHOD_3_A7BD271D5EE0CBC2_OFFSET UNITYSDK_OFFSET(0x1887F4A0)
#define RPG_GAMECORE_DISABLECHARACTERVO__CTOR_OFFSET UNITYSDK_OFFSET(0x1887F4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableCharacterVO_TypeDefinitionIndex = 21816;

	class DisableCharacterVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean AllType; // 0x18
		::System::Boolean RestoreVO; // 0x19
		::Il2CppArray<::RPG::GameCore::CharacterVOType>* VOTypes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLECHARACTERVO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A7BD271D5EE0CBC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableCharacterVO*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableCharacterVO*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLECHARACTERVO_METHOD_3_A7BD271D5EE0CBC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B9B6C260A9BFA4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableCharacterVO* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableCharacterVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLECHARACTERVO_METHOD_3_8B9B6C260A9BFA4B_OFFSET))(a1, a2);
		}
	};
}
