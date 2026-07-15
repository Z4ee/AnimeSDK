#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameLevelVariable; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLECOLLECTION_METHOD_2_F1A4E1C43B42CC04_OFFSET UNITYSDK_OFFSET(0x1BCC2240)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC3880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariableCollection_TypeDefinitionIndex = 18158;

	class LittleGameLevelVariableCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameLevelVariable*>* LevelVariables; // 0x10
		::Il2CppArray<::RPG::GameCore::LittleGameLevelVariable*>* LevelVariablesEntityVarAutoGen; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLECOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F1A4E1C43B42CC04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariableCollection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariableCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLECOLLECTION_METHOD_2_F1A4E1C43B42CC04_OFFSET))(a1, a2);
		}
	};
}
