#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETADVLOCKDISTANCE_METHOD_3_8EB6AFF206610CC3_OFFSET UNITYSDK_OFFSET(0x1DB51FE0)
#define RPG_GAMECORE_SETADVLOCKDISTANCE_METHOD_3_C37009FF65B60202_OFFSET UNITYSDK_OFFSET(0x1DB52020)
#define RPG_GAMECORE_SETADVLOCKDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB52010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvLockDistance_TypeDefinitionIndex = 19920;

	class SetAdvLockDistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x18
		::System::Boolean IsPushValue; // 0x1C
		::System::Single LockDistance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVLOCKDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8EB6AFF206610CC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvLockDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvLockDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVLOCKDISTANCE_METHOD_3_8EB6AFF206610CC3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C37009FF65B60202(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvLockDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvLockDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVLOCKDISTANCE_METHOD_3_C37009FF65B60202_OFFSET))(a1, a2);
		}
	};
}
