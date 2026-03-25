#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTSHOWCUTIN_METHOD_3_DE3370DB2746ACB5_OFFSET UNITYSDK_OFFSET(0x171D4400)
#define RPG_GAMECORE_FIGHTFESTSHOWCUTIN_METHOD_3_E851689F1FD33449_OFFSET UNITYSDK_OFFSET(0x171D4480)
#define RPG_GAMECORE_FIGHTFESTSHOWCUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x171D4450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestShowCutIn_TypeDefinitionIndex = 21453;

	class FightFestShowCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::System::Single Duration; // 0x20
		::System::Boolean WaitForFinish; // 0x24
		::System::Boolean IsOverrideDesc; // 0x25
		::RPG::Client::TextID TargetDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSHOWCUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE3370DB2746ACB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FightFestShowCutIn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestShowCutIn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSHOWCUTIN_METHOD_3_DE3370DB2746ACB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E851689F1FD33449(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FightFestShowCutIn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestShowCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSHOWCUTIN_METHOD_3_E851689F1FD33449_OFFSET))(a1, a2);
		}
	};
}
