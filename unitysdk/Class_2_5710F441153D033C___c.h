#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_5710F441153D033C___C_METHOD_1_AB4F6345C3E840D3_OFFSET UNITYSDK_OFFSET(0x11C84430)
#define CLASS_2_5710F441153D033C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C843E0)
#define CLASS_2_5710F441153D033C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11C84420)

inline static constexpr unsigned int Class_2_5710F441153D033C___c_TypeDefinitionIndex = 48676;

class Class_2_5710F441153D033C___c : public ::System::Object
{
public:
	static ::Class_2_5710F441153D033C___c** StaticGet___9()
	{
		return (::Class_2_5710F441153D033C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5710F441153D033C___c_TypeDefinitionIndex)->GetStaticField(0x45770);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__9_7()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5710F441153D033C___c_TypeDefinitionIndex)->GetStaticField(0x45778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5710F441153D033C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5710F441153D033C___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_AB4F6345C3E840D3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5710F441153D033C___C_METHOD_1_AB4F6345C3E840D3_OFFSET))(this);
	}
};
