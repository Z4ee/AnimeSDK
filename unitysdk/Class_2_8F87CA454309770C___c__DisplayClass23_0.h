#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8F87CA454309770C_Struct_2_86083371450A3659.h"
#include "unitysdk/System/Object.h"

class Class_2_8F87CA454309770C;
class Class_2_FE060A211AF9E9E7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8F87CA454309770C___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13C01EC0)
#define CLASS_2_8F87CA454309770C___C__DISPLAYCLASS23_0___REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x13C02180)

inline static constexpr unsigned int Class_2_8F87CA454309770C___c__DisplayClass23_0_TypeDefinitionIndex = 67572;

class Class_2_8F87CA454309770C___c__DisplayClass23_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_8F87CA454309770C_Struct_2_86083371450A3659>* displayDataList; // 0x10
	::Class_2_8F87CA454309770C* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Void __RefreshView_b__0(::Class_2_FE060A211AF9E9E7* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE060A211AF9E9E7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8F87CA454309770C___C__DISPLAYCLASS23_0___REFRESHVIEW_B__0_OFFSET))(this, a1, a2);
	}
};
