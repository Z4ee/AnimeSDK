#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

#define CLASS_2_90DB573BE3B12770_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1222CDE0)
#define CLASS_2_90DB573BE3B12770_METHOD_2_574D21C2762E8234_OFFSET UNITYSDK_OFFSET(0x1222CF00)
#define CLASS_2_90DB573BE3B12770_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1222CE70)
#define CLASS_2_90DB573BE3B12770__CCTOR_OFFSET UNITYSDK_OFFSET(0x1222CD50)
#define CLASS_2_90DB573BE3B12770__CTOR_OFFSET UNITYSDK_OFFSET(0x1222CDC0)

inline static constexpr unsigned int Class_2_90DB573BE3B12770_TypeDefinitionIndex = 39795;

class Class_2_90DB573BE3B12770 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x8D; // 0x0
	::System::Boolean Field_2_1; // 0x20
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Field_2_2; // 0x24
	::System::Int32 Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_90DB573BE3B12770__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90DB573BE3B12770__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90DB573BE3B12770_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90DB573BE3B12770_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_574D21C2762E8234(::System::Int32 a1, ::System::Boolean a2, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_2_90DB573BE3B12770_METHOD_2_574D21C2762E8234_OFFSET))(this, a1, a2, a3);
	}
};
