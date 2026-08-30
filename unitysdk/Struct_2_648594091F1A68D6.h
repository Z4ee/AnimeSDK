#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D3B84DD3734B83D6.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_648594091F1A68D6__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8DFDB0)
#define STRUCT_2_648594091F1A68D6__CTOR_OFFSET UNITYSDK_OFFSET(0x833F0)

inline static constexpr unsigned int Struct_2_648594091F1A68D6_TypeDefinitionIndex = 57450;

struct alignas(4) Struct_2_648594091F1A68D6
{
	static ::Struct_2_648594091F1A68D6* StaticGet_HGLIFJGHADE()
	{
		return (::Struct_2_648594091F1A68D6*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_648594091F1A68D6_TypeDefinitionIndex)->GetStaticField(0x8310);
	}
	::Struct_2_D3B84DD3734B83D6 EMGADNPKAIK; // 0x10
	::Struct_2_D3B84DD3734B83D6 CCAOGMEFNLB; // 0x18
	::System::Single ANHNBBMAJKD; // 0x20
	::System::Single PELGDONPKEF; // 0x24
	::System::Single KDHJFBLPEJK; // 0x28
	::System::Boolean LCABCNBBCLF; // 0x2C
	::System::Boolean CHFBGMPPOJJ; // 0x2D

	::System::Void _ctor(::Struct_2_D3B84DD3734B83D6 a1, ::Struct_2_D3B84DD3734B83D6 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D3B84DD3734B83D6, ::Struct_2_D3B84DD3734B83D6, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_648594091F1A68D6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_648594091F1A68D6__CCTOR_OFFSET))();
	}
};
