#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_BC5A8D236BEA30C1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB29D4D0)
#define CLASS_3_BC5A8D236BEA30C1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB29D510)
#define CLASS_3_BC5A8D236BEA30C1___C__RESETLIGHTV1_B__13_0_OFFSET UNITYSDK_OFFSET(0xB29D520)

inline static constexpr unsigned int Class_3_BC5A8D236BEA30C1___c_TypeDefinitionIndex = 49342;

class Class_3_BC5A8D236BEA30C1___c : public ::System::Object
{
public:
	static ::Class_3_BC5A8D236BEA30C1___c** StaticGet___9()
	{
		return (::Class_3_BC5A8D236BEA30C1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BC5A8D236BEA30C1___c_TypeDefinitionIndex)->GetStaticField(0x24B10);
	}
	static ::System::Action** StaticGet___9__13_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BC5A8D236BEA30C1___c_TypeDefinitionIndex)->GetStaticField(0x24B18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1___C__CTOR_OFFSET))(this);
	}

	::System::Void _ResetLightV1_b__13_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1___C__RESETLIGHTV1_B__13_0_OFFSET))(this);
	}
};
