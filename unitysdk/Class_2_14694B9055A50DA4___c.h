#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_14694B9055A50DA4___C_METHOD_1_1B6939D1974805B9_OFFSET UNITYSDK_OFFSET(0x14069090)
#define CLASS_2_14694B9055A50DA4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14069040)
#define CLASS_2_14694B9055A50DA4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14069080)

inline static constexpr unsigned int Class_2_14694B9055A50DA4___c_TypeDefinitionIndex = 44325;

class Class_2_14694B9055A50DA4___c : public ::System::Object
{
public:
	static ::Class_2_14694B9055A50DA4___c** StaticGet___9()
	{
		return (::Class_2_14694B9055A50DA4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_14694B9055A50DA4___c_TypeDefinitionIndex)->GetStaticField(0x36D70);
	}
	static ::System::Func_2<::System::String*, ::Enum_3_81A3942BCC6E42B5>** StaticGet___9__34_0()
	{
		return (::System::Func_2<::System::String*, ::Enum_3_81A3942BCC6E42B5>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_14694B9055A50DA4___c_TypeDefinitionIndex)->GetStaticField(0x36D78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_14694B9055A50DA4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14694B9055A50DA4___C__CTOR_OFFSET))(this);
	}

	::Enum_3_81A3942BCC6E42B5 Method_1_1B6939D1974805B9(::System::String* a1)
	{
		return ((::Enum_3_81A3942BCC6E42B5(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_14694B9055A50DA4___C_METHOD_1_1B6939D1974805B9_OFFSET))(this, a1);
	}
};
