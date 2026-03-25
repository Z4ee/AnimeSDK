#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARTCHIMERAWORKROUND_METHOD_3_4ED8441665218448_OFFSET UNITYSDK_OFFSET(0x17774110)
#define RPG_GAMECORE_STARTCHIMERAWORKROUND_METHOD_3_9401EE6F1DAD0751_OFFSET UNITYSDK_OFFSET(0x17774090)
#define RPG_GAMECORE_STARTCHIMERAWORKROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x177740E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartChimeraWorkRound_TypeDefinitionIndex = 19898;

	class StartChimeraWorkRound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 WorkRoundID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCHIMERAWORKROUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9401EE6F1DAD0751(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartChimeraWorkRound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartChimeraWorkRound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCHIMERAWORKROUND_METHOD_3_9401EE6F1DAD0751_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4ED8441665218448(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartChimeraWorkRound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartChimeraWorkRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCHIMERAWORKROUND_METHOD_3_4ED8441665218448_OFFSET))(a1, a2);
		}
	};
}
