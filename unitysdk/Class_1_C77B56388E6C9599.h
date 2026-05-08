#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
class Class_2_E621E51D351EB960_Class_1_998CEE7420B4844C;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_C77B56388E6C9599__CTOR_OFFSET UNITYSDK_OFFSET(0x140B0E40)

inline static constexpr unsigned int Class_1_C77B56388E6C9599_TypeDefinitionIndex = 57745;

class Class_1_C77B56388E6C9599 : public ::System::Object
{
public:
	::System::Func_2<::System::UInt32, ::System::Boolean>* Field_1_8; // 0x10
	::System::Action_3<::System::UInt32, ::System::Boolean, ::System::Boolean>* Field_1_2; // 0x18
	::System::Action_2<::Il2CppArray<::Class_2_1824EF69C8E376A3*>*, ::System::UInt32>* Field_1_3; // 0x20
	::System::Func_2<::System::UInt32, ::Class_2_E621E51D351EB960_Class_1_998CEE7420B4844C*>* Field_1_6; // 0x28
	::System::Func_2<::System::UInt32, ::System::Boolean>* Field_1_5; // 0x30
	::System::Func_1<::System::Boolean>* Field_1_4; // 0x38
	::System::Func_3<::Il2CppArray<::Class_2_1824EF69C8E376A3*>*, ::System::UInt32, ::System::Boolean>* Field_1_7; // 0x40
	::System::Int32 Field_1_11; // 0x48
	::System::Boolean Field_1_9; // 0x4C
	::System::Boolean Field_1_0; // 0x4D
	::System::Boolean Field_1_1; // 0x4E
	::System::Int32 Field_1_10; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C77B56388E6C9599__CTOR_OFFSET))(this);
	}
};
