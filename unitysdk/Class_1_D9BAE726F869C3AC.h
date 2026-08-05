#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }

#define CLASS_1_D9BAE726F869C3AC_METHOD_1_068B7007D3FD83B2_OFFSET UNITYSDK_OFFSET(0x1556F9A0)
#define CLASS_1_D9BAE726F869C3AC_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x15570FC0)
#define CLASS_1_D9BAE726F869C3AC_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x15570F20)
#define CLASS_1_D9BAE726F869C3AC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15570E30)
#define CLASS_1_D9BAE726F869C3AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15570E80)
#define CLASS_1_D9BAE726F869C3AC__CTOR_OFFSET UNITYSDK_OFFSET(0x15570DE0)

inline static constexpr unsigned int Class_1_D9BAE726F869C3AC_TypeDefinitionIndex = 78804;

class Class_1_D9BAE726F869C3AC : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::Class_1_D9BAE726F869C3AC*>** StaticGet_Field_1_0()
	{
		return (::Foundation::ObjectPool_1<::Class_1_D9BAE726F869C3AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9BAE726F869C3AC_TypeDefinitionIndex)->GetStaticField(0x4A270);
	}
	::System::Boolean Field_1_2; // 0x10
	::System::Boolean Field_1_1; // 0x11
	::System::Boolean Field_1_3; // 0x12

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC__CCTOR_OFFSET))();
	}

	static ::Class_1_D9BAE726F869C3AC* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_D9BAE726F869C3AC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC_METHOD_1_47FCE72550F759BF_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_D9BAE726F869C3AC* Method_1_068B7007D3FD83B2()
	{
		return ((::Class_1_D9BAE726F869C3AC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC_METHOD_1_068B7007D3FD83B2_OFFSET))();
	}

	::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9BAE726F869C3AC_METHOD_1_228E3444D290BEE7_OFFSET))(this);
	}
};
