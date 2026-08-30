#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_893BFA26BECA2B67_AnimatedItem;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_893BFA26BECA2B67___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A827DE0)
#define CLASS_3_893BFA26BECA2B67___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A827E10)
#define CLASS_3_893BFA26BECA2B67___C___SORT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1A827E20)

inline static constexpr unsigned int Class_3_893BFA26BECA2B67___c_TypeDefinitionIndex = 70300;

class Class_3_893BFA26BECA2B67___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_3_893BFA26BECA2B67_AnimatedItem*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::Class_3_893BFA26BECA2B67_AnimatedItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_893BFA26BECA2B67___c_TypeDefinitionIndex)->GetStaticField(0xC960);
	}
	static ::Class_3_893BFA26BECA2B67___c** StaticGet___9()
	{
		return (::Class_3_893BFA26BECA2B67___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_893BFA26BECA2B67___c_TypeDefinitionIndex)->GetStaticField(0xC968);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_893BFA26BECA2B67___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893BFA26BECA2B67___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __Sort_b__7_0(::Class_3_893BFA26BECA2B67_AnimatedItem* a1, ::Class_3_893BFA26BECA2B67_AnimatedItem* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_893BFA26BECA2B67_AnimatedItem*, ::Class_3_893BFA26BECA2B67_AnimatedItem*))((::PBYTE)hIl2Cpp + CLASS_3_893BFA26BECA2B67___C___SORT_B__7_0_OFFSET))(this, a1, a2);
	}
};
