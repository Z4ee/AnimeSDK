#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_F62A29C0E1FC087C_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x10CF4FA0)
#define CLASS_2_F62A29C0E1FC087C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CF5060)
#define CLASS_2_F62A29C0E1FC087C__CTOR_OFFSET UNITYSDK_OFFSET(0x10CF4FE0)

inline static constexpr unsigned int Class_2_F62A29C0E1FC087C_TypeDefinitionIndex = 68075;

class Class_2_F62A29C0E1FC087C : public ::System::Exception
{
public:
	static ::Class_2_F62A29C0E1FC087C** StaticGet_Field_2_0()
	{
		return (::Class_2_F62A29C0E1FC087C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F62A29C0E1FC087C_TypeDefinitionIndex)->GetStaticField(0x4CE00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F62A29C0E1FC087C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F62A29C0E1FC087C__CCTOR_OFFSET))();
	}

	::System::String* get_Message()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F62A29C0E1FC087C_GET_MESSAGE_OFFSET))(this);
	}
};
