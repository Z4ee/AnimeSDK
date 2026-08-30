#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_89120A467F7A010D_2;
class Class_1_C5CEA8DD589BD643;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_E66A76128908BBEC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16342500)
#define CLASS_1_E66A76128908BBEC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16342540)
#define CLASS_1_E66A76128908BBEC___C___CALCULATETEAMSTANDINGS_B__52_0_OFFSET UNITYSDK_OFFSET(0x16342570)
#define CLASS_1_E66A76128908BBEC___C___CALCULATETEAMSTANDINGS_B__52_1_OFFSET UNITYSDK_OFFSET(0x16342590)
#define CLASS_1_E66A76128908BBEC___C___PREPAREAUTOEQUIPPEDNEWDRIVERTOAST_B__42_0_OFFSET UNITYSDK_OFFSET(0x16342550)

inline static constexpr unsigned int Class_1_E66A76128908BBEC___c_TypeDefinitionIndex = 80382;

class Class_1_E66A76128908BBEC___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_89120A467F7A010D_2*, ::System::Boolean>** StaticGet___9__42_0()
	{
		return (::System::Func_2<::Class_1_89120A467F7A010D_2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E66A76128908BBEC___c_TypeDefinitionIndex)->GetStaticField(0x617D0);
	}
	static ::Class_1_E66A76128908BBEC___c** StaticGet___9()
	{
		return (::Class_1_E66A76128908BBEC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E66A76128908BBEC___c_TypeDefinitionIndex)->GetStaticField(0x617D8);
	}
	static ::System::Func_2<::Class_1_C5CEA8DD589BD643*, ::System::UInt32>** StaticGet___9__52_1()
	{
		return (::System::Func_2<::Class_1_C5CEA8DD589BD643*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E66A76128908BBEC___c_TypeDefinitionIndex)->GetStaticField(0x617E0);
	}
	static ::System::Func_2<::Class_1_C5CEA8DD589BD643*, ::System::Int32>** StaticGet___9__52_0()
	{
		return (::System::Func_2<::Class_1_C5CEA8DD589BD643*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E66A76128908BBEC___c_TypeDefinitionIndex)->GetStaticField(0x617E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E66A76128908BBEC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E66A76128908BBEC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __PrepareAutoEquippedNewDriverToast_b__42_0(::Class_1_89120A467F7A010D_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_89120A467F7A010D_2*))((::PBYTE)hIl2Cpp + CLASS_1_E66A76128908BBEC___C___PREPAREAUTOEQUIPPEDNEWDRIVERTOAST_B__42_0_OFFSET))(this, a1);
	}

	::System::Int32 __CalculateTeamStandings_b__52_0(::Class_1_C5CEA8DD589BD643* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C5CEA8DD589BD643*))((::PBYTE)hIl2Cpp + CLASS_1_E66A76128908BBEC___C___CALCULATETEAMSTANDINGS_B__52_0_OFFSET))(this, a1);
	}

	::System::UInt32 __CalculateTeamStandings_b__52_1(::Class_1_C5CEA8DD589BD643* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_C5CEA8DD589BD643*))((::PBYTE)hIl2Cpp + CLASS_1_E66A76128908BBEC___C___CALCULATETEAMSTANDINGS_B__52_1_OFFSET))(this, a1);
	}
};
