#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY_METHOD_3_608ABD2FB9850DAA_OFFSET UNITYSDK_OFFSET(0x19E68170)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY_METHOD_3_85947146AD2942F3_OFFSET UNITYSDK_OFFSET(0x19E681F0)
#define RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E681C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroGunPlayPuzzleModifyEnergy_TypeDefinitionIndex = 19231;

	class WolfBroGunPlayPuzzleModifyEnergy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_608ABD2FB9850DAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY_METHOD_3_608ABD2FB9850DAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85947146AD2942F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROGUNPLAYPUZZLEMODIFYENERGY_METHOD_3_85947146AD2942F3_OFFSET))(a1, a2);
		}
	};
}
