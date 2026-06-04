#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariable.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LGameEntityRef; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF_METHOD_3_A2F7FA22840EDDA6_OFFSET UNITYSDK_OFFSET(0x198A04D0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF_METHOD_3_ED21528E6B85A351_OFFSET UNITYSDK_OFFSET(0x198A0E60)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF__CTOR_OFFSET UNITYSDK_OFFSET(0x198A04C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariableEntityRef_TypeDefinitionIndex = 17970;

	class LittleGameLevelVariableEntityRef : public ::RPG::GameCore::LittleGameLevelVariable
	{
	public:
		::RPG::GameCore::LGameEntityRef* DefaultValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED21528E6B85A351(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariableEntityRef*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariableEntityRef*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF_METHOD_3_ED21528E6B85A351_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2F7FA22840EDDA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariableEntityRef* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariableEntityRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEENTITYREF_METHOD_3_A2F7FA22840EDDA6_OFFSET))(a1, a2);
		}
	};
}
