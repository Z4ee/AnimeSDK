#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_E90FBC302A79C3BF___C_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x13A10A50)
#define CLASS_2_E90FBC302A79C3BF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A10A00)
#define CLASS_2_E90FBC302A79C3BF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A10A40)

inline static constexpr unsigned int Class_2_E90FBC302A79C3BF___c_TypeDefinitionIndex = 60230;

class Class_2_E90FBC302A79C3BF___c : public ::System::Object
{
public:
	static ::Class_2_E90FBC302A79C3BF___c** StaticGet___9()
	{
		return (::Class_2_E90FBC302A79C3BF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E90FBC302A79C3BF___c_TypeDefinitionIndex)->GetStaticField(0x30DC0);
	}
	static ::System::Func_1<::System::Single>** StaticGet___9__10_0()
	{
		return (::System::Func_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E90FBC302A79C3BF___c_TypeDefinitionIndex)->GetStaticField(0x30DC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF___C_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
