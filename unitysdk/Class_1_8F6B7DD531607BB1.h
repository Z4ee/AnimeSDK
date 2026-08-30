#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8F6B7DD531607BB1_METHOD_1_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x14075B10)
#define CLASS_1_8F6B7DD531607BB1_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0x14075AB0)
#define CLASS_1_8F6B7DD531607BB1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x14075910)
#define CLASS_1_8F6B7DD531607BB1_METHOD_1_F188D2CB5CA2E712_OFFSET UNITYSDK_OFFSET(0x14075CC0)
#define CLASS_1_8F6B7DD531607BB1__CCTOR_OFFSET UNITYSDK_OFFSET(0x14075E80)

inline static constexpr unsigned int Class_1_8F6B7DD531607BB1_TypeDefinitionIndex = 40093;

class Class_1_8F6B7DD531607BB1 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_KOOHOOAPILD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F6B7DD531607BB1_TypeDefinitionIndex)->GetStaticField(0x76A0);
	}
	static ::System::Boolean* StaticGet_EOANOCIBEAM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F6B7DD531607BB1_TypeDefinitionIndex)->GetStaticField(0x76A1);
	}
	static ::System::Boolean* StaticGet_BOJFKDPCKGI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F6B7DD531607BB1_TypeDefinitionIndex)->GetStaticField(0x76A2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F6B7DD531607BB1__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F6B7DD531607BB1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F6B7DD531607BB1_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Void Method_1_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8F6B7DD531607BB1_METHOD_1_1DA89DF9585853CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F188D2CB5CA2E712(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8F6B7DD531607BB1_METHOD_1_F188D2CB5CA2E712_OFFSET))(a1);
	}
};
