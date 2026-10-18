#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_3CFD07DFD0180CDE;
class Class_1_FD893FD36F6A3A6D_2;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_D51370543413EDD9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A34B50)
#define CLASS_1_D51370543413EDD9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A34B90)
#define CLASS_1_D51370543413EDD9___C___NOTIFYBUFFAFFECTEDCELLSMAYBECHANGED_B__27_0_OFFSET UNITYSDK_OFFSET(0x15A34C00)
#define CLASS_1_D51370543413EDD9___C___NOTIFYBUFFAFFECTEDLINESMAYBECHANGED_B__15_0_OFFSET UNITYSDK_OFFSET(0x15A34BD0)
#define CLASS_1_D51370543413EDD9___C___NOTIFYBUFFAFFECTINGCELLSMAYBECHANGED_B__14_0_OFFSET UNITYSDK_OFFSET(0x15A34BA0)
#define CLASS_1_D51370543413EDD9___C___TRYFORCEHINTBUFFAFFECTED_B__28_0_OFFSET UNITYSDK_OFFSET(0x15A34C30)

inline static constexpr unsigned int Class_1_D51370543413EDD9___c_TypeDefinitionIndex = 79452;

class Class_1_D51370543413EDD9___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_FD893FD36F6A3A6D_2*, ::System::Boolean>** StaticGet___9__28_0()
	{
		return (::System::Func_2<::Class_1_FD893FD36F6A3A6D_2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D51370543413EDD9___c_TypeDefinitionIndex)->GetStaticField(0x656D0);
	}
	static ::System::Func_2<::Class_1_3CFD07DFD0180CDE*, ::System::Collections::Generic::IEnumerable_1<::Struct_2_5A70B04B36C288E4>*>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::Class_1_3CFD07DFD0180CDE*, ::System::Collections::Generic::IEnumerable_1<::Struct_2_5A70B04B36C288E4>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D51370543413EDD9___c_TypeDefinitionIndex)->GetStaticField(0x656D8);
	}
	static ::System::Func_2<::Class_1_3CFD07DFD0180CDE*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::Class_1_3CFD07DFD0180CDE*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D51370543413EDD9___c_TypeDefinitionIndex)->GetStaticField(0x656E0);
	}
	static ::System::Func_2<::Class_1_3CFD07DFD0180CDE*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::Class_1_3CFD07DFD0180CDE*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D51370543413EDD9___c_TypeDefinitionIndex)->GetStaticField(0x656E8);
	}
	static ::Class_1_D51370543413EDD9___c** StaticGet___9()
	{
		return (::Class_1_D51370543413EDD9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D51370543413EDD9___c_TypeDefinitionIndex)->GetStaticField(0x656F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* __NotifyBuffAffectingCellsMaybeChanged_b__14_0(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9___C___NOTIFYBUFFAFFECTINGCELLSMAYBECHANGED_B__14_0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_5A70B04B36C288E4>* __NotifyBuffAffectedLinesMaybeChanged_b__15_0(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_5A70B04B36C288E4>*(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9___C___NOTIFYBUFFAFFECTEDLINESMAYBECHANGED_B__15_0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* __NotifyBuffAffectedCellsMaybeChanged_b__27_0(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9___C___NOTIFYBUFFAFFECTEDCELLSMAYBECHANGED_B__27_0_OFFSET))(this, a1);
	}

	::System::Boolean __TryForceHintBuffAffected_b__28_0(::Class_1_FD893FD36F6A3A6D_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD893FD36F6A3A6D_2*))((::PBYTE)hIl2Cpp + CLASS_1_D51370543413EDD9___C___TRYFORCEHINTBUFFAFFECTED_B__28_0_OFFSET))(this, a1);
	}
};
