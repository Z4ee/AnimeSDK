#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF3BDABEECCFB5AE.h"

namespace System { class String; }

#define CLASS_2_7419679A7698613D_3_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1069B0A0)
#define CLASS_2_7419679A7698613D_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1069B0B0)
#define CLASS_2_7419679A7698613D_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1069B090)

inline static constexpr unsigned int Class_2_7419679A7698613D_3_TypeDefinitionIndex = 54793;

class Class_2_7419679A7698613D_3 : public ::Class_1_BF3BDABEECCFB5AE
{
public:
	static ::Class_2_7419679A7698613D_3** StaticGet_Field_2_0()
	{
		return (::Class_2_7419679A7698613D_3**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7419679A7698613D_3_TypeDefinitionIndex)->GetStaticField(0x26600);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_3__CCTOR_OFFSET))();
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_3_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
