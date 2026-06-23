#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_6D99A03C58ED2B6E_6___C_METHOD_1_7F2759EA941D887B_OFFSET UNITYSDK_OFFSET(0x179A67E0)
#define CLASS_2_6D99A03C58ED2B6E_6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179A6790)
#define CLASS_2_6D99A03C58ED2B6E_6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179A67D0)

inline static constexpr unsigned int Class_2_6D99A03C58ED2B6E_6___c_TypeDefinitionIndex = 12771;

class Class_2_6D99A03C58ED2B6E_6___c : public ::System::Object
{
public:
	static ::Class_2_6D99A03C58ED2B6E_6___c** StaticGet___9()
	{
		return (::Class_2_6D99A03C58ED2B6E_6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D99A03C58ED2B6E_6___c_TypeDefinitionIndex)->GetStaticField(0x7720);
	}
	static ::System::Converter_2<::System::String*, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Converter_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D99A03C58ED2B6E_6___c_TypeDefinitionIndex)->GetStaticField(0x7728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_7F2759EA941D887B(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_6___C_METHOD_1_7F2759EA941D887B_OFFSET))(this, a1);
	}
};
