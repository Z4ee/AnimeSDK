#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_3412F81772BBCD8F___C_METHOD_1_4EE1B02AD2C54F52_OFFSET UNITYSDK_OFFSET(0x134FD860)
#define CLASS_2_3412F81772BBCD8F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134FD810)
#define CLASS_2_3412F81772BBCD8F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134FD850)

inline static constexpr unsigned int Class_2_3412F81772BBCD8F___c_TypeDefinitionIndex = 77967;

class Class_2_3412F81772BBCD8F___c : public ::System::Object
{
public:
	static ::Class_2_3412F81772BBCD8F___c** StaticGet___9()
	{
		return (::Class_2_3412F81772BBCD8F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3412F81772BBCD8F___c_TypeDefinitionIndex)->GetStaticField(0x4C800);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__3_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3412F81772BBCD8F___c_TypeDefinitionIndex)->GetStaticField(0x4C808);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3412F81772BBCD8F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3412F81772BBCD8F___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_4EE1B02AD2C54F52()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3412F81772BBCD8F___C_METHOD_1_4EE1B02AD2C54F52_OFFSET))(this);
	}
};
