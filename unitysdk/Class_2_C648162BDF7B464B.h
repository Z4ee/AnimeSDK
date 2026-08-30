#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_037EA204E69EBC75;

#define CLASS_2_C648162BDF7B464B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3BFF50)
#define CLASS_2_C648162BDF7B464B_METHOD_2_3AB4010736FA63A8_OFFSET UNITYSDK_OFFSET(0x1C3C0D10)
#define CLASS_2_C648162BDF7B464B_METHOD_2_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x1C3C0000)
#define CLASS_2_C648162BDF7B464B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3C1270)
#define CLASS_2_C648162BDF7B464B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3BFF40)

inline static constexpr unsigned int Class_2_C648162BDF7B464B_TypeDefinitionIndex = 41181;

class Class_2_C648162BDF7B464B : public ::Class_1_5BE136E515AF9A61_1
{
public:
	static ::System::Int32* StaticGet_OGPJNMKBNOM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C648162BDF7B464B_TypeDefinitionIndex)->GetStaticField(0x10710);
	}
	static ::System::Int32* StaticGet_CFPDLJNJNJL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C648162BDF7B464B_TypeDefinitionIndex)->GetStaticField(0x10714);
	}
	static ::System::Int32* StaticGet_NICCHCOPMAD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C648162BDF7B464B_TypeDefinitionIndex)->GetStaticField(0x10718);
	}
	::Class_2_037EA204E69EBC75* LHLOGDGCOHK; // 0x18
	::System::Single FNNLDNCIIKI; // 0x20
	::System::Single OBJJIELNFLP; // 0x24

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B_METHOD_2_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Method_2_3AB4010736FA63A8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B_METHOD_2_3AB4010736FA63A8_OFFSET))(this, a1);
	}
};
