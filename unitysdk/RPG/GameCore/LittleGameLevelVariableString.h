#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariable.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING_METHOD_3_CFAD5163B4A3A243_OFFSET UNITYSDK_OFFSET(0x1DD6C7C0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING_METHOD_3_F641425DF31D4FDC_OFFSET UNITYSDK_OFFSET(0x1DD6CC50)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6C7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariableString_TypeDefinitionIndex = 18681;

	class LittleGameLevelVariableString : public ::RPG::GameCore::LittleGameLevelVariable
	{
	public:
		::System::String* DefaultValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F641425DF31D4FDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariableString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariableString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING_METHOD_3_F641425DF31D4FDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CFAD5163B4A3A243(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariableString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLESTRING_METHOD_3_CFAD5163B4A3A243_OFFSET))(a1, a2);
		}
	};
}
