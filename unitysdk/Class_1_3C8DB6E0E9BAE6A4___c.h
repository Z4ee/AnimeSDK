#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3C8DB6E0E9BAE6A4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10AB82F0)
#define CLASS_1_3C8DB6E0E9BAE6A4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10AB8330)
#define CLASS_1_3C8DB6E0E9BAE6A4___C___REORDERTEAM_B__7_0_OFFSET UNITYSDK_OFFSET(0x10AB8340)

inline static constexpr unsigned int Class_1_3C8DB6E0E9BAE6A4___c_TypeDefinitionIndex = 63143;

class Class_1_3C8DB6E0E9BAE6A4___c : public ::System::Object
{
public:
	static ::Class_1_3C8DB6E0E9BAE6A4___c** StaticGet___9()
	{
		return (::Class_1_3C8DB6E0E9BAE6A4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C8DB6E0E9BAE6A4___c_TypeDefinitionIndex)->GetStaticField(0x465A0);
	}
	static ::System::Comparison_1<::Class_2_49CAB3DE74280C58*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::Class_2_49CAB3DE74280C58*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C8DB6E0E9BAE6A4___c_TypeDefinitionIndex)->GetStaticField(0x465A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ReOrderTeam_b__7_0(::Class_2_49CAB3DE74280C58* a, ::Class_2_49CAB3DE74280C58* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_3C8DB6E0E9BAE6A4___C___REORDERTEAM_B__7_0_OFFSET))(this, a, b);
	}
};
