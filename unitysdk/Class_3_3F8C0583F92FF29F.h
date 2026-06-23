#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }

#define CLASS_3_3F8C0583F92FF29F_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x120A63B0)
#define CLASS_3_3F8C0583F92FF29F_METHOD_3_886946290516FF70_OFFSET UNITYSDK_OFFSET(0x120A6490)
#define CLASS_3_3F8C0583F92FF29F_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x120A65A0)
#define CLASS_3_3F8C0583F92FF29F_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x120A6630)
#define CLASS_3_3F8C0583F92FF29F_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x120A6280)
#define CLASS_3_3F8C0583F92FF29F__CCTOR_OFFSET UNITYSDK_OFFSET(0x120A6400)
#define CLASS_3_3F8C0583F92FF29F__CTOR_OFFSET UNITYSDK_OFFSET(0x120A6480)

inline static constexpr unsigned int Class_3_3F8C0583F92FF29F_TypeDefinitionIndex = 63927;

class Class_3_3F8C0583F92FF29F : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0x33; // 0x0
	::UnityEngine::CapsuleCollider* Field_3_5; // 0x48
	::System::Action_3<::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean>* Field_3_10; // 0x50
	::System::Action* Field_3_9; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_6; // 0x60
	::System::String* Field_3_8; // 0x68
	::System::UInt32 Field_3_0; // 0x70
	::UnityEngine::Vector3 Field_3_4; // 0x74
	::System::Single Field_3_3; // 0x80
	::System::Single Field_3_2; // 0x84
	::System::Boolean Field_3_7; // 0x88
	::System::Single Field_3_1; // 0x8C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3F8C0583F92FF29F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F8C0583F92FF29F__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F8C0583F92FF29F_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F8C0583F92FF29F_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_886946290516FF70(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6, ::System::String* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3F8C0583F92FF29F_METHOD_3_886946290516FF70_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F8C0583F92FF29F_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_3F8C0583F92FF29F* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_3F8C0583F92FF29F*(*)())((::PBYTE)hIl2Cpp + CLASS_3_3F8C0583F92FF29F_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
