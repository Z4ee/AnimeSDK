#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2A63531FBDE405AB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165B2730)
#define CLASS_1_2A63531FBDE405AB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165B2760)
#define CLASS_1_2A63531FBDE405AB___C__SETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_B__5_0_OFFSET UNITYSDK_OFFSET(0x165B2770)

inline static constexpr unsigned int Class_1_2A63531FBDE405AB___c_TypeDefinitionIndex = 59902;

class Class_1_2A63531FBDE405AB___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::Enum_3_DFCB42601400F441>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::System::UInt32, ::Enum_3_DFCB42601400F441>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A63531FBDE405AB___c_TypeDefinitionIndex)->GetStaticField(0x67C10);
	}
	static ::Class_1_2A63531FBDE405AB___c** StaticGet___9()
	{
		return (::Class_1_2A63531FBDE405AB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A63531FBDE405AB___c_TypeDefinitionIndex)->GetStaticField(0x67C18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB___C__CTOR_OFFSET))(this);
	}

	::Enum_3_DFCB42601400F441 _SetRequestUnlockedMultiPathAvatarTypes_b__5_0(::System::UInt32 a1)
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB___C__SETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_B__5_0_OFFSET))(this, a1);
	}
};
