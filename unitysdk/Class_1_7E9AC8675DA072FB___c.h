#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E9AC8675DA072FB;

#define CLASS_1_7E9AC8675DA072FB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A26A830)
#define CLASS_1_7E9AC8675DA072FB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A26A860)
#define CLASS_1_7E9AC8675DA072FB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1A26A870)

inline static constexpr unsigned int Class_1_7E9AC8675DA072FB___c_TypeDefinitionIndex = 26288;

class Class_1_7E9AC8675DA072FB___c : public ::System::Object
{
public:
	static ::Class_1_7E9AC8675DA072FB___c** StaticGet___9()
	{
		return (::Class_1_7E9AC8675DA072FB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E9AC8675DA072FB___c_TypeDefinitionIndex)->GetStaticField(0x45D40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB___C__CTOR_OFFSET))(this);
	}

	::Class_1_7E9AC8675DA072FB* __cctor_b__43_0()
	{
		return ((::Class_1_7E9AC8675DA072FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9AC8675DA072FB___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
