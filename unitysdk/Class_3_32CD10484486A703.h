#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_326;
class Class_1_1468D3C154CECFF4;
class Class_1_E319123DCDD91C39;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_3_32CD10484486A703_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1711DE10)
#define CLASS_3_32CD10484486A703_METHOD_3_25A1687CB1F38A04_OFFSET UNITYSDK_OFFSET(0x1711E540)
#define CLASS_3_32CD10484486A703_METHOD_3_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0x1711E3B0)
#define CLASS_3_32CD10484486A703_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1711E140)
#define CLASS_3_32CD10484486A703_METHOD_3_BC34D12C14FA32D8_OFFSET UNITYSDK_OFFSET(0x1711E750)
#define CLASS_3_32CD10484486A703_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1711E7F0)
#define CLASS_3_32CD10484486A703_METHOD_3_D15F559DB08F052B_OFFSET UNITYSDK_OFFSET(0x1711E070)
#define CLASS_3_32CD10484486A703_METHOD_3_D1CD4C9477D4FE27_OFFSET UNITYSDK_OFFSET(0x1711E1D0)
#define CLASS_3_32CD10484486A703_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1711DC50)
#define CLASS_3_32CD10484486A703__CCTOR_OFFSET UNITYSDK_OFFSET(0x1711DE60)
#define CLASS_3_32CD10484486A703__CTOR_OFFSET UNITYSDK_OFFSET(0x1711DEE0)

inline static constexpr unsigned int Class_3_32CD10484486A703_TypeDefinitionIndex = 89170;

class Class_3_32CD10484486A703 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0x6F; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_326*>* Field_3_5; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_3_1; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1468D3C154CECFF4*>* Field_3_4; // 0x58
	::UnityEngine::AI::NavMeshPath* Field_3_0; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_3_2; // 0x68
	::Il2CppArray<::UnityEngine::Vector3>* Field_3_7; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E319123DCDD91C39*>* Field_3_3; // 0x78
	::System::Boolean Field_3_6; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_32CD10484486A703__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32CD10484486A703__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32CD10484486A703_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32CD10484486A703_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_D15F559DB08F052B(::Class_0_16E4307DCC419505_326* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_326*))((::PBYTE)hIl2Cpp + CLASS_3_32CD10484486A703_METHOD_3_D15F559DB08F052B_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32CD10484486A703_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_D1CD4C9477D4FE27(::System::String* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_32CD10484486A703_METHOD_3_D1CD4C9477D4FE27_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_369F47CCB61A607A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_32CD10484486A703_METHOD_3_369F47CCB61A607A_OFFSET))(this, a1);
	}

	::System::Void Method_3_25A1687CB1F38A04(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_32CD10484486A703_METHOD_3_25A1687CB1F38A04_OFFSET))(this, a1);
	}

	::System::Void Method_3_BC34D12C14FA32D8(::Class_0_16E4307DCC419505_326* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_326*))((::PBYTE)hIl2Cpp + CLASS_3_32CD10484486A703_METHOD_3_BC34D12C14FA32D8_OFFSET))(this, a1);
	}

	static ::Class_3_32CD10484486A703* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_32CD10484486A703*(*)())((::PBYTE)hIl2Cpp + CLASS_3_32CD10484486A703_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
