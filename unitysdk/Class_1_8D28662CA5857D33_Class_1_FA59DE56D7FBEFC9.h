#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_4;
class Class_1_8D28662CA5857D33_Class_1_7DDF32291D457FB6_Class_1_C0EC70326F9154FA;
class Class_3_32CD58E95ADFF8F5_55;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8D28662CA5857D33_CLASS_1_FA59DE56D7FBEFC9_METHOD_1_C5C65BA70E53161D_OFFSET UNITYSDK_OFFSET(0xF532EA0)
#define CLASS_1_8D28662CA5857D33_CLASS_1_FA59DE56D7FBEFC9__CTOR_OFFSET UNITYSDK_OFFSET(0xF532E90)

inline static constexpr unsigned int Class_1_8D28662CA5857D33_Class_1_FA59DE56D7FBEFC9_TypeDefinitionIndex = 73983;

class Class_1_8D28662CA5857D33_Class_1_FA59DE56D7FBEFC9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* Field_1_0; // 0x10
	::Class_3_32CD58E95ADFF8F5_55* Field_1_6; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Field_1_4; // 0x28
	::System::Int32 Field_1_7; // 0x2C
	::System::Single Field_1_5; // 0x30
	::System::Collections::Generic::KeyValuePair_2<::System::Boolean, ::System::Single> Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_FA59DE56D7FBEFC9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C5C65BA70E53161D(::Class_1_8D28662CA5857D33_Class_1_7DDF32291D457FB6_Class_1_C0EC70326F9154FA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D28662CA5857D33_Class_1_7DDF32291D457FB6_Class_1_C0EC70326F9154FA*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_FA59DE56D7FBEFC9_METHOD_1_C5C65BA70E53161D_OFFSET))(this, a1);
	}
};
