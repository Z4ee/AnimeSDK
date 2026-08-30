#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8BD8B458C2AE3E06;

#define CLASS_1_B0DEC0A5FF9B0165_1_METHOD_1_076FEE641C2B6499_OFFSET UNITYSDK_OFFSET(0x15604320)
#define CLASS_1_B0DEC0A5FF9B0165_1_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x15604290)
#define CLASS_1_B0DEC0A5FF9B0165_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x156043E0)
#define CLASS_1_B0DEC0A5FF9B0165_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15604310)

inline static constexpr unsigned int Class_1_B0DEC0A5FF9B0165_1_TypeDefinitionIndex = 74972;

class Class_1_B0DEC0A5FF9B0165_1 : public ::System::Object
{
public:
	static ::Class_1_B0DEC0A5FF9B0165_1** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_B0DEC0A5FF9B0165_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0DEC0A5FF9B0165_1_TypeDefinitionIndex)->GetStaticField(0x17880);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_1__CCTOR_OFFSET))();
	}

	static ::Class_1_B0DEC0A5FF9B0165_1* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_B0DEC0A5FF9B0165_1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_1_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::System::Void Method_1_076FEE641C2B6499(::Class_2_8BD8B458C2AE3E06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8BD8B458C2AE3E06*))((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_1_METHOD_1_076FEE641C2B6499_OFFSET))(this, a1);
	}
};
