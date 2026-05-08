#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_2A4351F9637A49DE;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_58BD1CC4E111C4F3___C_METHOD_1_8660C3A27B56FE60_OFFSET UNITYSDK_OFFSET(0x19F52C10)
#define CLASS_3_58BD1CC4E111C4F3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F52BC0)
#define CLASS_3_58BD1CC4E111C4F3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F52C00)

inline static constexpr unsigned int Class_3_58BD1CC4E111C4F3___c_TypeDefinitionIndex = 79894;

class Class_3_58BD1CC4E111C4F3___c : public ::System::Object
{
public:
	static ::Class_3_58BD1CC4E111C4F3___c** StaticGet___9()
	{
		return (::Class_3_58BD1CC4E111C4F3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_58BD1CC4E111C4F3___c_TypeDefinitionIndex)->GetStaticField(0x40EA0);
	}
	static ::System::Action_1<::Class_3_2A4351F9637A49DE*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_2A4351F9637A49DE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_58BD1CC4E111C4F3___c_TypeDefinitionIndex)->GetStaticField(0x40EA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8660C3A27B56FE60(::Class_3_2A4351F9637A49DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_2A4351F9637A49DE*))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3___C_METHOD_1_8660C3A27B56FE60_OFFSET))(this, a1);
	}
};
