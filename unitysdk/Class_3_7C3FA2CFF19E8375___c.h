#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_7C3FA2CFF19E8375___C_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xFF50DD0)
#define CLASS_3_7C3FA2CFF19E8375___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF50D80)
#define CLASS_3_7C3FA2CFF19E8375___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFF50DC0)

inline static constexpr unsigned int Class_3_7C3FA2CFF19E8375___c_TypeDefinitionIndex = 44147;

class Class_3_7C3FA2CFF19E8375___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__9_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7C3FA2CFF19E8375___c_TypeDefinitionIndex)->GetStaticField(0x36630);
	}
	static ::Class_3_7C3FA2CFF19E8375___c** StaticGet___9()
	{
		return (::Class_3_7C3FA2CFF19E8375___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7C3FA2CFF19E8375___c_TypeDefinitionIndex)->GetStaticField(0x36638);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7C3FA2CFF19E8375___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3FA2CFF19E8375___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3FA2CFF19E8375___C_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}
};
