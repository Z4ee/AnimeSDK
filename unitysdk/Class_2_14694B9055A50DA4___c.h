#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_14694B9055A50DA4___C_METHOD_1_1B6939D1974805B9_OFFSET UNITYSDK_OFFSET(0x1174FFF0)
#define CLASS_2_14694B9055A50DA4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1174FFA0)
#define CLASS_2_14694B9055A50DA4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1174FFE0)

inline static constexpr unsigned int Class_2_14694B9055A50DA4___c_TypeDefinitionIndex = 50534;

class Class_2_14694B9055A50DA4___c : public ::System::Object
{
public:
	static ::Class_2_14694B9055A50DA4___c** StaticGet___9()
	{
		return (::Class_2_14694B9055A50DA4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_14694B9055A50DA4___c_TypeDefinitionIndex)->GetStaticField(0x3B810);
	}
	static ::System::Func_2<::System::String*, ::Enum_3_7A4252233BCEB3A9>** StaticGet___9__35_0()
	{
		return (::System::Func_2<::System::String*, ::Enum_3_7A4252233BCEB3A9>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_14694B9055A50DA4___c_TypeDefinitionIndex)->GetStaticField(0x3B818);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_14694B9055A50DA4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14694B9055A50DA4___C__CTOR_OFFSET))(this);
	}

	::Enum_3_7A4252233BCEB3A9 Method_1_1B6939D1974805B9(::System::String* a1)
	{
		return ((::Enum_3_7A4252233BCEB3A9(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_14694B9055A50DA4___C_METHOD_1_1B6939D1974805B9_OFFSET))(this, a1);
	}
};
