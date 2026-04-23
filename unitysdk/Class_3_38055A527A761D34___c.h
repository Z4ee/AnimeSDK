#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_38055A527A761D34_AnimatedItem;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_38055A527A761D34___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98EFC00)
#define CLASS_3_38055A527A761D34___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98EFC30)
#define CLASS_3_38055A527A761D34___C___SORT_B__7_0_OFFSET UNITYSDK_OFFSET(0x98EFC40)

inline static constexpr unsigned int Class_3_38055A527A761D34___c_TypeDefinitionIndex = 64838;

class Class_3_38055A527A761D34___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_3_38055A527A761D34_AnimatedItem*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::Class_3_38055A527A761D34_AnimatedItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_38055A527A761D34___c_TypeDefinitionIndex)->GetStaticField(0x15460);
	}
	static ::Class_3_38055A527A761D34___c** StaticGet___9()
	{
		return (::Class_3_38055A527A761D34___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_38055A527A761D34___c_TypeDefinitionIndex)->GetStaticField(0x15468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __Sort_b__7_0(::Class_3_38055A527A761D34_AnimatedItem* x, ::Class_3_38055A527A761D34_AnimatedItem* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_38055A527A761D34_AnimatedItem*, ::Class_3_38055A527A761D34_AnimatedItem*))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34___C___SORT_B__7_0_OFFSET))(this, x, y);
	}
};
