#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_15265A3D7B506C11;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_4C20A18D4AFB398B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157578F0)
#define CLASS_1_4C20A18D4AFB398B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15757920)
#define CLASS_1_4C20A18D4AFB398B___C___BUILDSLOTS_B__19_0_OFFSET UNITYSDK_OFFSET(0x15757930)

inline static constexpr unsigned int Class_1_4C20A18D4AFB398B___c_TypeDefinitionIndex = 60205;

class Class_1_4C20A18D4AFB398B___c : public ::System::Object
{
public:
	static ::Class_1_4C20A18D4AFB398B___c** StaticGet___9()
	{
		return (::Class_1_4C20A18D4AFB398B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C20A18D4AFB398B___c_TypeDefinitionIndex)->GetStaticField(0x66050);
	}
	static ::System::Comparison_1<::Class_1_15265A3D7B506C11*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::Class_1_15265A3D7B506C11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C20A18D4AFB398B___c_TypeDefinitionIndex)->GetStaticField(0x66058);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C20A18D4AFB398B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C20A18D4AFB398B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __BuildSlots_b__19_0(::Class_1_15265A3D7B506C11* a1, ::Class_1_15265A3D7B506C11* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_15265A3D7B506C11*, ::Class_1_15265A3D7B506C11*))((::PBYTE)hIl2Cpp + CLASS_1_4C20A18D4AFB398B___C___BUILDSLOTS_B__19_0_OFFSET))(this, a1, a2);
	}
};
