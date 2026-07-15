#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSIDEPUZZLECONFIG_METHOD_2_BA7D430F748B6CF7_OFFSET UNITYSDK_OFFSET(0x1BEB2700)
#define RPG_GAMECORE_FIVEDIMSIDEPUZZLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB28A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSidePuzzleConfig_TypeDefinitionIndex = 17828;

	class FiveDimSidePuzzleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimDynamicVar* PuzzleStateLevelVar; // 0x10
		::System::String* SkillIconNode; // 0x18
		::System::String* PuzzleIconNode; // 0x20
		::System::String* ChestIconNode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIDEPUZZLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BA7D430F748B6CF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSidePuzzleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSidePuzzleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIDEPUZZLECONFIG_METHOD_2_BA7D430F748B6CF7_OFFSET))(a1, a2);
		}
	};
}
