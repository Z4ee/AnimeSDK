#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_77AB3CF75A5AE66C;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_1A89AAD5C8D60B48___C_METHOD_1_51EF4A24D29FA934_OFFSET UNITYSDK_OFFSET(0x15075B70)
#define CLASS_2_1A89AAD5C8D60B48___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15075B20)
#define CLASS_2_1A89AAD5C8D60B48___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15075B60)

inline static constexpr unsigned int Class_2_1A89AAD5C8D60B48___c_TypeDefinitionIndex = 73459;

class Class_2_1A89AAD5C8D60B48___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_77AB3CF75A5AE66C*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_1_77AB3CF75A5AE66C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A89AAD5C8D60B48___c_TypeDefinitionIndex)->GetStaticField(0x3FAA0);
	}
	static ::Class_2_1A89AAD5C8D60B48___c** StaticGet___9()
	{
		return (::Class_2_1A89AAD5C8D60B48___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A89AAD5C8D60B48___c_TypeDefinitionIndex)->GetStaticField(0x3FAA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1A89AAD5C8D60B48___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A89AAD5C8D60B48___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_51EF4A24D29FA934(::Class_1_77AB3CF75A5AE66C* a1, ::Class_1_77AB3CF75A5AE66C* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_77AB3CF75A5AE66C*, ::Class_1_77AB3CF75A5AE66C*))((::PBYTE)hIl2Cpp + CLASS_2_1A89AAD5C8D60B48___C_METHOD_1_51EF4A24D29FA934_OFFSET))(this, a1, a2);
	}
};
