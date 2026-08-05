#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_A6272C10C4E9B18E_1___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1870AD60)
#define CLASS_2_A6272C10C4E9B18E_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1870AD10)
#define CLASS_2_A6272C10C4E9B18E_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1870AD50)

inline static constexpr unsigned int Class_2_A6272C10C4E9B18E_1___c_TypeDefinitionIndex = 52271;

class Class_2_A6272C10C4E9B18E_1___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__7_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A6272C10C4E9B18E_1___c_TypeDefinitionIndex)->GetStaticField(0x3B630);
	}
	static ::Class_2_A6272C10C4E9B18E_1___c** StaticGet___9()
	{
		return (::Class_2_A6272C10C4E9B18E_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A6272C10C4E9B18E_1___c_TypeDefinitionIndex)->GetStaticField(0x3B638);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A6272C10C4E9B18E_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6272C10C4E9B18E_1___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6272C10C4E9B18E_1___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
