#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LineupMazeBuffData; }
namespace System { class String; }

#define RPG_GAMECORE_LINEUPMAZEBUFFCONFIG_METHOD_2_B0A2E776730B42FA_OFFSET UNITYSDK_OFFSET(0x17353110)
#define RPG_GAMECORE_LINEUPMAZEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x173532B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupMazeBuffConfig_TypeDefinitionIndex = 16641;

	class LineupMazeBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SaveFile; // 0x10
		::System::String* Name; // 0x18
		::Il2CppArray<::RPG::GameCore::LineupMazeBuffData*>* MazeBuffDataList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPMAZEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B0A2E776730B42FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LineupMazeBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LineupMazeBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPMAZEBUFFCONFIG_METHOD_2_B0A2E776730B42FA_OFFSET))(a1, a2);
		}
	};
}
