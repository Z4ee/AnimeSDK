#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_800;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_A9D049FE853CBE53___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AB3A60)
#define CLASS_1_A9D049FE853CBE53___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB3AA0)
#define CLASS_1_A9D049FE853CBE53___C___SORTPOSLIST_B__3_0_OFFSET UNITYSDK_OFFSET(0x15AB3AB0)

inline static constexpr unsigned int Class_1_A9D049FE853CBE53___c_TypeDefinitionIndex = 78861;

class Class_1_A9D049FE853CBE53___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_D17272E82AE804C2_800*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::Class_1_D17272E82AE804C2_800*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9D049FE853CBE53___c_TypeDefinitionIndex)->GetStaticField(0x5E9C0);
	}
	static ::Class_1_A9D049FE853CBE53___c** StaticGet___9()
	{
		return (::Class_1_A9D049FE853CBE53___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9D049FE853CBE53___c_TypeDefinitionIndex)->GetStaticField(0x5E9C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9D049FE853CBE53___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9D049FE853CBE53___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SortPosList_b__3_0(::Class_1_D17272E82AE804C2_800* a1, ::Class_1_D17272E82AE804C2_800* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D17272E82AE804C2_800*, ::Class_1_D17272E82AE804C2_800*))((::PBYTE)hIl2Cpp + CLASS_1_A9D049FE853CBE53___C___SORTPOSLIST_B__3_0_OFFSET))(this, a1, a2);
	}
};
