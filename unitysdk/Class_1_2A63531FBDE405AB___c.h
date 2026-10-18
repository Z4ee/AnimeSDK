#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441_1.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2A63531FBDE405AB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC96B80)
#define CLASS_1_2A63531FBDE405AB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBC96BB0)
#define CLASS_1_2A63531FBDE405AB___C__SETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_B__5_0_OFFSET UNITYSDK_OFFSET(0xBC96BC0)

inline static constexpr unsigned int Class_1_2A63531FBDE405AB___c_TypeDefinitionIndex = 62666;

class Class_1_2A63531FBDE405AB___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::Enum_3_DFCB42601400F441_1>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::System::UInt32, ::Enum_3_DFCB42601400F441_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A63531FBDE405AB___c_TypeDefinitionIndex)->GetStaticField(0x4BFC0);
	}
	static ::Class_1_2A63531FBDE405AB___c** StaticGet___9()
	{
		return (::Class_1_2A63531FBDE405AB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A63531FBDE405AB___c_TypeDefinitionIndex)->GetStaticField(0x4BFC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB___C__CTOR_OFFSET))(this);
	}

	::Enum_3_DFCB42601400F441_1 _SetRequestUnlockedMultiPathAvatarTypes_b__5_0(::System::UInt32 a1)
	{
		return ((::Enum_3_DFCB42601400F441_1(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB___C__SETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_B__5_0_OFFSET))(this, a1);
	}
};
