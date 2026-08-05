#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_6A6ED67B92DC299D_Config;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_6A6ED67B92DC299D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13889CC0)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_269C470BC922822D_1_OFFSET UNITYSDK_OFFSET(0x1388A160)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_269C470BC922822D_OFFSET UNITYSDK_OFFSET(0x13889DA0)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_627734491883CD35_OFFSET UNITYSDK_OFFSET(0x13889DF0)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_8303B7840D4ED892_OFFSET UNITYSDK_OFFSET(0x1388A240)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1388A1B0)
#define CLASS_3_6A6ED67B92DC299D_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1388A0E0)
#define CLASS_3_6A6ED67B92DC299D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13889C80)
#define CLASS_3_6A6ED67B92DC299D__CCTOR_OFFSET UNITYSDK_OFFSET(0x13889D10)
#define CLASS_3_6A6ED67B92DC299D__CTOR_OFFSET UNITYSDK_OFFSET(0x13889D90)

inline static constexpr unsigned int Class_3_6A6ED67B92DC299D_TypeDefinitionIndex = 41216;

class Class_3_6A6ED67B92DC299D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0x64; // 0x0
	::UnityEngine::Collider* Field_3_6; // 0x48
	::Class_3_6A6ED67B92DC299D_Config* Field_3_0; // 0x50
	::UnityEngine::Rigidbody* Field_3_7; // 0x58
	::UnityEngine::Vector3 Field_3_5; // 0x60

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

	::System::Void Method_3_269C470BC922822D(::Class_3_6A6ED67B92DC299D_Config* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6A6ED67B92DC299D_Config*))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_269C470BC922822D_OFFSET))(this, a1);
	}

	::UnityEngine::Rigidbody* Method_3_627734491883CD35()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_627734491883CD35_OFFSET))(this);
	}

	static ::Class_3_6A6ED67B92DC299D* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_6A6ED67B92DC299D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_269C470BC922822D_1(::Class_3_6A6ED67B92DC299D_Config* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6A6ED67B92DC299D_Config*))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_269C470BC922822D_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_3_8303B7840D4ED892()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_METHOD_3_8303B7840D4ED892_OFFSET))(this);
	}
};
