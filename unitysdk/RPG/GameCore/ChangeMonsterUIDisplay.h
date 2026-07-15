#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChangeCharacterUIDisplay.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGEMONSTERUIDISPLAY_METHOD_4_68AD134DF2A6BC52_OFFSET UNITYSDK_OFFSET(0x1B7198D0)
#define RPG_GAMECORE_CHANGEMONSTERUIDISPLAY_METHOD_4_F61B8E1C405AFC2E_OFFSET UNITYSDK_OFFSET(0x1B71ADC0)
#define RPG_GAMECORE_CHANGEMONSTERUIDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B719890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeMonsterUIDisplay_TypeDefinitionIndex = 22825;

	class ChangeMonsterUIDisplay : public ::RPG::GameCore::ChangeCharacterUIDisplay
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* Strategies; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERUIDISPLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F61B8E1C405AFC2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMonsterUIDisplay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMonsterUIDisplay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERUIDISPLAY_METHOD_4_F61B8E1C405AFC2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_68AD134DF2A6BC52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMonsterUIDisplay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMonsterUIDisplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERUIDISPLAY_METHOD_4_68AD134DF2A6BC52_OFFSET))(a1, a2);
		}
	};
}
