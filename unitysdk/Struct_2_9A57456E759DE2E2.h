#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1BDCF298D6EFEE00;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_9A57456E759DE2E2_METHOD_2_70A3CDBA9B3C8E31_OFFSET UNITYSDK_OFFSET(0x769D60)
#define STRUCT_2_9A57456E759DE2E2_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x769CB0)
#define STRUCT_2_9A57456E759DE2E2_METHOD_2_B5086F6C9A8B7182_OFFSET UNITYSDK_OFFSET(0x769D50)

inline static constexpr unsigned int Struct_2_9A57456E759DE2E2_TypeDefinitionIndex = 54954;

struct alignas(8) Struct_2_9A57456E759DE2E2
{
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::Struct_2_E147DFD2A4EE8B0B Field_2_2; // 0x20
	::Class_1_1BDCF298D6EFEE00* Field_2_3; // 0x38
	::System::String* Field_2_4; // 0x40
	::System::String* Field_2_5; // 0x48

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_9A57456E759DE2E2_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_B5086F6C9A8B7182()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9A57456E759DE2E2_METHOD_2_B5086F6C9A8B7182_OFFSET))(this);
	}

	::System::Boolean Method_2_70A3CDBA9B3C8E31(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_9A57456E759DE2E2_METHOD_2_70A3CDBA9B3C8E31_OFFSET))(this, a1);
	}
};
