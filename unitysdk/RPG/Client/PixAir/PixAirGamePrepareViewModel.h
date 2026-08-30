#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_47EB23CB5C4B2615_42;
class Class_1_91C9195F7AC754D8;
class Class_1_D031E8F06825AB4F;
namespace RPG::Client::PixAir { class PixAirBattleEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirGameProgressViewModel; }
namespace RPG::Client::PixAir { class PixAirPrepareContentViewModel; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_GET_BTNSHOWEQUIPASSEMBLE_OFFSET UNITYSDK_OFFSET(0xDB04630)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_SET_BTNSHOWEQUIPASSEMBLE_OFFSET UNITYSDK_OFFSET(0xDB04640)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDB04360)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xDB04650)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGamePrepareViewModel_TypeDefinitionIndex = 78775;

	class PixAirGamePrepareViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_D031E8F06825AB4F* _EquipService; // 0x20
		::RPG::Client::PixAir::PixAirBattleEquipsViewModel* BattleEquipsViewModel; // 0x28
		::Class_1_91C9195F7AC754D8* _GameFlowService; // 0x30
		::RPG::Client::PixAir::PixAirPrepareContentViewModel* ContentViewModel; // 0x38
		::Sofa::Core::SimpleCommand* _BtnShowEquipAssemble_k__BackingField; // 0x40
		::Class_1_47EB23CB5C4B2615_42* _WindowService; // 0x48
		::RPG::Client::PixAir::PixAirGameProgressViewModel* ProgressViewModel; // 0x50

		::System::Void _ctor(::Class_1_47EB23CB5C4B2615_42* a1, ::Class_1_91C9195F7AC754D8* a2, ::Class_1_D031E8F06825AB4F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_47EB23CB5C4B2615_42*, ::Class_1_91C9195F7AC754D8*, ::Class_1_D031E8F06825AB4F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Sofa::Core::SimpleCommand* get_BtnShowEquipAssemble()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_GET_BTNSHOWEQUIPASSEMBLE_OFFSET))(this);
		}

		::System::Void set_BtnShowEquipAssemble(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_SET_BTNSHOWEQUIPASSEMBLE_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
