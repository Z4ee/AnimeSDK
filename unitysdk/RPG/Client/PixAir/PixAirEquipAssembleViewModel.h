#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_17365F5FA0311FC9;
class Class_1_2FDE33CCAE591AA8;
class Class_1_774B79B08DDA9E9C;
class Class_1_D031E8F06825AB4F;
namespace RPG::Client::PixAir { class PixAirBagEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirBattleEquipsViewModel; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_GET_BTNCLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0xC3BA2B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_SET_BTNCLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0xC3BA2C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC3BA110)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipAssembleViewModel_TypeDefinitionIndex = 73575;

	class PixAirEquipAssembleViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_17365F5FA0311FC9* _GameFlowService; // 0x20
		::Class_1_D031E8F06825AB4F* _EquipService; // 0x28
		::RPG::Client::PixAir::PixAirBagEquipsViewModel* BagEquipsViewModel; // 0x30
		::Class_1_2FDE33CCAE591AA8* _BtnCloseCommand_k__BackingField; // 0x38
		::RPG::Client::PixAir::PixAirBattleEquipsViewModel* BattleEquipsViewModel; // 0x40
		::Class_1_774B79B08DDA9E9C* _WindowService; // 0x48

		::System::Void _ctor(::Class_1_774B79B08DDA9E9C* a1, ::Class_1_17365F5FA0311FC9* a2, ::Class_1_D031E8F06825AB4F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_774B79B08DDA9E9C*, ::Class_1_17365F5FA0311FC9*, ::Class_1_D031E8F06825AB4F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_2FDE33CCAE591AA8* get_BtnCloseCommand()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_GET_BTNCLOSECOMMAND_OFFSET))(this);
		}

		::System::Void set_BtnCloseCommand(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_SET_BTNCLOSECOMMAND_OFFSET))(this, a1);
		}
	};
}
