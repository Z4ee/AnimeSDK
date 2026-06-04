#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLESKILLTRIGGERKEYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1983E830)
#define RPG_GAMECORE_ILBATTLESKILLTRIGGERKEYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1983E9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleSkillTriggerKeyRow_TypeDefinitionIndex = 13144;

	class ILBattleSkillTriggerKeyRow : public ::System::Object
	{
	public:
		::System::String* SkillTriggerKey; // 0x10
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLESKILLTRIGGERKEYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLESKILLTRIGGERKEYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
