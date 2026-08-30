#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D632684DB80530A_Class_1_17F54E506533EDC7;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_6D632684DB80530A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FE7420)
#define CLASS_2_6D632684DB80530A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE7450)
#define CLASS_2_6D632684DB80530A___C__GETCONTENT_B__8_0_OFFSET UNITYSDK_OFFSET(0x18FE7460)

inline static constexpr unsigned int Class_2_6D632684DB80530A___c_TypeDefinitionIndex = 68773;

class Class_2_6D632684DB80530A___c : public ::System::Object
{
public:
	static ::Class_2_6D632684DB80530A___c** StaticGet___9()
	{
		return (::Class_2_6D632684DB80530A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D632684DB80530A___c_TypeDefinitionIndex)->GetStaticField(0x66110);
	}
	static ::System::Comparison_1<::Class_2_6D632684DB80530A_Class_1_17F54E506533EDC7*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Class_2_6D632684DB80530A_Class_1_17F54E506533EDC7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D632684DB80530A___c_TypeDefinitionIndex)->GetStaticField(0x66118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D632684DB80530A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D632684DB80530A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetContent_b__8_0(::Class_2_6D632684DB80530A_Class_1_17F54E506533EDC7* a1, ::Class_2_6D632684DB80530A_Class_1_17F54E506533EDC7* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_6D632684DB80530A_Class_1_17F54E506533EDC7*, ::Class_2_6D632684DB80530A_Class_1_17F54E506533EDC7*))((::PBYTE)hIl2Cpp + CLASS_2_6D632684DB80530A___C__GETCONTENT_B__8_0_OFFSET))(this, a1, a2);
	}
};
