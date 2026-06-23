#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class MusicBattleSubSystem_LevelPressInfo; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170245C0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17024600)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___C__PREDEALTRACKNEW_B__77_0_OFFSET UNITYSDK_OFFSET(0x17024610)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MusicBattleSubSystem___c_TypeDefinitionIndex = 81420;

	class MusicBattleSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::Battle::MusicBattleSubSystem_LevelPressInfo*>** StaticGet___9__77_0()
		{
			return (::System::Comparison_1<::MoleMole::Battle::MusicBattleSubSystem_LevelPressInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x37190);
		}
		static ::MoleMole::Battle::MusicBattleSubSystem___c** StaticGet___9()
		{
			return (::MoleMole::Battle::MusicBattleSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x37198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _PreDealTrackNew_b__77_0(::MoleMole::Battle::MusicBattleSubSystem_LevelPressInfo* x, ::MoleMole::Battle::MusicBattleSubSystem_LevelPressInfo* y)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::MusicBattleSubSystem_LevelPressInfo*, ::MoleMole::Battle::MusicBattleSubSystem_LevelPressInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___C__PREDEALTRACKNEW_B__77_0_OFFSET))(this, x, y);
		}
	};
}
