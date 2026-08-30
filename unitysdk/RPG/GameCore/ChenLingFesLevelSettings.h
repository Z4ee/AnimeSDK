#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelSettings.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGFESLEVELSETTINGS_METHOD_3_0B53544F572FFEE8_OFFSET UNITYSDK_OFFSET(0x1E016690)
#define RPG_GAMECORE_CHENLINGFESLEVELSETTINGS_METHOD_3_5A02270E90DE4CBD_OFFSET UNITYSDK_OFFSET(0x1E0165C0)
#define RPG_GAMECORE_CHENLINGFESLEVELSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E016680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesLevelSettings_TypeDefinitionIndex = 18214;

	class ChenLingFesLevelSettings : public ::RPG::GameCore::LittleGameLevelSettings
	{
	public:
		::System::Int32 InitFeverValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A02270E90DE4CBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesLevelSettings*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesLevelSettings*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELSETTINGS_METHOD_3_5A02270E90DE4CBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B53544F572FFEE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesLevelSettings* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELSETTINGS_METHOD_3_0B53544F572FFEE8_OFFSET))(a1, a2);
		}
	};
}
