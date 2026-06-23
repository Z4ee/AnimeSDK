#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_2F26B4DFC0EEECB6___C_METHOD_1_B55B1B71AB888F65_OFFSET UNITYSDK_OFFSET(0x11A72500)
#define CLASS_2_2F26B4DFC0EEECB6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A724B0)
#define CLASS_2_2F26B4DFC0EEECB6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11A724F0)

inline static constexpr unsigned int Class_2_2F26B4DFC0EEECB6___c_TypeDefinitionIndex = 51304;

class Class_2_2F26B4DFC0EEECB6___c : public ::System::Object
{
public:
	static ::Class_2_2F26B4DFC0EEECB6___c** StaticGet___9()
	{
		return (::Class_2_2F26B4DFC0EEECB6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2F26B4DFC0EEECB6___c_TypeDefinitionIndex)->GetStaticField(0x3D590);
	}
	static ::System::Func_2<::Class_2_1824EF69C8E376A3*, ::System::UInt32>** StaticGet___9__24_1()
	{
		return (::System::Func_2<::Class_2_1824EF69C8E376A3*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2F26B4DFC0EEECB6___c_TypeDefinitionIndex)->GetStaticField(0x3D598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2F26B4DFC0EEECB6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F26B4DFC0EEECB6___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_B55B1B71AB888F65(::Class_2_1824EF69C8E376A3* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_2_2F26B4DFC0EEECB6___C_METHOD_1_B55B1B71AB888F65_OFFSET))(this, a1);
	}
};
