#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/ActionRole.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_METHOD_5_8A0F2C36D0EDB02E_OFFSET UNITYSDK_OFFSET(0x173A63B0)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_METHOD_5_DC666C895D7F50BC_OFFSET UNITYSDK_OFFSET(0x173AC8D0)
#define RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x173A6340)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ShowCharacterCutInGroupAction_TypeDefinitionIndex = 22746;

	class ShowCharacterCutInGroupAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::System::UInt32>* CutInIDList; // 0x18
		::System::UInt32 CountLimit; // 0x20
		::RPG::GameCore::Match3::ActionRole Role; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DC666C895D7F50BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_METHOD_5_DC666C895D7F50BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_8A0F2C36D0EDB02E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ShowCharacterCutInGroupAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SHOWCHARACTERCUTINGROUPACTION_METHOD_5_8A0F2C36D0EDB02E_OFFSET))(a1, a2);
		}
	};
}
