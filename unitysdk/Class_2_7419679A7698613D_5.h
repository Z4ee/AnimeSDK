#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF3BDABEECCFB5AE.h"

namespace System { class String; }

#define CLASS_2_7419679A7698613D_5_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x114B1620)
#define CLASS_2_7419679A7698613D_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x114B1630)
#define CLASS_2_7419679A7698613D_5__CTOR_OFFSET UNITYSDK_OFFSET(0x114B1610)

inline static constexpr unsigned int Class_2_7419679A7698613D_5_TypeDefinitionIndex = 55241;

class Class_2_7419679A7698613D_5 : public ::Class_1_BF3BDABEECCFB5AE
{
public:
	static ::Class_2_7419679A7698613D_5** StaticGet_Field_2_0()
	{
		return (::Class_2_7419679A7698613D_5**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7419679A7698613D_5_TypeDefinitionIndex)->GetStaticField(0x36C60);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_5__CCTOR_OFFSET))();
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_5_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
