#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_17365F5FA0311FC9;
class Class_1_2FDE33CCAE591AA8;
class Class_1_774B79B08DDA9E9C;
class Class_1_D031E8F06825AB4F;
namespace RPG::Client::PixAir { class PixAirBattleEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirGameProgressViewModel; }
namespace RPG::Client::PixAir { class PixAirPrepareContentViewModel; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_GET_BTNSHOWEQUIPASSEMBLE_OFFSET UNITYSDK_OFFSET(0xC3CD380)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_SET_BTNSHOWEQUIPASSEMBLE_OFFSET UNITYSDK_OFFSET(0xC3CD390)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CD160)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xC3CD3A0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGamePrepareViewModel_TypeDefinitionIndex = 73578;

	class PixAirGamePrepareViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_17365F5FA0311FC9* _GameFlowService; // 0x20
		::RPG::Client::PixAir::PixAirPrepareContentViewModel* ContentViewModel; // 0x28
		::RPG::Client::PixAir::PixAirBattleEquipsViewModel* BattleEquipsViewModel; // 0x30
		::RPG::Client::PixAir::PixAirGameProgressViewModel* ProgressViewModel; // 0x38
		::Class_1_D031E8F06825AB4F* _EquipService; // 0x40
		::Class_1_2FDE33CCAE591AA8* _BtnShowEquipAssemble_k__BackingField; // 0x48
		::Class_1_774B79B08DDA9E9C* _WindowService; // 0x50

		::System::Void _ctor(::Class_1_774B79B08DDA9E9C* a1, ::Class_1_17365F5FA0311FC9* a2, ::Class_1_D031E8F06825AB4F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_774B79B08DDA9E9C*, ::Class_1_17365F5FA0311FC9*, ::Class_1_D031E8F06825AB4F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_2FDE33CCAE591AA8* get_BtnShowEquipAssemble()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_GET_BTNSHOWEQUIPASSEMBLE_OFFSET))(this);
		}

		::System::Void set_BtnShowEquipAssemble(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_SET_BTNSHOWEQUIPASSEMBLE_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
