#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/Struct_2_433253813D49C6BD.h"
#include "unitysdk/Struct_2_B22A8BD8ED65C725.h"
#include "unitysdk/Struct_2_D0FCEBDAF981FB27.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1131;
class Class_0_16E4307DCC419505_1132;
class Class_1_A73E0FAF46E3085E;
class Class_1_D70A30D666F20D90;
class Class_2_9EE43DA5D75B2674;
class Class_2_B3A24056F40872AE;
namespace RPG::Client::OpenWorld { template <typename T1, typename T2> class TriggerShapeController_2; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EA33FC17550B1203_METHOD_2_15317D4E99065267_OFFSET UNITYSDK_OFFSET(0x160855D0)
#define CLASS_2_EA33FC17550B1203_METHOD_2_4A41C63BFE58D26F_1_OFFSET UNITYSDK_OFFSET(0x16086140)
#define CLASS_2_EA33FC17550B1203_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x16085F50)
#define CLASS_2_EA33FC17550B1203_METHOD_2_5B1E204FC3227E4D_OFFSET UNITYSDK_OFFSET(0x160873F0)
#define CLASS_2_EA33FC17550B1203_METHOD_2_66F4B782862FDDE9_OFFSET UNITYSDK_OFFSET(0x16085770)
#define CLASS_2_EA33FC17550B1203_METHOD_2_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0x16086520)
#define CLASS_2_EA33FC17550B1203_METHOD_2_7F4A14CD1C67620C_OFFSET UNITYSDK_OFFSET(0x160858D0)
#define CLASS_2_EA33FC17550B1203_METHOD_2_8F42FCF153B6C892_OFFSET UNITYSDK_OFFSET(0x16087360)
#define CLASS_2_EA33FC17550B1203_METHOD_2_913947B6596EB50A_1_OFFSET UNITYSDK_OFFSET(0x16086340)
#define CLASS_2_EA33FC17550B1203_METHOD_2_913947B6596EB50A_2_OFFSET UNITYSDK_OFFSET(0x16086570)
#define CLASS_2_EA33FC17550B1203_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x16085D80)
#define CLASS_2_EA33FC17550B1203_METHOD_2_A33856869F4A1D9A_OFFSET UNITYSDK_OFFSET(0x16085460)
#define CLASS_2_EA33FC17550B1203_METHOD_2_A9DE0331F43249C8_OFFSET UNITYSDK_OFFSET(0x16086760)
#define CLASS_2_EA33FC17550B1203_METHOD_2_B6A647C739789631_OFFSET UNITYSDK_OFFSET(0x16086A60)
#define CLASS_2_EA33FC17550B1203_METHOD_2_FF35922B674791EC_OFFSET UNITYSDK_OFFSET(0x16085BF0)
#define CLASS_2_EA33FC17550B1203__CCTOR_OFFSET UNITYSDK_OFFSET(0x160874E0)
#define CLASS_2_EA33FC17550B1203__CTOR_OFFSET UNITYSDK_OFFSET(0x16085AB0)

inline static constexpr unsigned int Class_2_EA33FC17550B1203_TypeDefinitionIndex = 70552;

class Class_2_EA33FC17550B1203 : public ::Class_1_7256E7A2FB36A46D
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EA33FC17550B1203_TypeDefinitionIndex)->GetStaticField(0x79E0);
	}
	::RPG::Client::OpenWorld::TriggerShapeController_2<::Struct_2_B22A8BD8ED65C725, ::Class_2_9EE43DA5D75B2674*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_D0FCEBDAF981FB27>*>* Field_2_2; // 0x20
	::RPG::Client::OpenWorld::TriggerShapeController_2<::Struct_2_433253813D49C6BD, ::Class_2_B3A24056F40872AE*>* Field_2_3; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_D0FCEBDAF981FB27>*>* Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1131*>* Field_2_6; // 0x40
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1132*>* Field_2_7; // 0x48

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203__CCTOR_OFFSET))();
	}

	::Class_1_A73E0FAF46E3085E* Method_2_A33856869F4A1D9A(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Single a3, ::System::Action* a4, ::System::Action* a5, ::System::Int32 a6)
	{
		return ((::Class_1_A73E0FAF46E3085E*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_A33856869F4A1D9A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_A73E0FAF46E3085E* Method_2_15317D4E99065267(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Single a3, ::System::Action_1<::System::Int32>* a4, ::System::Action* a5, ::System::Int32 a6)
	{
		return ((::Class_1_A73E0FAF46E3085E*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Action_1<::System::Int32>*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_15317D4E99065267_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_A73E0FAF46E3085E* Method_2_66F4B782862FDDE9(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action* a3, ::System::Action* a4, ::System::Int32 a5)
	{
		return ((::Class_1_A73E0FAF46E3085E*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_66F4B782862FDDE9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_A73E0FAF46E3085E* Method_2_7F4A14CD1C67620C(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action_1<::System::Int32>* a3, ::System::Action* a4, ::System::Int32 a5)
	{
		return ((::Class_1_A73E0FAF46E3085E*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action_1<::System::Int32>*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_7F4A14CD1C67620C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_FF35922B674791EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_FF35922B674791EC_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_2_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void Method_2_4A41C63BFE58D26F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_4A41C63BFE58D26F_1_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_913947B6596EB50A_1_OFFSET))(this);
	}

	::System::Void Method_2_70484F0C4668EBF2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_70484F0C4668EBF2_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_913947B6596EB50A_2_OFFSET))(this);
	}

	::System::Void Method_2_A9DE0331F43249C8(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_A9DE0331F43249C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B6A647C739789631()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_B6A647C739789631_OFFSET))(this);
	}

	::System::Void Method_2_8F42FCF153B6C892(::Class_1_A73E0FAF46E3085E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A73E0FAF46E3085E*))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_8F42FCF153B6C892_OFFSET))(this, a1);
	}

	static ::System::Int64 Method_2_5B1E204FC3227E4D(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int64(*)(::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203_METHOD_2_5B1E204FC3227E4D_OFFSET))(a1, a2, a3);
	}
};
