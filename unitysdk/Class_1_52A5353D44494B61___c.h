#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52A5353D44494B61;

#define CLASS_1_52A5353D44494B61___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E586060)
#define CLASS_1_52A5353D44494B61___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5860A0)
#define CLASS_1_52A5353D44494B61___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E5860B0)

inline static constexpr unsigned int Class_1_52A5353D44494B61___c_TypeDefinitionIndex = 32941;

class Class_1_52A5353D44494B61___c : public ::System::Object
{
public:
	static ::Class_1_52A5353D44494B61___c** StaticGet___9()
	{
		return (::Class_1_52A5353D44494B61___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52A5353D44494B61___c_TypeDefinitionIndex)->GetStaticField(0x38FA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52A5353D44494B61___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52A5353D44494B61___C__CTOR_OFFSET))(this);
	}

	::Class_1_52A5353D44494B61* __cctor_b__48_0()
	{
		return ((::Class_1_52A5353D44494B61*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52A5353D44494B61___C___CCTOR_B__48_0_OFFSET))(this);
	}
};
