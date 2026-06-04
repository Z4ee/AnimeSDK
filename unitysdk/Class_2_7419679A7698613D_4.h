#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF3BDABEECCFB5AE.h"

namespace System { class String; }

#define CLASS_2_7419679A7698613D_4_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x13C95430)
#define CLASS_2_7419679A7698613D_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C95440)
#define CLASS_2_7419679A7698613D_4__CTOR_OFFSET UNITYSDK_OFFSET(0x13C95420)

inline static constexpr unsigned int Class_2_7419679A7698613D_4_TypeDefinitionIndex = 63362;

class Class_2_7419679A7698613D_4 : public ::Class_1_BF3BDABEECCFB5AE
{
public:
	static ::Class_2_7419679A7698613D_4** StaticGet_Field_2_0()
	{
		return (::Class_2_7419679A7698613D_4**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7419679A7698613D_4_TypeDefinitionIndex)->GetStaticField(0x665C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_4__CCTOR_OFFSET))();
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7419679A7698613D_4_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
