#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A490681D87FEF21;
class Class_1_877AA22B04AFB81F_2;

#define CLASS_1_6CC0939E8A15669B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x189AEC70)
#define CLASS_1_6CC0939E8A15669B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x189AECB0)
#define CLASS_1_6CC0939E8A15669B___C___CCTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x189AECC0)

inline static constexpr unsigned int Class_1_6CC0939E8A15669B___c_TypeDefinitionIndex = 34936;

class Class_1_6CC0939E8A15669B___c : public ::System::Object
{
public:
	static ::Class_1_6CC0939E8A15669B___c** StaticGet___9()
	{
		return (::Class_1_6CC0939E8A15669B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CC0939E8A15669B___c_TypeDefinitionIndex)->GetStaticField(0x51190);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CC0939E8A15669B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC0939E8A15669B___C__CTOR_OFFSET))(this);
	}

	::System::Single __cctor_b__27_0(::Class_1_0A490681D87FEF21* a1, ::Class_1_877AA22B04AFB81F_2* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_0A490681D87FEF21*, ::Class_1_877AA22B04AFB81F_2*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CC0939E8A15669B___C___CCTOR_B__27_0_OFFSET))(this, a1, a2, a3, a4);
	}
};
