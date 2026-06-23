#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_6A6ED67B92DC299D_Config;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_6A6ED67B92DC299D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1175BA20)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_269C470BC922822D_1_OFFSET UNITYSDK_OFFSET(0x1175C0B0)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_269C470BC922822D_OFFSET UNITYSDK_OFFSET(0x1175C060)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_627734491883CD35_OFFSET UNITYSDK_OFFSET(0x1175BB00)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_8303B7840D4ED892_OFFSET UNITYSDK_OFFSET(0x1175BDF0)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1175C180)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1175C100)
#define CLASS_3_6A6ED67B92DC299D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1175B9E0)
#define CLASS_3_6A6ED67B92DC299D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1175BA70)
#define CLASS_3_6A6ED67B92DC299D__CTOR_OFFSET UNITYSDK_OFFSET(0x1175BAF0)

inline static constexpr unsigned int Class_3_6A6ED67B92DC299D_TypeDefinitionIndex = 83511;

class Class_3_6A6ED67B92DC299D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0x63; // 0x0
	::Class_3_6A6ED67B92DC299D_Config* Field_3_0; // 0x48
	::UnityEngine::Collider* Field_3_2; // 0x50
	::UnityEngine::Rigidbody* Field_3_1; // 0x58
	::UnityEngine::Vector3 Field_3_3; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_627734491883CD35()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_627734491883CD35_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_3_8303B7840D4ED892()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_8303B7840D4ED892_OFFSET))(this);
	}

	::System::Void Method_3_269C470BC922822D(::Class_3_6A6ED67B92DC299D_Config* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6A6ED67B92DC299D_Config*))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_269C470BC922822D_OFFSET))(this, a1);
	}

	::System::Void Method_3_269C470BC922822D_1(::Class_3_6A6ED67B92DC299D_Config* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6A6ED67B92DC299D_Config*))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_269C470BC922822D_1_OFFSET))(this, a1);
	}

	static ::Class_3_6A6ED67B92DC299D* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_6A6ED67B92DC299D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
