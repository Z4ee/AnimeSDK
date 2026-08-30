#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
class Class_1_F3CAAE7E7C7111CC;

#define CLASS_1_612902AD99EEB8E1_METHOD_1_6CB61E51009994BE_OFFSET UNITYSDK_OFFSET(0x1E764770)
#define CLASS_1_612902AD99EEB8E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7653F0)
#define CLASS_1_612902AD99EEB8E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E764760)

inline static constexpr unsigned int Class_1_612902AD99EEB8E1_TypeDefinitionIndex = 42484;

class Class_1_612902AD99EEB8E1 : public ::System::Object
{
public:
	static ::Class_1_612902AD99EEB8E1** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_612902AD99EEB8E1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_612902AD99EEB8E1_TypeDefinitionIndex)->GetStaticField(0x60420);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_612902AD99EEB8E1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_612902AD99EEB8E1__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_6CB61E51009994BE(::Class_1_F3CAAE7E7C7111CC* a1, ::Class_1_7B4E9156998275BE* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_612902AD99EEB8E1_METHOD_1_6CB61E51009994BE_OFFSET))(this, a1, a2);
	}
};
