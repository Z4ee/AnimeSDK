#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }

#define STRUCT_2_B004C4EE67DB9A7D_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x2DF8960)
#define STRUCT_2_B004C4EE67DB9A7D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16374900)

inline static constexpr unsigned int Struct_2_B004C4EE67DB9A7D_TypeDefinitionIndex = 79640;

struct alignas(8) Struct_2_B004C4EE67DB9A7D
{
	static ::Struct_2_B004C4EE67DB9A7D* StaticGet_GPKBJPNFGKI()
	{
		return (::Struct_2_B004C4EE67DB9A7D*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_B004C4EE67DB9A7D_TypeDefinitionIndex)->GetStaticField(0xB560);
	}
	::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* NBBACHCJOCL; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_B004C4EE67DB9A7D__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B004C4EE67DB9A7D_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
