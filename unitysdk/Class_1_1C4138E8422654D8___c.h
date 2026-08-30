#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirSlot; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_1C4138E8422654D8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A7B270)
#define CLASS_1_1C4138E8422654D8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7B2B0)
#define CLASS_1_1C4138E8422654D8___C__FINDEQUIPMENTINRANGE_B__40_0_OFFSET UNITYSDK_OFFSET(0x17A7B2C0)

inline static constexpr unsigned int Class_1_1C4138E8422654D8___c_TypeDefinitionIndex = 78857;

class Class_1_1C4138E8422654D8___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__40_0()
	{
		return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C4138E8422654D8___c_TypeDefinitionIndex)->GetStaticField(0x36D00);
	}
	static ::Class_1_1C4138E8422654D8___c** StaticGet___9()
	{
		return (::Class_1_1C4138E8422654D8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C4138E8422654D8___c_TypeDefinitionIndex)->GetStaticField(0x36D08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _FindEquipmentInRange_b__40_0(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8___C__FINDEQUIPMENTINRANGE_B__40_0_OFFSET))(this, a1, a2);
	}
};
