#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8BD8B458C2AE3E06;

#define CLASS_1_B0DEC0A5FF9B0165_3_METHOD_1_076FEE641C2B6499_OFFSET UNITYSDK_OFFSET(0xC3E5FA0)
#define CLASS_1_B0DEC0A5FF9B0165_3_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0xC3E5F10)
#define CLASS_1_B0DEC0A5FF9B0165_3__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3E6060)
#define CLASS_1_B0DEC0A5FF9B0165_3__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E5F90)

inline static constexpr unsigned int Class_1_B0DEC0A5FF9B0165_3_TypeDefinitionIndex = 74974;

class Class_1_B0DEC0A5FF9B0165_3 : public ::System::Object
{
public:
	static ::Class_1_B0DEC0A5FF9B0165_3** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_B0DEC0A5FF9B0165_3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0DEC0A5FF9B0165_3_TypeDefinitionIndex)->GetStaticField(0x55300);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_3__CCTOR_OFFSET))();
	}

	static ::Class_1_B0DEC0A5FF9B0165_3* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_B0DEC0A5FF9B0165_3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_3_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::System::Void Method_1_076FEE641C2B6499(::Class_2_8BD8B458C2AE3E06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8BD8B458C2AE3E06*))((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_3_METHOD_1_076FEE641C2B6499_OFFSET))(this, a1);
	}
};
