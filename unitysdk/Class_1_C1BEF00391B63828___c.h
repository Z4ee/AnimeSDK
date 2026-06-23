#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A06B10C4DE479401;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_C1BEF00391B63828___C_METHOD_1_250203490119AF47_OFFSET UNITYSDK_OFFSET(0x1143E2F0)
#define CLASS_1_C1BEF00391B63828___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1143E2A0)
#define CLASS_1_C1BEF00391B63828___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1143E2E0)

inline static constexpr unsigned int Class_1_C1BEF00391B63828___c_TypeDefinitionIndex = 48110;

class Class_1_C1BEF00391B63828___c : public ::System::Object
{
public:
	static ::Class_1_C1BEF00391B63828___c** StaticGet___9()
	{
		return (::Class_1_C1BEF00391B63828___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1BEF00391B63828___c_TypeDefinitionIndex)->GetStaticField(0x2E030);
	}
	static ::System::Func_2<::Class_1_A06B10C4DE479401*, ::Class_1_A06B10C4DE479401*>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_1_A06B10C4DE479401*, ::Class_1_A06B10C4DE479401*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1BEF00391B63828___c_TypeDefinitionIndex)->GetStaticField(0x2E038);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1BEF00391B63828___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1BEF00391B63828___C__CTOR_OFFSET))(this);
	}

	::Class_1_A06B10C4DE479401* Method_1_250203490119AF47(::Class_1_A06B10C4DE479401* a1)
	{
		return ((::Class_1_A06B10C4DE479401*(*)(::PVOID, ::Class_1_A06B10C4DE479401*))((::PBYTE)hIl2Cpp + CLASS_1_C1BEF00391B63828___C_METHOD_1_250203490119AF47_OFFSET))(this, a1);
	}
};
