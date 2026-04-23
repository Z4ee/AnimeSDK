#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_23A3535C3AD26D5F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6A275AF5305C7AE3;
class Class_1_C84A84118567060F;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24CACD86BEDF8D9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12337FB0)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12339820)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_63882E0318B95793_OFFSET UNITYSDK_OFFSET(0x12338380)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_71E459B42468927B_OFFSET UNITYSDK_OFFSET(0x123382E0)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_8C4121B64D1B4C8A_OFFSET UNITYSDK_OFFSET(0x12338F20)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_A65ED85D600FD0BE_OFFSET UNITYSDK_OFFSET(0x12339200)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_C1FE64DAEC64B939_OFFSET UNITYSDK_OFFSET(0x12339760)
#define CLASS_1_24CACD86BEDF8D9B_METHOD_1_EDAA61F2FC616B5D_OFFSET UNITYSDK_OFFSET(0x12339450)
#define CLASS_1_24CACD86BEDF8D9B__CTOR_OFFSET UNITYSDK_OFFSET(0x12337F20)

inline static constexpr unsigned int Class_1_24CACD86BEDF8D9B_TypeDefinitionIndex = 45544;

class Class_1_24CACD86BEDF8D9B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C84A84118567060F*>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::Struct_2_23A3535C3AD26D5F>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_6A275AF5305C7AE3*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_71E459B42468927B(::Il2CppArray<::Class_1_C84A84118567060F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_C84A84118567060F*>*))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_71E459B42468927B_OFFSET))(this, a1);
	}

	::System::Void Method_1_63882E0318B95793(::Class_1_C84A84118567060F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C84A84118567060F*))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_63882E0318B95793_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C4121B64D1B4C8A(::Class_1_C84A84118567060F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C84A84118567060F*))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_8C4121B64D1B4C8A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A65ED85D600FD0BE(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_A65ED85D600FD0BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_EDAA61F2FC616B5D(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_EDAA61F2FC616B5D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_23A3535C3AD26D5F>* Method_1_C1FE64DAEC64B939(::Struct_2_23A3535C3AD26D5F a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_23A3535C3AD26D5F>*(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_C1FE64DAEC64B939_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24CACD86BEDF8D9B_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
