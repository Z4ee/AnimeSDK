#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLE_METHOD_2_688982FF086F6D20_OFFSET UNITYSDK_OFFSET(0x1D203BE0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLE_METHOD_2_D7B4F51914957431_OFFSET UNITYSDK_OFFSET(0x1D204720)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D204840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariable_TypeDefinitionIndex = 18674;

	class LittleGameLevelVariable : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsPrivate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_688982FF086F6D20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLE_METHOD_2_688982FF086F6D20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_D7B4F51914957431(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLE_METHOD_2_D7B4F51914957431_OFFSET))(a1, a2);
		}
	};
}
