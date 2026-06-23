#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_457;

#define CLASS_1_E743F4500729FABC_COMPARE_OFFSET UNITYSDK_OFFSET(0x17FF0700)
#define CLASS_1_E743F4500729FABC__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FF0A60)
#define CLASS_1_E743F4500729FABC__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF0A50)

inline static constexpr unsigned int Class_1_E743F4500729FABC_TypeDefinitionIndex = 84805;

class Class_1_E743F4500729FABC : public ::System::Object
{
public:
	static ::Class_1_E743F4500729FABC** StaticGet_Field_1_0()
	{
		return (::Class_1_E743F4500729FABC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E743F4500729FABC_TypeDefinitionIndex)->GetStaticField(0x48D70);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E743F4500729FABC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E743F4500729FABC__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::Class_0_16E4307DCC419505_457* a1, ::Class_0_16E4307DCC419505_457* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_457*, ::Class_0_16E4307DCC419505_457*))((::PBYTE)hIl2Cpp + CLASS_1_E743F4500729FABC_COMPARE_OFFSET))(this, a1, a2);
	}
};
