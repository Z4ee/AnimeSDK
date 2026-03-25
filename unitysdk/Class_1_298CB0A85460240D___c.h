#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EC326A3215DF194D;

#define CLASS_1_298CB0A85460240D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16612310)
#define CLASS_1_298CB0A85460240D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16612350)
#define CLASS_1_298CB0A85460240D___C___CCTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x16612360)

inline static constexpr unsigned int Class_1_298CB0A85460240D___c_TypeDefinitionIndex = 28674;

class Class_1_298CB0A85460240D___c : public ::System::Object
{
public:
	static ::Class_1_298CB0A85460240D___c** StaticGet___9()
	{
		return (::Class_1_298CB0A85460240D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_298CB0A85460240D___c_TypeDefinitionIndex)->GetStaticField(0x26A60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_298CB0A85460240D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298CB0A85460240D___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__8_0(::Class_1_EC326A3215DF194D* writer)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EC326A3215DF194D*))((::PBYTE)hIl2Cpp + CLASS_1_298CB0A85460240D___C___CCTOR_B__8_0_OFFSET))(this, writer);
	}
};
