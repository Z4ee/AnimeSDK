#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_37DF30C8B3AA0F39___C_METHOD_1_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x135D69E0)
#define CLASS_1_37DF30C8B3AA0F39___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135D6990)
#define CLASS_1_37DF30C8B3AA0F39___C__CTOR_OFFSET UNITYSDK_OFFSET(0x135D69D0)

inline static constexpr unsigned int Class_1_37DF30C8B3AA0F39___c_TypeDefinitionIndex = 65424;

class Class_1_37DF30C8B3AA0F39___c : public ::System::Object
{
public:
	static ::Class_1_37DF30C8B3AA0F39___c** StaticGet___9()
	{
		return (::Class_1_37DF30C8B3AA0F39___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37DF30C8B3AA0F39___c_TypeDefinitionIndex)->GetStaticField(0x35860);
	}
	static ::System::Action** StaticGet___9__49_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37DF30C8B3AA0F39___c_TypeDefinitionIndex)->GetStaticField(0x35868);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_37DF30C8B3AA0F39___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37DF30C8B3AA0F39___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37DF30C8B3AA0F39___C_METHOD_1_68805403250CC013_OFFSET))(this);
	}
};
