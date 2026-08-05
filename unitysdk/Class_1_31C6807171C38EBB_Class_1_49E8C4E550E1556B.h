#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CFC72D3F035968E;
class Class_1_852609683CFD82B9;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_31C6807171C38EBB_CLASS_1_49E8C4E550E1556B__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2DB160)

inline static constexpr unsigned int Class_1_31C6807171C38EBB_Class_1_49E8C4E550E1556B_TypeDefinitionIndex = 29512;

class Class_1_31C6807171C38EBB_Class_1_49E8C4E550E1556B : public ::System::Object
{
public:
	::System::Action_1<::Class_1_852609683CFD82B9*>* Field_1_0; // 0x10
	::System::Func_3<::Class_1_6CFC72D3F035968E*, ::Class_1_6CFC72D3F035968E*, ::Class_1_852609683CFD82B9*>* Field_1_1; // 0x18
	::System::Collections::Generic::Stack_1<::Class_1_852609683CFD82B9*>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31C6807171C38EBB_CLASS_1_49E8C4E550E1556B__CTOR_OFFSET))(this);
	}
};
