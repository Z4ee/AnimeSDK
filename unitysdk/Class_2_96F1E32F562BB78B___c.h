#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_48F4A404A08692BE_164;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_96F1E32F562BB78B___C_METHOD_1_8043D7822E94644D_OFFSET UNITYSDK_OFFSET(0x1480E610)
#define CLASS_2_96F1E32F562BB78B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1480E5C0)
#define CLASS_2_96F1E32F562BB78B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1480E600)

inline static constexpr unsigned int Class_2_96F1E32F562BB78B___c_TypeDefinitionIndex = 84942;

class Class_2_96F1E32F562BB78B___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_48F4A404A08692BE_164*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_1_48F4A404A08692BE_164*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_96F1E32F562BB78B___c_TypeDefinitionIndex)->GetStaticField(0x40530);
	}
	static ::Class_2_96F1E32F562BB78B___c** StaticGet___9()
	{
		return (::Class_2_96F1E32F562BB78B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_96F1E32F562BB78B___c_TypeDefinitionIndex)->GetStaticField(0x40538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_96F1E32F562BB78B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F1E32F562BB78B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8043D7822E94644D(::Class_1_48F4A404A08692BE_164* a1, ::Class_1_48F4A404A08692BE_164* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_48F4A404A08692BE_164*, ::Class_1_48F4A404A08692BE_164*))((::PBYTE)hIl2Cpp + CLASS_2_96F1E32F562BB78B___C_METHOD_1_8043D7822E94644D_OFFSET))(this, a1, a2);
	}
};
