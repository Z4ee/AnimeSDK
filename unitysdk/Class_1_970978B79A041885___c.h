#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E69069233E5E05B8;

#define CLASS_1_970978B79A041885___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1A2710)
#define CLASS_1_970978B79A041885___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A2750)
#define CLASS_1_970978B79A041885___C___CCTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C1A2760)

inline static constexpr unsigned int Class_1_970978B79A041885___c_TypeDefinitionIndex = 36211;

class Class_1_970978B79A041885___c : public ::System::Object
{
public:
	static ::Class_1_970978B79A041885___c** StaticGet___9()
	{
		return (::Class_1_970978B79A041885___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_970978B79A041885___c_TypeDefinitionIndex)->GetStaticField(0x15620);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_970978B79A041885___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_970978B79A041885___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__8_0(::Class_1_E69069233E5E05B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E69069233E5E05B8*))((::PBYTE)hIl2Cpp + CLASS_1_970978B79A041885___C___CCTOR_B__8_0_OFFSET))(this, a1);
	}
};
