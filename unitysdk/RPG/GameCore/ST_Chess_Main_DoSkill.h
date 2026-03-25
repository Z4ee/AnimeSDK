#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_CHESS_MAIN_DOSKILL_METHOD_4_294B798D01F0CA4E_OFFSET UNITYSDK_OFFSET(0x17680FF0)
#define RPG_GAMECORE_ST_CHESS_MAIN_DOSKILL_METHOD_4_625E53204A019D84_OFFSET UNITYSDK_OFFSET(0x176958F0)
#define RPG_GAMECORE_ST_CHESS_MAIN_DOSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x17680FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Chess_Main_DoSkill_TypeDefinitionIndex = 22009;

	class ST_Chess_Main_DoSkill : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* SkillName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_MAIN_DOSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_625E53204A019D84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_Main_DoSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_Main_DoSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_MAIN_DOSKILL_METHOD_4_625E53204A019D84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_294B798D01F0CA4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_Main_DoSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_Main_DoSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_MAIN_DOSKILL_METHOD_4_294B798D01F0CA4E_OFFSET))(a1, a2);
		}
	};
}
