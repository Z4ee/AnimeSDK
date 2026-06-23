#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8FD2A2A2B94772AC_METHOD_1_7642E9CE17CC35E4_OFFSET UNITYSDK_OFFSET(0x1140C810)
#define CLASS_1_8FD2A2A2B94772AC_METHOD_1_B0848049F20C3C0E_OFFSET UNITYSDK_OFFSET(0x1140C680)
#define CLASS_1_8FD2A2A2B94772AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1140C640)

inline static constexpr unsigned int Class_1_8FD2A2A2B94772AC_TypeDefinitionIndex = 50969;

class Class_1_8FD2A2A2B94772AC : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8FD2A2A2B94772AC_TypeDefinitionIndex)->GetStaticField(0x3F720);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8FD2A2A2B94772AC__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_B0848049F20C3C0E(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8FD2A2A2B94772AC_METHOD_1_B0848049F20C3C0E_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_7642E9CE17CC35E4()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_8FD2A2A2B94772AC_METHOD_1_7642E9CE17CC35E4_OFFSET))();
	}
};
