#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIWindowController; }

#define STRUCT_2_5A362B24321C6106_METHOD_2_0BFB73B824E4EDA0_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define STRUCT_2_5A362B24321C6106_METHOD_2_7934DD1AFA77F36F_OFFSET UNITYSDK_OFFSET(0x228FE0)

inline static constexpr unsigned int Struct_2_5A362B24321C6106_TypeDefinitionIndex = 56840;

struct alignas(8) Struct_2_5A362B24321C6106
{
	::MoleMole::UIWindowController* Field_2_0; // 0x10

	::System::Void Method_2_0BFB73B824E4EDA0(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + STRUCT_2_5A362B24321C6106_METHOD_2_0BFB73B824E4EDA0_OFFSET))(this, a1);
	}

	::MoleMole::UIWindowController* Method_2_7934DD1AFA77F36F()
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A362B24321C6106_METHOD_2_7934DD1AFA77F36F_OFFSET))(this);
	}
};
