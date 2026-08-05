#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_A70C3BF41A60625E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1A8A5070)
#define CLASS_3_A70C3BF41A60625E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1A8A5450)
#define CLASS_3_A70C3BF41A60625E_METHOD_3_B1EBF9ECBA3440F6_OFFSET UNITYSDK_OFFSET(0x1A8A5310)
#define CLASS_3_A70C3BF41A60625E_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x1A8A51F0)
#define CLASS_3_A70C3BF41A60625E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1A8A4F50)
#define CLASS_3_A70C3BF41A60625E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8A50C0)
#define CLASS_3_A70C3BF41A60625E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A5140)

inline static constexpr unsigned int Class_3_A70C3BF41A60625E_TypeDefinitionIndex = 89665;

class Class_3_A70C3BF41A60625E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_8 = 0x5; // 0x0
	// static const ::System::Int32 Field_3_19 = 0x7C; // 0x0
	::UnityEngine::Collider* Field_3_0; // 0x48
	::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Collider*, ::System::UInt32>*>* Field_3_5; // 0x50
	::UnityEngine::Rigidbody* Field_3_7; // 0x58
	::Class_3_C93CC3D2C2AC4067* Field_3_14; // 0x60
	::MoleMole::Battle::Entity* Field_3_15; // 0x68
	::MoleMole::Battle::ColliderEventDispatcher* Field_3_11; // 0x70
	::Il2CppArray<::UnityEngine::Collider*>* Field_3_10; // 0x78
	::System::Int32 Field_3_9; // 0x80
	::UnityEngine::LayerMask Field_3_4; // 0x84
	::UnityEngine::Vector3 Field_3_13; // 0x88
	::System::Boolean Field_3_6; // 0x94
	::System::Boolean Field_3_12; // 0x95

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A70C3BF41A60625E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70C3BF41A60625E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70C3BF41A60625E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70C3BF41A60625E_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_A70C3BF41A60625E* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_A70C3BF41A60625E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A70C3BF41A60625E_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Void Method_3_B1EBF9ECBA3440F6(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A70C3BF41A60625E_METHOD_3_B1EBF9ECBA3440F6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70C3BF41A60625E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
