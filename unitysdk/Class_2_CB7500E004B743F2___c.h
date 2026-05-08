#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_CB7500E004B743F2___C_METHOD_1_4EE1B02AD2C54F52_OFFSET UNITYSDK_OFFSET(0x16C35D20)
#define CLASS_2_CB7500E004B743F2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C35CD0)
#define CLASS_2_CB7500E004B743F2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C35D10)

inline static constexpr unsigned int Class_2_CB7500E004B743F2___c_TypeDefinitionIndex = 72017;

class Class_2_CB7500E004B743F2___c : public ::System::Object
{
public:
	static ::Class_2_CB7500E004B743F2___c** StaticGet___9()
	{
		return (::Class_2_CB7500E004B743F2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB7500E004B743F2___c_TypeDefinitionIndex)->GetStaticField(0x451A0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__3_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB7500E004B743F2___c_TypeDefinitionIndex)->GetStaticField(0x451A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CB7500E004B743F2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB7500E004B743F2___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_4EE1B02AD2C54F52()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB7500E004B743F2___C_METHOD_1_4EE1B02AD2C54F52_OFFSET))(this);
	}
};
