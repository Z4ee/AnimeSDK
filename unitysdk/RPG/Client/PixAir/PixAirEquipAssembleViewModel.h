#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_47EB23CB5C4B2615_42;
class Class_1_91C9195F7AC754D8;
class Class_1_D031E8F06825AB4F;
namespace RPG::Client::PixAir { class PixAirBagEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirBattleEquipsViewModel; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_GET_BTNCLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0x1C837440)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_SET_BTNCLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0x1C837450)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8372A0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipAssembleViewModel_TypeDefinitionIndex = 78771;

	class PixAirEquipAssembleViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_91C9195F7AC754D8* _GameFlowService; // 0x20
		::Sofa::Core::SimpleCommand* _BtnCloseCommand_k__BackingField; // 0x28
		::RPG::Client::PixAir::PixAirBattleEquipsViewModel* BattleEquipsViewModel; // 0x30
		::Class_1_47EB23CB5C4B2615_42* _WindowService; // 0x38
		::Class_1_D031E8F06825AB4F* _EquipService; // 0x40
		::RPG::Client::PixAir::PixAirBagEquipsViewModel* BagEquipsViewModel; // 0x48

		::System::Void _ctor(::Class_1_47EB23CB5C4B2615_42* a1, ::Class_1_91C9195F7AC754D8* a2, ::Class_1_D031E8F06825AB4F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_47EB23CB5C4B2615_42*, ::Class_1_91C9195F7AC754D8*, ::Class_1_D031E8F06825AB4F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Sofa::Core::SimpleCommand* get_BtnCloseCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_GET_BTNCLOSECOMMAND_OFFSET))(this);
		}

		::System::Void set_BtnCloseCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_SET_BTNCLOSECOMMAND_OFFSET))(this, a1);
		}
	};
}
