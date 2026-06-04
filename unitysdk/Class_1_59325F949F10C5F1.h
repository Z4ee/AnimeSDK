#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60B5E5A0CB5606E4;

#define CLASS_1_59325F949F10C5F1_METHOD_1_2150063BB220686D_OFFSET UNITYSDK_OFFSET(0x1AC31170)
#define CLASS_1_59325F949F10C5F1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC31B70)
#define CLASS_1_59325F949F10C5F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC31160)

inline static constexpr unsigned int Class_1_59325F949F10C5F1_TypeDefinitionIndex = 40675;

class Class_1_59325F949F10C5F1 : public ::System::Object
{
public:
	static ::Class_1_59325F949F10C5F1** StaticGet_Field_1_0()
	{
		return (::Class_1_59325F949F10C5F1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59325F949F10C5F1_TypeDefinitionIndex)->GetStaticField(0x503A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59325F949F10C5F1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59325F949F10C5F1__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_2150063BB220686D(::Class_1_60B5E5A0CB5606E4* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_1_59325F949F10C5F1_METHOD_1_2150063BB220686D_OFFSET))(this, a1);
	}
};
