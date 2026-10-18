#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6F4C4ABEDB8B5E9;
class Class_1_F3CAAE7E7C7111CC;

#define CLASS_1_612902AD99EEB8E1_METHOD_1_6CB61E51009994BE_OFFSET UNITYSDK_OFFSET(0x1EC6CDF0)
#define CLASS_1_612902AD99EEB8E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC6DC20)
#define CLASS_1_612902AD99EEB8E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC6CDE0)

inline static constexpr unsigned int Class_1_612902AD99EEB8E1_TypeDefinitionIndex = 44291;

class Class_1_612902AD99EEB8E1 : public ::System::Object
{
public:
	static ::Class_1_612902AD99EEB8E1** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_612902AD99EEB8E1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_612902AD99EEB8E1_TypeDefinitionIndex)->GetStaticField(0x4B0F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_612902AD99EEB8E1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_612902AD99EEB8E1__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_6CB61E51009994BE(::Class_1_F3CAAE7E7C7111CC* a1, ::Class_1_C6F4C4ABEDB8B5E9* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*, ::Class_1_C6F4C4ABEDB8B5E9*))((::PBYTE)hIl2Cpp + CLASS_1_612902AD99EEB8E1_METHOD_1_6CB61E51009994BE_OFFSET))(this, a1, a2);
	}
};
