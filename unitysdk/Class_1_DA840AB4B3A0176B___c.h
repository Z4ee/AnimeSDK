#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_589;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_DA840AB4B3A0176B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xABE05C0)
#define CLASS_1_DA840AB4B3A0176B___C__CTOR_OFFSET UNITYSDK_OFFSET(0xABE05F0)
#define CLASS_1_DA840AB4B3A0176B___C__SKIPVIRTUALTIMETABLETONEXTSUBWAYARRIVED_B__25_0_OFFSET UNITYSDK_OFFSET(0xABE0600)

inline static constexpr unsigned int Class_1_DA840AB4B3A0176B___c_TypeDefinitionIndex = 55923;

class Class_1_DA840AB4B3A0176B___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_589*, ::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_589*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA840AB4B3A0176B___c_TypeDefinitionIndex)->GetStaticField(0x106A0);
	}
	static ::Class_1_DA840AB4B3A0176B___c** StaticGet___9()
	{
		return (::Class_1_DA840AB4B3A0176B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA840AB4B3A0176B___c_TypeDefinitionIndex)->GetStaticField(0x106A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SkipVirtualTimetableToNextSubwayArrived_b__25_0(::Class_0_16E4307DCC419505_589* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_589*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B___C__SKIPVIRTUALTIMETABLETONEXTSUBWAYARRIVED_B__25_0_OFFSET))(this, a1);
	}
};
