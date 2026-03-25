#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3BF4D371398AB9DB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1807ABB0)
#define CLASS_1_3BF4D371398AB9DB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1807ABE0)
#define CLASS_1_3BF4D371398AB9DB___C___CCTOR_B__20_0_OFFSET UNITYSDK_OFFSET(0x1807ABF0)
#define CLASS_1_3BF4D371398AB9DB___C___CCTOR_B__20_1_OFFSET UNITYSDK_OFFSET(0x1807AC00)

inline static constexpr unsigned int Class_1_3BF4D371398AB9DB___c_TypeDefinitionIndex = 26641;

class Class_1_3BF4D371398AB9DB___c : public ::System::Object
{
public:
	static ::Class_1_3BF4D371398AB9DB___c** StaticGet___9()
	{
		return (::Class_1_3BF4D371398AB9DB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BF4D371398AB9DB___c_TypeDefinitionIndex)->GetStaticField(0x31D20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__20_0(::Enum_3_96F6662CA3713095_24 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB___C___CCTOR_B__20_0_OFFSET))(this, x);
	}

	::Enum_3_96F6662CA3713095_24 __cctor_b__20_1(::System::Int32 x)
	{
		return ((::Enum_3_96F6662CA3713095_24(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3BF4D371398AB9DB___C___CCTOR_B__20_1_OFFSET))(this, x);
	}
};
