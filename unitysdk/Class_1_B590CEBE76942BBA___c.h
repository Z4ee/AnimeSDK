#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B590CEBE76942BBA;

#define CLASS_1_B590CEBE76942BBA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AC240)
#define CLASS_1_B590CEBE76942BBA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AC280)
#define CLASS_1_B590CEBE76942BBA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2AC290)

inline static constexpr unsigned int Class_1_B590CEBE76942BBA___c_TypeDefinitionIndex = 30550;

class Class_1_B590CEBE76942BBA___c : public ::System::Object
{
public:
	static ::Class_1_B590CEBE76942BBA___c** StaticGet___9()
	{
		return (::Class_1_B590CEBE76942BBA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B590CEBE76942BBA___c_TypeDefinitionIndex)->GetStaticField(0x3B440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B590CEBE76942BBA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590CEBE76942BBA___C__CTOR_OFFSET))(this);
	}

	::Class_1_B590CEBE76942BBA* __cctor_b__43_0()
	{
		return ((::Class_1_B590CEBE76942BBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590CEBE76942BBA___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
