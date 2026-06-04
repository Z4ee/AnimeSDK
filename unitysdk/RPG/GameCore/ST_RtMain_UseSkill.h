#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_RTMAIN_USESKILL_METHOD_4_6F7CA6562AF46925_OFFSET UNITYSDK_OFFSET(0x19C19900)
#define RPG_GAMECORE_ST_RTMAIN_USESKILL_METHOD_4_D7453D46066B304F_OFFSET UNITYSDK_OFFSET(0x19C07050)
#define RPG_GAMECORE_ST_RTMAIN_USESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x19C07000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_RtMain_UseSkill_TypeDefinitionIndex = 22756;

	class ST_RtMain_UseSkill : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* SkillName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_USESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6F7CA6562AF46925(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_RtMain_UseSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_RtMain_UseSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_USESKILL_METHOD_4_6F7CA6562AF46925_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7453D46066B304F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_RtMain_UseSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_RtMain_UseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_USESKILL_METHOD_4_D7453D46066B304F_OFFSET))(a1, a2);
		}
	};
}
