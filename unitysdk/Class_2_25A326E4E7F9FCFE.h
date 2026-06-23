#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

#define CLASS_2_25A326E4E7F9FCFE_METHOD_2_249C9B0D9E3DB6F8_OFFSET UNITYSDK_OFFSET(0x1073A4E0)
#define CLASS_2_25A326E4E7F9FCFE_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1073A430)
#define CLASS_2_25A326E4E7F9FCFE_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1073A4C0)
#define CLASS_2_25A326E4E7F9FCFE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1073A550)
#define CLASS_2_25A326E4E7F9FCFE_METHOD_2_E9C4BB510F158813_OFFSET UNITYSDK_OFFSET(0x1073A540)
#define CLASS_2_25A326E4E7F9FCFE_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1073A5E0)
#define CLASS_2_25A326E4E7F9FCFE_METHOD_2_FA77DCF64BDF56AE_OFFSET UNITYSDK_OFFSET(0x1073A4D0)
#define CLASS_2_25A326E4E7F9FCFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1073A3B0)
#define CLASS_2_25A326E4E7F9FCFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1073A420)

inline static constexpr unsigned int Class_2_25A326E4E7F9FCFE_TypeDefinitionIndex = 81146;

class Class_2_25A326E4E7F9FCFE : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x123; // 0x0
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_25A326E4E7F9FCFE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A326E4E7F9FCFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A326E4E7F9FCFE_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_25A326E4E7F9FCFE_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Method_2_FA77DCF64BDF56AE()
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A326E4E7F9FCFE_METHOD_2_FA77DCF64BDF56AE_OFFSET))(this);
	}

	::System::Void Method_2_249C9B0D9E3DB6F8(::System::UInt32 a1, ::System::Boolean a2, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_2_25A326E4E7F9FCFE_METHOD_2_249C9B0D9E3DB6F8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E9C4BB510F158813(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_2_25A326E4E7F9FCFE_METHOD_2_E9C4BB510F158813_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A326E4E7F9FCFE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A326E4E7F9FCFE_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
