#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_0DF1D818AC0BE25A.h"

class Class_3_6F28FFD006F2B451;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLGAMEUPGRADEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBC1B10)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallGameUpgradeDialogContext_TypeDefinitionIndex = 88445;

	class BallGameUpgradeDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_0DF1D818AC0BE25A>* Bullets; // 0x28
		::Class_3_6F28FFD006F2B451* world; // 0x30
		::System::Int32 LevelTotal; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLGAMEUPGRADEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
