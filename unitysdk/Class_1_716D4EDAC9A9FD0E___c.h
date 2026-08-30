#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FCC22A0BAD3D5A17;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_716D4EDAC9A9FD0E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AD5470)
#define CLASS_1_716D4EDAC9A9FD0E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD54B0)
#define CLASS_1_716D4EDAC9A9FD0E___C__ISEMPTY_B__14_0_OFFSET UNITYSDK_OFFSET(0x19AD54C0)

inline static constexpr unsigned int Class_1_716D4EDAC9A9FD0E___c_TypeDefinitionIndex = 80150;

class Class_1_716D4EDAC9A9FD0E___c : public ::System::Object
{
public:
	static ::Class_1_716D4EDAC9A9FD0E___c** StaticGet___9()
	{
		return (::Class_1_716D4EDAC9A9FD0E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_716D4EDAC9A9FD0E___c_TypeDefinitionIndex)->GetStaticField(0x28D80);
	}
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Boolean>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_716D4EDAC9A9FD0E___c_TypeDefinitionIndex)->GetStaticField(0x28D88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsEmpty_b__14_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_716D4EDAC9A9FD0E___C__ISEMPTY_B__14_0_OFFSET))(this, a1);
	}
};
