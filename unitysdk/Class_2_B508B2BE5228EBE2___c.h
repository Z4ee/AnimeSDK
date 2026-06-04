#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_330;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_B508B2BE5228EBE2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B014D0)
#define CLASS_2_B508B2BE5228EBE2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B01500)
#define CLASS_2_B508B2BE5228EBE2___C__REGISTERCOMPONENTADAPTERS_B__176_0_OFFSET UNITYSDK_OFFSET(0x13B01510)

inline static constexpr unsigned int Class_2_B508B2BE5228EBE2___c_TypeDefinitionIndex = 46461;

class Class_2_B508B2BE5228EBE2___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Object*, ::Class_0_16E4307DCC419505_330*>** StaticGet___9__176_0()
	{
		return (::System::Func_2<::System::Object*, ::Class_0_16E4307DCC419505_330*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B508B2BE5228EBE2___c_TypeDefinitionIndex)->GetStaticField(0x5FD20);
	}
	static ::Class_2_B508B2BE5228EBE2___c** StaticGet___9()
	{
		return (::Class_2_B508B2BE5228EBE2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B508B2BE5228EBE2___c_TypeDefinitionIndex)->GetStaticField(0x5FD28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_330* _RegisterComponentAdapters_b__176_0(::System::Object* a1)
	{
		return ((::Class_0_16E4307DCC419505_330*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B508B2BE5228EBE2___C__REGISTERCOMPONENTADAPTERS_B__176_0_OFFSET))(this, a1);
	}
};
