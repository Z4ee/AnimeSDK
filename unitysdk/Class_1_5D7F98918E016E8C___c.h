#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A490681D87FEF21;
class Class_1_877AA22B04AFB81F;

#define CLASS_1_5D7F98918E016E8C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1661D120)
#define CLASS_1_5D7F98918E016E8C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1661D160)
#define CLASS_1_5D7F98918E016E8C___C___CCTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x1661D170)

inline static constexpr unsigned int Class_1_5D7F98918E016E8C___c_TypeDefinitionIndex = 28919;

class Class_1_5D7F98918E016E8C___c : public ::System::Object
{
public:
	static ::Class_1_5D7F98918E016E8C___c** StaticGet___9()
	{
		return (::Class_1_5D7F98918E016E8C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D7F98918E016E8C___c_TypeDefinitionIndex)->GetStaticField(0x26C10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C___C__CTOR_OFFSET))(this);
	}

	::System::Single __cctor_b__27_0(::Class_1_0A490681D87FEF21* _, ::Class_1_877AA22B04AFB81F* _, ::System::UInt32 _, ::System::UInt32 _)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_0A490681D87FEF21*, ::Class_1_877AA22B04AFB81F*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C___C___CCTOR_B__27_0_OFFSET))(this, _, _, _, _);
	}
};
