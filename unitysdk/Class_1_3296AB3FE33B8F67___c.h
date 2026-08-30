#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3296AB3FE33B8F67___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1589FE30)
#define CLASS_1_3296AB3FE33B8F67___C__CHECKAUTOBINDCALLBACKPARAMS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1589FE80)
#define CLASS_1_3296AB3FE33B8F67___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1589FE70)

inline static constexpr unsigned int Class_1_3296AB3FE33B8F67___c_TypeDefinitionIndex = 73044;

class Class_1_3296AB3FE33B8F67___c : public ::System::Object
{
public:
	static ::Class_1_3296AB3FE33B8F67___c** StaticGet___9()
	{
		return (::Class_1_3296AB3FE33B8F67___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3296AB3FE33B8F67___c_TypeDefinitionIndex)->GetStaticField(0x5D160);
	}
	static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3296AB3FE33B8F67___c_TypeDefinitionIndex)->GetStaticField(0x5D168);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67___C__CTOR_OFFSET))(this);
	}

	::System::String* _CheckAutoBindCallBackParams_b__8_0(::System::Type* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_3296AB3FE33B8F67___C__CHECKAUTOBINDCALLBACKPARAMS_B__8_0_OFFSET))(this, a1);
	}
};
