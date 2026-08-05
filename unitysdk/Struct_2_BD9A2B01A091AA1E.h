#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define STRUCT_2_BD9A2B01A091AA1E__CCTOR_OFFSET UNITYSDK_OFFSET(0x148F7AD0)

inline static constexpr unsigned int Struct_2_BD9A2B01A091AA1E_TypeDefinitionIndex = 78074;

struct alignas(8) Struct_2_BD9A2B01A091AA1E
{
	static ::Struct_2_BD9A2B01A091AA1E* StaticGet_Field_2_1()
	{
		return (::Struct_2_BD9A2B01A091AA1E*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_BD9A2B01A091AA1E_TypeDefinitionIndex)->GetStaticField(0x35F20);
	}
	::System::Action* Field_2_0; // 0x10
	::System::Action* Field_2_7; // 0x18
	::System::Action* Field_2_6; // 0x20
	::System::Action* Field_2_5; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_BD9A2B01A091AA1E__CCTOR_OFFSET))();
	}
};
