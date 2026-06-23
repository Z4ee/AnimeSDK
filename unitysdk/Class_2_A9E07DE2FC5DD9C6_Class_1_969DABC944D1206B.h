#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_969DABC944D1206B_METHOD_1_7D599D6C5F28E144_OFFSET UNITYSDK_OFFSET(0x1340B740)
#define CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_969DABC944D1206B_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x1340B830)
#define CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_969DABC944D1206B__CTOR_OFFSET UNITYSDK_OFFSET(0x1340B730)

inline static constexpr unsigned int Class_2_A9E07DE2FC5DD9C6_Class_1_969DABC944D1206B_TypeDefinitionIndex = 53202;

class Class_2_A9E07DE2FC5DD9C6_Class_1_969DABC944D1206B : public ::System::Object
{
public:
	::System::Action_1<::System::UInt64>* Field_1_0; // 0x10
	::System::Action_2<::System::Int32, ::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_969DABC944D1206B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D599D6C5F28E144(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_969DABC944D1206B_METHOD_1_7D599D6C5F28E144_OFFSET))(this, a1);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_969DABC944D1206B_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}
};
