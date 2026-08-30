#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8BD8B458C2AE3E06;

#define CLASS_1_A9A930E0A03CE59D_METHOD_1_8F15C64E2B326F8B_OFFSET UNITYSDK_OFFSET(0x18877D40)
#define CLASS_1_A9A930E0A03CE59D_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x18877CB0)
#define CLASS_1_A9A930E0A03CE59D__CCTOR_OFFSET UNITYSDK_OFFSET(0x18877EA0)
#define CLASS_1_A9A930E0A03CE59D__CTOR_OFFSET UNITYSDK_OFFSET(0x18877D30)

inline static constexpr unsigned int Class_1_A9A930E0A03CE59D_TypeDefinitionIndex = 74975;

class Class_1_A9A930E0A03CE59D : public ::System::Object
{
public:
	static ::Class_1_A9A930E0A03CE59D** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_A9A930E0A03CE59D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9A930E0A03CE59D_TypeDefinitionIndex)->GetStaticField(0x539A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9A930E0A03CE59D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9A930E0A03CE59D__CCTOR_OFFSET))();
	}

	static ::Class_1_A9A930E0A03CE59D* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_A9A930E0A03CE59D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9A930E0A03CE59D_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::System::Void Method_1_8F15C64E2B326F8B(::Class_2_8BD8B458C2AE3E06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8BD8B458C2AE3E06*))((::PBYTE)hIl2Cpp + CLASS_1_A9A930E0A03CE59D_METHOD_1_8F15C64E2B326F8B_OFFSET))(this, a1);
	}
};
