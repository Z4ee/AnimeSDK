#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ST_CHESS_MAIN_MOVETOTARGET_METHOD_4_292D7181E0030C5B_OFFSET UNITYSDK_OFFSET(0x176811C0)
#define RPG_GAMECORE_ST_CHESS_MAIN_MOVETOTARGET_METHOD_4_42FADC7B770604A1_OFFSET UNITYSDK_OFFSET(0x17695970)
#define RPG_GAMECORE_ST_CHESS_MAIN_MOVETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17681170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Chess_Main_MoveToTarget_TypeDefinitionIndex = 22008;

	class ST_Chess_Main_MoveToTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_MAIN_MOVETOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_42FADC7B770604A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_Main_MoveToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_Main_MoveToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_MAIN_MOVETOTARGET_METHOD_4_42FADC7B770604A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_292D7181E0030C5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_Main_MoveToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_Main_MoveToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_MAIN_MOVETOTARGET_METHOD_4_292D7181E0030C5B_OFFSET))(a1, a2);
		}
	};
}
