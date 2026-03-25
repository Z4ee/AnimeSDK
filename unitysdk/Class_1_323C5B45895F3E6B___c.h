#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_323C5B45895F3E6B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18003CD0)
#define CLASS_1_323C5B45895F3E6B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18003D10)
#define CLASS_1_323C5B45895F3E6B___C___CCTOR_B__20_0_OFFSET UNITYSDK_OFFSET(0x18003D20)
#define CLASS_1_323C5B45895F3E6B___C___CCTOR_B__20_1_OFFSET UNITYSDK_OFFSET(0x18003D30)

inline static constexpr unsigned int Class_1_323C5B45895F3E6B___c_TypeDefinitionIndex = 23477;

class Class_1_323C5B45895F3E6B___c : public ::System::Object
{
public:
	static ::Class_1_323C5B45895F3E6B___c** StaticGet___9()
	{
		return (::Class_1_323C5B45895F3E6B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_323C5B45895F3E6B___c_TypeDefinitionIndex)->GetStaticField(0x40620);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__20_0(::Enum_3_DFCB42601400F441 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B___C___CCTOR_B__20_0_OFFSET))(this, x);
	}

	::Enum_3_DFCB42601400F441 __cctor_b__20_1(::System::Int32 x)
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_323C5B45895F3E6B___C___CCTOR_B__20_1_OFFSET))(this, x);
	}
};
