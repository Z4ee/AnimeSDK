#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF3BDABEECCFB5AE.h"

namespace System { class String; }

#define CLASS_2_7419679A7698613D_2_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x10686DF0)
#define CLASS_2_7419679A7698613D_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x10686E00)
#define CLASS_2_7419679A7698613D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10686DE0)

inline static constexpr unsigned int Class_2_7419679A7698613D_2_TypeDefinitionIndex = 54778;

class Class_2_7419679A7698613D_2 : public ::Class_1_BF3BDABEECCFB5AE
{
public:
	static ::Class_2_7419679A7698613D_2** StaticGet_Field_2_0()
	{
		return (::Class_2_7419679A7698613D_2**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7419679A7698613D_2_TypeDefinitionIndex)->GetStaticField(0x25DD0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_2__CCTOR_OFFSET))();
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_2_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
