#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE_METHOD_3_B342A9EDA9511D87_OFFSET UNITYSDK_OFFSET(0x1BE3A4A0)
#define RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE_METHOD_3_C9E7EB81913A8CCC_OFFSET UNITYSDK_OFFSET(0x1BE3A4F0)
#define RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3A4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleFeverTimeScreenFire_TypeDefinitionIndex = 22467;

	class ShowBattleFeverTimeScreenFire : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B342A9EDA9511D87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleFeverTimeScreenFire*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleFeverTimeScreenFire*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE_METHOD_3_B342A9EDA9511D87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C9E7EB81913A8CCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleFeverTimeScreenFire* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleFeverTimeScreenFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE_METHOD_3_C9E7EB81913A8CCC_OFFSET))(a1, a2);
		}
	};
}
