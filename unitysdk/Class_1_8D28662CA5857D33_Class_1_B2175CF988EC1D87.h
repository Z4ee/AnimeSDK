#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_35;
class Class_3_32CD58E95ADFF8F5_39;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8D28662CA5857D33_CLASS_1_B2175CF988EC1D87_METHOD_1_4E868B3364EF6E39_OFFSET UNITYSDK_OFFSET(0x163E4960)
#define CLASS_1_8D28662CA5857D33_CLASS_1_B2175CF988EC1D87__CTOR_OFFSET UNITYSDK_OFFSET(0x163E4950)

inline static constexpr unsigned int Class_1_8D28662CA5857D33_Class_1_B2175CF988EC1D87_TypeDefinitionIndex = 76545;

class Class_1_8D28662CA5857D33_Class_1_B2175CF988EC1D87 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Single Field_1_3; // 0x14
	::System::Single Field_1_5; // 0x18
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Field_1_6; // 0x1C
	::System::Boolean Field_1_0; // 0x20
	::System::Boolean Field_1_4; // 0x21
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_B2175CF988EC1D87__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4E868B3364EF6E39(::Class_3_32CD58E95ADFF8F5_39* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_35*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_39*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_35*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_B2175CF988EC1D87_METHOD_1_4E868B3364EF6E39_OFFSET))(this, a1, a2);
	}
};
