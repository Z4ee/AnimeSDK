#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_ParamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PointQueryConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_DOSKILL_METHOD_4_3F0A4055F93A9B1A_OFFSET UNITYSDK_OFFSET(0x176961F0)
#define RPG_GAMECORE_ST_MAIN_DOSKILL_METHOD_4_5B9CC7A7863849BD_OFFSET UNITYSDK_OFFSET(0x17681BD0)
#define RPG_GAMECORE_ST_MAIN_DOSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x17681B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_DoSkill_TypeDefinitionIndex = 18375;

	class ST_Main_DoSkill : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::RPG::GameCore::ST_ParamType CDType; // 0x20
		::System::Single CD; // 0x24
		::System::String* CDVariableName; // 0x28
		::RPG::GameCore::PointQueryConfig* SkillPointPos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_DOSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3F0A4055F93A9B1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_DoSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_DoSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_DOSKILL_METHOD_4_3F0A4055F93A9B1A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5B9CC7A7863849BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_DoSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_DoSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_DOSKILL_METHOD_4_5B9CC7A7863849BD_OFFSET))(a1, a2);
		}
	};
}
