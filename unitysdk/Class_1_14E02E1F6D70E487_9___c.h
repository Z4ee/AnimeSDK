#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_72.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_14E02E1F6D70E487_9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FB2F50)
#define CLASS_1_14E02E1F6D70E487_9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB2F80)
#define CLASS_1_14E02E1F6D70E487_9___C___CCTOR_B__70_0_OFFSET UNITYSDK_OFFSET(0x17FB2F90)
#define CLASS_1_14E02E1F6D70E487_9___C___CCTOR_B__70_1_OFFSET UNITYSDK_OFFSET(0x17FB2FA0)

inline static constexpr unsigned int Class_1_14E02E1F6D70E487_9___c_TypeDefinitionIndex = 27044;

class Class_1_14E02E1F6D70E487_9___c : public ::System::Object
{
public:
	static ::Class_1_14E02E1F6D70E487_9___c** StaticGet___9()
	{
		return (::Class_1_14E02E1F6D70E487_9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_9___c_TypeDefinitionIndex)->GetStaticField(0x36320);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_9___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__70_0(::Enum_3_0A3761FE34514D6C_72 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_72))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_9___C___CCTOR_B__70_0_OFFSET))(this, x);
	}

	::Enum_3_0A3761FE34514D6C_72 __cctor_b__70_1(::System::Int32 x)
	{
		return ((::Enum_3_0A3761FE34514D6C_72(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_9___C___CCTOR_B__70_1_OFFSET))(this, x);
	}
};
