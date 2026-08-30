#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_9B0F70AC3183FFF8__CCTOR_OFFSET UNITYSDK_OFFSET(0x15716CB0)

inline static constexpr unsigned int Struct_2_9B0F70AC3183FFF8_TypeDefinitionIndex = 79641;

struct alignas(4) Struct_2_9B0F70AC3183FFF8
{
	static ::Struct_2_9B0F70AC3183FFF8* StaticGet_GPKBJPNFGKI()
	{
		return (::Struct_2_9B0F70AC3183FFF8*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9B0F70AC3183FFF8_TypeDefinitionIndex)->GetStaticField(0x26E0);
	}
	::System::Boolean HPGAOBONHOK; // 0x10
	::System::UInt32 CEGOPEIKDLA; // 0x14
	::System::Single JMLHEBGOOED; // 0x18
	::System::Single MHEHGCOIPIA; // 0x1C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9B0F70AC3183FFF8__CCTOR_OFFSET))();
	}
};
