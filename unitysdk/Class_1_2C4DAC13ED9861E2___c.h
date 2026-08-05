#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_1_2C4DAC13ED9861E2___C_METHOD_1_012D5C5084F7F8A0_OFFSET UNITYSDK_OFFSET(0x16F48030)
#define CLASS_1_2C4DAC13ED9861E2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F47FE0)
#define CLASS_1_2C4DAC13ED9861E2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F48020)

inline static constexpr unsigned int Class_1_2C4DAC13ED9861E2___c_TypeDefinitionIndex = 74684;

class Class_1_2C4DAC13ED9861E2___c : public ::System::Object
{
public:
	static ::Class_1_2C4DAC13ED9861E2___c** StaticGet___9()
	{
		return (::Class_1_2C4DAC13ED9861E2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C4DAC13ED9861E2___c_TypeDefinitionIndex)->GetStaticField(0x41C10);
	}
	static ::System::Func_1<::MoleMole::EntityHandle>** StaticGet___9__6_0()
	{
		return (::System::Func_1<::MoleMole::EntityHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C4DAC13ED9861E2___c_TypeDefinitionIndex)->GetStaticField(0x41C18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C4DAC13ED9861E2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C4DAC13ED9861E2___C__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_1_012D5C5084F7F8A0()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C4DAC13ED9861E2___C_METHOD_1_012D5C5084F7F8A0_OFFSET))(this);
	}
};
