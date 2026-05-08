#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_A70C3BF41A60625E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF0C8400)
#define CLASS_3_A70C3BF41A60625E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xF0C8580)
#define CLASS_3_A70C3BF41A60625E_METHOD_3_B1EBF9ECBA3440F6_OFFSET UNITYSDK_OFFSET(0xF0C8610)
#define CLASS_3_A70C3BF41A60625E_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0xF0C8750)
#define CLASS_3_A70C3BF41A60625E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF0C82D0)
#define CLASS_3_A70C3BF41A60625E__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0C8450)
#define CLASS_3_A70C3BF41A60625E__CTOR_OFFSET UNITYSDK_OFFSET(0xF0C84D0)

inline static constexpr unsigned int Class_3_A70C3BF41A60625E_TypeDefinitionIndex = 47546;

class Class_3_A70C3BF41A60625E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_8 = 0x5; // 0x0
	// static const ::System::Int32 Field_3_13 = 0x78; // 0x0
	::MoleMole::Battle::ColliderEventDispatcher* Field_3_5; // 0x48
	::UnityEngine::Collider* Field_3_0; // 0x50
	::Class_3_DFD5D1FDB9D2A4AC* Field_3_10; // 0x58
	::UnityEngine::Rigidbody* Field_3_1; // 0x60
	::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Collider*, ::System::UInt32>*>* Field_3_3; // 0x68
	::Il2CppArray<::UnityEngine::Collider*>* Field_3_6; // 0x70
	::MoleMole::Battle::Entity* Field_3_9; // 0x78
	::UnityEngine::Vector3 Field_3_11; // 0x80
	::UnityEngine::LayerMask Field_3_4; // 0x8C
	::System::Boolean Field_3_2; // 0x90
	::System::Boolean Field_3_12; // 0x91
	::System::Int32 Field_3_7; // 0x94

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

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70C3BF41A60625E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_B1EBF9ECBA3440F6(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A70C3BF41A60625E_METHOD_3_B1EBF9ECBA3440F6_OFFSET))(this, a1, a2);
	}

	static ::Class_3_A70C3BF41A60625E* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_A70C3BF41A60625E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A70C3BF41A60625E_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}
};
