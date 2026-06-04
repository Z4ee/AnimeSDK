#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_28484967E6BD60BE_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14567000)
#define CLASS_1_28484967E6BD60BE_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14567040)
#define CLASS_1_28484967E6BD60BE_1___C__SELECTTARGETS_B__0_0_OFFSET UNITYSDK_OFFSET(0x14567050)

inline static constexpr unsigned int Class_1_28484967E6BD60BE_1___c_TypeDefinitionIndex = 71904;

class Class_1_28484967E6BD60BE_1___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28484967E6BD60BE_1___c_TypeDefinitionIndex)->GetStaticField(0x4EBE0);
	}
	static ::Class_1_28484967E6BD60BE_1___c** StaticGet___9()
	{
		return (::Class_1_28484967E6BD60BE_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28484967E6BD60BE_1___c_TypeDefinitionIndex)->GetStaticField(0x4EBE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28484967E6BD60BE_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28484967E6BD60BE_1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SelectTargets_b__0_0(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_28484967E6BD60BE_1___C__SELECTTARGETS_B__0_0_OFFSET))(this, a1);
	}
};
