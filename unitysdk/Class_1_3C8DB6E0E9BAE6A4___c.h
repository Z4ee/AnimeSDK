#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3C8DB6E0E9BAE6A4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1561BF50)
#define CLASS_1_3C8DB6E0E9BAE6A4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1561BF90)
#define CLASS_1_3C8DB6E0E9BAE6A4___C___REORDERTEAM_B__7_0_OFFSET UNITYSDK_OFFSET(0x1561BFA0)

inline static constexpr unsigned int Class_1_3C8DB6E0E9BAE6A4___c_TypeDefinitionIndex = 73646;

class Class_1_3C8DB6E0E9BAE6A4___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_B66C1067C0468FBB*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::Class_2_B66C1067C0468FBB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C8DB6E0E9BAE6A4___c_TypeDefinitionIndex)->GetStaticField(0x22E50);
	}
	static ::Class_1_3C8DB6E0E9BAE6A4___c** StaticGet___9()
	{
		return (::Class_1_3C8DB6E0E9BAE6A4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C8DB6E0E9BAE6A4___c_TypeDefinitionIndex)->GetStaticField(0x22E58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ReOrderTeam_b__7_0(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C___REORDERTEAM_B__7_0_OFFSET))(this, a1, a2);
	}
};
