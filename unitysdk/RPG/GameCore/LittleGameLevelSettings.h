#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMELEVELSETTINGS_METHOD_2_21FF5356770E242C_OFFSET UNITYSDK_OFFSET(0x1DD6B910)
#define RPG_GAMECORE_LITTLEGAMELEVELSETTINGS_METHOD_2_633221B80708D735_OFFSET UNITYSDK_OFFSET(0x1DD6B4F0)
#define RPG_GAMECORE_LITTLEGAMELEVELSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6B900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelSettings_TypeDefinitionIndex = 18630;

	class LittleGameLevelSettings : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_633221B80708D735(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelSettings*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelSettings*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELSETTINGS_METHOD_2_633221B80708D735_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_21FF5356770E242C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelSettings* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELSETTINGS_METHOD_2_21FF5356770E242C_OFFSET))(a1, a2);
		}
	};
}
