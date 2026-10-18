#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD893FD36F6A3A6D_2;
class Class_2_D550E2FE83D255EF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B7FF1316D310A68E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15673610)
#define CLASS_1_B7FF1316D310A68E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15673650)
#define CLASS_1_B7FF1316D310A68E___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_0_OFFSET UNITYSDK_OFFSET(0x15673660)
#define CLASS_1_B7FF1316D310A68E___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_1_OFFSET UNITYSDK_OFFSET(0x156736D0)
#define CLASS_1_B7FF1316D310A68E___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_2_OFFSET UNITYSDK_OFFSET(0x15673740)

inline static constexpr unsigned int Class_1_B7FF1316D310A68E___c_TypeDefinitionIndex = 79499;

class Class_1_B7FF1316D310A68E___c : public ::System::Object
{
public:
	static ::Class_1_B7FF1316D310A68E___c** StaticGet___9()
	{
		return (::Class_1_B7FF1316D310A68E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7FF1316D310A68E___c_TypeDefinitionIndex)->GetStaticField(0x51700);
	}
	static ::System::Func_2<::Class_1_FD893FD36F6A3A6D_2*, ::System::Boolean>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::Class_1_FD893FD36F6A3A6D_2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7FF1316D310A68E___c_TypeDefinitionIndex)->GetStaticField(0x51708);
	}
	static ::System::Func_2<::Class_1_FD893FD36F6A3A6D_2*, ::Class_2_D550E2FE83D255EF*>** StaticGet___9__17_1()
	{
		return (::System::Func_2<::Class_1_FD893FD36F6A3A6D_2*, ::Class_2_D550E2FE83D255EF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7FF1316D310A68E___c_TypeDefinitionIndex)->GetStaticField(0x51710);
	}
	static ::System::Func_2<::Class_2_D550E2FE83D255EF*, ::System::Boolean>** StaticGet___9__17_2()
	{
		return (::System::Func_2<::Class_2_D550E2FE83D255EF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7FF1316D310A68E___c_TypeDefinitionIndex)->GetStaticField(0x51718);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __NotifyBuffedCellsMaybeChanged_b__17_0(::Class_1_FD893FD36F6A3A6D_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD893FD36F6A3A6D_2*))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_0_OFFSET))(this, a1);
	}

	::Class_2_D550E2FE83D255EF* __NotifyBuffedCellsMaybeChanged_b__17_1(::Class_1_FD893FD36F6A3A6D_2* a1)
	{
		return ((::Class_2_D550E2FE83D255EF*(*)(::PVOID, ::Class_1_FD893FD36F6A3A6D_2*))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_1_OFFSET))(this, a1);
	}

	::System::Boolean __NotifyBuffedCellsMaybeChanged_b__17_2(::Class_2_D550E2FE83D255EF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D550E2FE83D255EF*))((::PBYTE)hIl2Cpp + CLASS_1_B7FF1316D310A68E___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_2_OFFSET))(this, a1);
	}
};
