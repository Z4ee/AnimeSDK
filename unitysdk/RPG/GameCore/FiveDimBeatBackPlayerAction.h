#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_METHOD_3_37069262025FCE69_OFFSET UNITYSDK_OFFSET(0x1D0A44D0)
#define RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_METHOD_3_DD4EA1C3B6F0FF94_OFFSET UNITYSDK_OFFSET(0x1D0A4550)
#define RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBeatBackPlayerAction_TypeDefinitionIndex = 18477;

	class FiveDimBeatBackPlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_37069262025FCE69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBeatBackPlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBeatBackPlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_METHOD_3_37069262025FCE69_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD4EA1C3B6F0FF94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBeatBackPlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBeatBackPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_METHOD_3_DD4EA1C3B6F0FF94_OFFSET))(a1, a2);
		}
	};
}
