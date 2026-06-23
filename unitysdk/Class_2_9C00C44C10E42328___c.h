#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_9C00C44C10E42328___C_METHOD_1_B3C05782E9B9B780_OFFSET UNITYSDK_OFFSET(0x133835E0)
#define CLASS_2_9C00C44C10E42328___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13383590)
#define CLASS_2_9C00C44C10E42328___C__CTOR_OFFSET UNITYSDK_OFFSET(0x133835D0)

inline static constexpr unsigned int Class_2_9C00C44C10E42328___c_TypeDefinitionIndex = 72569;

class Class_2_9C00C44C10E42328___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::EntityHandle>** StaticGet___9__0_0()
	{
		return (::System::Func_1<::MoleMole::EntityHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9C00C44C10E42328___c_TypeDefinitionIndex)->GetStaticField(0x4B7B0);
	}
	static ::Class_2_9C00C44C10E42328___c** StaticGet___9()
	{
		return (::Class_2_9C00C44C10E42328___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9C00C44C10E42328___c_TypeDefinitionIndex)->GetStaticField(0x4B7B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9C00C44C10E42328___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C00C44C10E42328___C__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_1_B3C05782E9B9B780()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C00C44C10E42328___C_METHOD_1_B3C05782E9B9B780_OFFSET))(this);
	}
};
