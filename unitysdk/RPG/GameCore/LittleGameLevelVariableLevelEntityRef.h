#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariable.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelEntityRef; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF_METHOD_3_01715A719B23DBFF_OFFSET UNITYSDK_OFFSET(0x198A0EC0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF_METHOD_3_9169AB88CCC9B710_OFFSET UNITYSDK_OFFSET(0x198A07D0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF__CTOR_OFFSET UNITYSDK_OFFSET(0x198A07C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariableLevelEntityRef_TypeDefinitionIndex = 17971;

	class LittleGameLevelVariableLevelEntityRef : public ::RPG::GameCore::LittleGameLevelVariable
	{
	public:
		::RPG::GameCore::LevelEntityRef* DefaultValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_01715A719B23DBFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariableLevelEntityRef*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariableLevelEntityRef*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF_METHOD_3_01715A719B23DBFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9169AB88CCC9B710(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariableLevelEntityRef* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariableLevelEntityRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLELEVELENTITYREF_METHOD_3_9169AB88CCC9B710_OFFSET))(a1, a2);
		}
	};
}
