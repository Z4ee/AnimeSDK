#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6827134BFE374954_METHOD_1_1457B860C751C9CE_OFFSET UNITYSDK_OFFSET(0x15046BB0)
#define CLASS_1_6827134BFE374954_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x15046B20)
#define CLASS_1_6827134BFE374954__CCTOR_OFFSET UNITYSDK_OFFSET(0x15046AE0)
#define CLASS_1_6827134BFE374954__CTOR_OFFSET UNITYSDK_OFFSET(0x15046AD0)

inline static constexpr unsigned int Class_1_6827134BFE374954_TypeDefinitionIndex = 86393;

class Class_1_6827134BFE374954 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6827134BFE374954_TypeDefinitionIndex)->GetStaticField(0x127A0);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6827134BFE374954_TypeDefinitionIndex)->GetStaticField(0x127A4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6827134BFE374954__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6827134BFE374954__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6827134BFE374954_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Void Method_1_1457B860C751C9CE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6827134BFE374954_METHOD_1_1457B860C751C9CE_OFFSET))(a1);
	}
};
