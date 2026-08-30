#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }

#define STRUCT_2_710A4BB1F3B3A759_METHOD_2_E8FA925EB945395B_OFFSET UNITYSDK_OFFSET(0x1A4A9540)
#define STRUCT_2_710A4BB1F3B3A759_METHOD_2_EBCF2A6CC19F5164_OFFSET UNITYSDK_OFFSET(0x1A4A95B0)

inline static constexpr unsigned int Struct_2_710A4BB1F3B3A759_TypeDefinitionIndex = 40090;

struct alignas(8) Struct_2_710A4BB1F3B3A759
{
	::System::String* GKHIHPGCLIK; // 0x10
	::System::Type* EPGPJMHNBON; // 0x18
	::RPG::Client::OpType NCKLLHBKJCE; // 0x20
	::RPG::Client::OnAssetOperationDelegate* BLPGAACJCMP; // 0x28

	static ::Struct_2_710A4BB1F3B3A759 Method_2_E8FA925EB945395B(::System::String* a1, ::System::Type* a2)
	{
		return ((::Struct_2_710A4BB1F3B3A759(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + STRUCT_2_710A4BB1F3B3A759_METHOD_2_E8FA925EB945395B_OFFSET))(a1, a2);
	}

	static ::Struct_2_710A4BB1F3B3A759 Method_2_EBCF2A6CC19F5164(::System::String* a1, ::System::Type* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
	{
		return ((::Struct_2_710A4BB1F3B3A759(*)(::System::String*, ::System::Type*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + STRUCT_2_710A4BB1F3B3A759_METHOD_2_EBCF2A6CC19F5164_OFFSET))(a1, a2, a3);
	}
};
