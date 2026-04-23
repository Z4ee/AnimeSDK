#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE_METHOD_3_4C360DE58383F0E7_OFFSET UNITYSDK_OFFSET(0x187C6B90)
#define RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE_METHOD_3_9278CD33DC2848E8_OFFSET UNITYSDK_OFFSET(0x187C6C60)
#define RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x187C6C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterSomatoType_TypeDefinitionIndex = 22666;

	class ChangeCharacterSomatoType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::CharacterSomatoType SomatoType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C360DE58383F0E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterSomatoType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterSomatoType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE_METHOD_3_4C360DE58383F0E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9278CD33DC2848E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterSomatoType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterSomatoType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERSOMATOTYPE_METHOD_3_9278CD33DC2848E8_OFFSET))(a1, a2);
		}
	};
}
