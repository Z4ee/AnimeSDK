#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

#define CLASS_2_04E07F842ECC3B8E_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x18B6FCF0)
#define CLASS_2_04E07F842ECC3B8E_METHOD_2_B5456417EE00D0E7_OFFSET UNITYSDK_OFFSET(0x18B6FD80)
#define CLASS_2_04E07F842ECC3B8E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18B6FDE0)
#define CLASS_2_04E07F842ECC3B8E__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B6FC60)
#define CLASS_2_04E07F842ECC3B8E__CTOR_OFFSET UNITYSDK_OFFSET(0x18B6FCD0)

inline static constexpr unsigned int Class_2_04E07F842ECC3B8E_TypeDefinitionIndex = 40639;

class Class_2_04E07F842ECC3B8E : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x121; // 0x0
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_04E07F842ECC3B8E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E07F842ECC3B8E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E07F842ECC3B8E_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_B5456417EE00D0E7(::System::Boolean a1, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_2_04E07F842ECC3B8E_METHOD_2_B5456417EE00D0E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E07F842ECC3B8E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
