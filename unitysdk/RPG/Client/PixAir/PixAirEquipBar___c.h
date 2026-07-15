#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirSlot; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ECB630)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECB670)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__REPLACESLOTWITHEMPTY_B__20_0_OFFSET UNITYSDK_OFFSET(0x19ECB720)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__REPLACESLOTWITHEQUIP_B__19_0_OFFSET UNITYSDK_OFFSET(0x19ECB680)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipBar___c_TypeDefinitionIndex = 75298;

	class PixAirEquipBar___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::PixAirEquipBar___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirEquipBar___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipBar___c_TypeDefinitionIndex)->GetStaticField(0x67610);
		}
		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipBar___c_TypeDefinitionIndex)->GetStaticField(0x67618);
		}
		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipBar___c_TypeDefinitionIndex)->GetStaticField(0x67620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ReplaceSlotWithEquip_b__19_0(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__REPLACESLOTWITHEQUIP_B__19_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _ReplaceSlotWithEmpty_b__20_0(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__REPLACESLOTWITHEMPTY_B__20_0_OFFSET))(this, a1, a2);
		}
	};
}
