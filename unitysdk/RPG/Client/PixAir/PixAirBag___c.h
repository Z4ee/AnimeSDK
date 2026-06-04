#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirSlot; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__ADDNEWEQUIP_B__21_1_OFFSET UNITYSDK_OFFSET(0xC3B19E0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3B1990)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B19D0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__REPLACESLOTWITHEMPTY_B__28_0_OFFSET UNITYSDK_OFFSET(0xC3B1A60)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__REPLACESLOTWITHEQUIP_B__27_0_OFFSET UNITYSDK_OFFSET(0xC3B1A20)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBag___c_TypeDefinitionIndex = 73645;

	class PixAirBag___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::PixAirBag___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirBag___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirBag___c_TypeDefinitionIndex)->GetStaticField(0x66D0);
		}
		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirBag___c_TypeDefinitionIndex)->GetStaticField(0x66D8);
		}
		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__21_1()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirBag___c_TypeDefinitionIndex)->GetStaticField(0x66E0);
		}
		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirBag___c_TypeDefinitionIndex)->GetStaticField(0x66E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AddNewEquip_b__21_1(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__ADDNEWEQUIP_B__21_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 _ReplaceSlotWithEquip_b__27_0(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__REPLACESLOTWITHEQUIP_B__27_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _ReplaceSlotWithEmpty_b__28_0(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__REPLACESLOTWITHEMPTY_B__28_0_OFFSET))(this, a1, a2);
		}
	};
}
