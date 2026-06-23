#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollisions.h"
#include "unitysdk/Struct_2_72A065C071D070A0.h"
#include "unitysdk/Struct_2_A0DCDC0C49E88627.h"
#include "unitysdk/Struct_2_FBA4730A60751401_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_29EA855B0A6114D6;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Vehicle { class VehicleConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3DFAF92DF68271E7_METHOD_1_3749F22FC84E685C_OFFSET UNITYSDK_OFFSET(0x10F56C90)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_377800D6E0E947AD_OFFSET UNITYSDK_OFFSET(0x10F594D0)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_4DFC2544DDC1AB97_OFFSET UNITYSDK_OFFSET(0x10F59830)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x10F5A1B0)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_50D1A03B986D9F28_OFFSET UNITYSDK_OFFSET(0x10F593B0)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x10F59450)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0x10F595C0)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_AB508AA7C4C9D894_OFFSET UNITYSDK_OFFSET(0x10F59AE0)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_B2770934B00F6C26_OFFSET UNITYSDK_OFFSET(0x10F59BA0)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_BFE4ED7EE01A9257_OFFSET UNITYSDK_OFFSET(0x10F59730)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x10F59810)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10F59800)
#define CLASS_1_3DFAF92DF68271E7_METHOD_1_FEC6608D17D30439_OFFSET UNITYSDK_OFFSET(0x10F59620)
#define CLASS_1_3DFAF92DF68271E7__CTOR_OFFSET UNITYSDK_OFFSET(0x10F56960)

inline static constexpr unsigned int Class_1_3DFAF92DF68271E7_TypeDefinitionIndex = 55600;

class Class_1_3DFAF92DF68271E7 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_15; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_13; // 0x18
	::Il2CppArray<::Struct_2_72A065C071D070A0>* Field_1_5; // 0x20
	::Il2CppArray<::Struct_2_72A065C071D070A0>* Field_1_6; // 0x28
	::MoleMole::Vehicle::VehicleConfig* Field_1_2; // 0x30
	::System::Collections::Generic::List_1<::System::Single>* Field_1_14; // 0x38
	::UnityEngine::Vector3 Field_1_8; // 0x40
	::System::Single Field_1_7; // 0x4C
	::System::Single Field_1_11; // 0x50
	::System::Single Field_1_10; // 0x54
	::UnityEngine::Vector3 Field_1_1; // 0x58
	::System::Int32 Field_1_0; // 0x64
	::System::Single Field_1_9; // 0x68
	::System::Int32 Field_1_3; // 0x6C
	::System::Int32 Field_1_4; // 0x70
	::System::Single Field_1_12; // 0x74

	::System::Void _ctor(::MoleMole::Vehicle::VehicleCollisions& a1, ::MoleMole::Vehicle::VehicleConfig* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleCollisions&, ::MoleMole::Vehicle::VehicleConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_A0DCDC0C49E88627 Method_1_3749F22FC84E685C(::Struct_2_FBA4730A60751401_1& a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Single a5, ::Class_1_29EA855B0A6114D6* a6)
	{
		return ((::Struct_2_A0DCDC0C49E88627(*)(::PVOID, ::Struct_2_FBA4730A60751401_1&, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Single, ::Class_1_29EA855B0A6114D6*))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_3749F22FC84E685C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_1_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_570C5557A774C69E_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_50D1A03B986D9F28(::UnityEngine::Matrix4x4& a1, ::Il2CppArray<::Struct_2_72A065C071D070A0>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::Il2CppArray<::Struct_2_72A065C071D070A0>*))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_50D1A03B986D9F28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BFE4ED7EE01A9257(::System::Single& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_BFE4ED7EE01A9257_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::System::Single Method_1_FEC6608D17D30439(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_FEC6608D17D30439_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single> Method_1_377800D6E0E947AD(::UnityEngine::Vector3& a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_377800D6E0E947AD_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	static ::System::Single Method_1_4DFC2544DDC1AB97(::System::Collections::Generic::List_1<::System::Single>* a1)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_4DFC2544DDC1AB97_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_B2770934B00F6C26(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_B2770934B00F6C26_OFFSET))(a1);
	}

	static ::System::Single Method_1_AB508AA7C4C9D894(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_AB508AA7C4C9D894_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_7B5CF29097D2700A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_7B5CF29097D2700A_OFFSET))(a1);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3DFAF92DF68271E7_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}
};
