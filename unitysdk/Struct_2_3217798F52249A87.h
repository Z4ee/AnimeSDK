#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataAnimatorParam.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_3217798F52249A87__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

inline static constexpr unsigned int Struct_2_3217798F52249A87_TypeDefinitionIndex = 74439;

struct alignas(8) Struct_2_3217798F52249A87
{
	::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + STRUCT_2_3217798F52249A87__CTOR_OFFSET))(this, a1, a2);
	}
};
