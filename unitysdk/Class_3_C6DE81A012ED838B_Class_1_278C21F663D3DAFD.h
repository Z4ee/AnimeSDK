#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DB3A5EFF78BBB49D;
class Class_3_C6DE81A012ED838B_Class_1_3E05A2677F6F2423_11;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C6DE81A012ED838B_CLASS_1_278C21F663D3DAFD_METHOD_1_8A3D0CFA7C704CC7_OFFSET UNITYSDK_OFFSET(0x1284C280)
#define CLASS_3_C6DE81A012ED838B_CLASS_1_278C21F663D3DAFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1284C270)

inline static constexpr unsigned int Class_3_C6DE81A012ED838B_Class_1_278C21F663D3DAFD_TypeDefinitionIndex = 83150;

class Class_3_C6DE81A012ED838B_Class_1_278C21F663D3DAFD : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::Class_1_DB3A5EFF78BBB49D*>* Field_1_2; // 0x10
	::Class_3_C6DE81A012ED838B_Class_1_3E05A2677F6F2423_11* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_CLASS_1_278C21F663D3DAFD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8A3D0CFA7C704CC7(::System::Boolean a1, ::Class_1_DB3A5EFF78BBB49D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_DB3A5EFF78BBB49D*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_CLASS_1_278C21F663D3DAFD_METHOD_1_8A3D0CFA7C704CC7_OFFSET))(this, a1, a2);
	}
};
