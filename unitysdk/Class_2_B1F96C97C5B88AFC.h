#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EDoorOperation.h"

#define CLASS_2_B1F96C97C5B88AFC_METHOD_2_433C892707E2E598_OFFSET UNITYSDK_OFFSET(0x12EC22C0)
#define CLASS_2_B1F96C97C5B88AFC_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x12EC2230)
#define CLASS_2_B1F96C97C5B88AFC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12EC2310)
#define CLASS_2_B1F96C97C5B88AFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EC21B0)
#define CLASS_2_B1F96C97C5B88AFC__CTOR_OFFSET UNITYSDK_OFFSET(0x12EC2220)

inline static constexpr unsigned int Class_2_B1F96C97C5B88AFC_TypeDefinitionIndex = 58861;

class Class_2_B1F96C97C5B88AFC : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x11F; // 0x0
	::MoleMole::FlowCanvas::Nodes::EDoorOperation Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B1F96C97C5B88AFC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1F96C97C5B88AFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1F96C97C5B88AFC_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_433C892707E2E598(::MoleMole::FlowCanvas::Nodes::EDoorOperation a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EDoorOperation))((::PBYTE)hIl2Cpp + CLASS_2_B1F96C97C5B88AFC_METHOD_2_433C892707E2E598_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1F96C97C5B88AFC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
