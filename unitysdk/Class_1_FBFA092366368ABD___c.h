#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_652;
class Class_2_BF47C01E9CFEA39C;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_FBFA092366368ABD___C__ADDPROGRESSLOG_B__90_5_OFFSET UNITYSDK_OFFSET(0x15299E50)
#define CLASS_1_FBFA092366368ABD___C__ADDPROGRESSLOG_B__90_6_OFFSET UNITYSDK_OFFSET(0x15299E90)
#define CLASS_1_FBFA092366368ABD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15299E00)
#define CLASS_1_FBFA092366368ABD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15299E40)

inline static constexpr unsigned int Class_1_FBFA092366368ABD___c_TypeDefinitionIndex = 59697;

class Class_1_FBFA092366368ABD___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*>** StaticGet___9__90_5()
	{
		return (::System::Action_2<::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBFA092366368ABD___c_TypeDefinitionIndex)->GetStaticField(0x63710);
	}
	static ::System::Action_1<::Class_2_BF47C01E9CFEA39C*>** StaticGet___9__90_6()
	{
		return (::System::Action_1<::Class_2_BF47C01E9CFEA39C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBFA092366368ABD___c_TypeDefinitionIndex)->GetStaticField(0x63718);
	}
	static ::Class_1_FBFA092366368ABD___c** StaticGet___9()
	{
		return (::Class_1_FBFA092366368ABD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBFA092366368ABD___c_TypeDefinitionIndex)->GetStaticField(0x63720);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___C__CTOR_OFFSET))(this);
	}

	::System::Void _AddProgressLog_b__90_5(::Class_0_16E4307DCC419505_650* a1, ::Class_0_16E4307DCC419505_652* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___C__ADDPROGRESSLOG_B__90_5_OFFSET))(this, a1, a2);
	}

	::System::Void _AddProgressLog_b__90_6(::Class_2_BF47C01E9CFEA39C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___C__ADDPROGRESSLOG_B__90_6_OFFSET))(this, a1);
	}
};
