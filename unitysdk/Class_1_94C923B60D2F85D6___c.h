#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_39616A122369D437.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_94C923B60D2F85D6___C_METHOD_1_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0x154D2350)
#define CLASS_1_94C923B60D2F85D6___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x154D2520)
#define CLASS_1_94C923B60D2F85D6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154D2300)
#define CLASS_1_94C923B60D2F85D6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154D2340)

inline static constexpr unsigned int Class_1_94C923B60D2F85D6___c_TypeDefinitionIndex = 43350;

class Class_1_94C923B60D2F85D6___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__11_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94C923B60D2F85D6___c_TypeDefinitionIndex)->GetStaticField(0x49300);
	}
	static ::Class_1_94C923B60D2F85D6___c** StaticGet___9()
	{
		return (::Class_1_94C923B60D2F85D6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94C923B60D2F85D6___c_TypeDefinitionIndex)->GetStaticField(0x49308);
	}
	static ::System::Func_2<::System::Int32, ::Enum_3_39616A122369D437>** StaticGet___9__94_0()
	{
		return (::System::Func_2<::System::Int32, ::Enum_3_39616A122369D437>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94C923B60D2F85D6___c_TypeDefinitionIndex)->GetStaticField(0x49310);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94C923B60D2F85D6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94C923B60D2F85D6___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94C923B60D2F85D6___C_METHOD_1_11D5322717FDFD9D_OFFSET))(this);
	}

	::Enum_3_39616A122369D437 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_39616A122369D437(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_94C923B60D2F85D6___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
