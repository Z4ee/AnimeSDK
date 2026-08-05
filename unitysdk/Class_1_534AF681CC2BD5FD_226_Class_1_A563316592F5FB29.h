#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D7E535A5B5558900;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_GET_ISINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x13AF5B50)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_GET_SHOULDCONTINUE_OFFSET UNITYSDK_OFFSET(0x13AF5B40)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_ISBINDTOTHISENTITY_OFFSET UNITYSDK_OFFSET(0x13AF6580)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_METHOD_1_BF83626A2DE6215E_OFFSET UNITYSDK_OFFSET(0x13AF6200)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_METHOD_1_FFAAA55EA670DA1F_OFFSET UNITYSDK_OFFSET(0x13AF5E30)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_UPDATEINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x13AF5B60)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_UPDATETARGETENTITYID_OFFSET UNITYSDK_OFFSET(0x13AF65E0)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29__CTOR_OFFSET UNITYSDK_OFFSET(0x13AF6630)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_226_Class_1_A563316592F5FB29_TypeDefinitionIndex = 54285;

class Class_1_534AF681CC2BD5FD_226_Class_1_A563316592F5FB29 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_5; // 0x0
	::System::WeakReference_1<::Class_1_D7E535A5B5558900*>* Field_1_10; // 0x10
	::System::String* Field_1_8; // 0x18
	::System::Int32 Field_1_9; // 0x20
	::System::Boolean Field_1_0; // 0x24
	::System::Boolean Field_1_11; // 0x25
	::System::Boolean Field_1_7; // 0x26
	::System::Single Field_1_4; // 0x28
	::System::UInt32 Field_1_6; // 0x2C

	::System::Void _ctor(::Class_1_D7E535A5B5558900* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7E535A5B5558900*, ::System::String*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_ShouldContinue()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_GET_SHOULDCONTINUE_OFFSET))(this);
	}

	::System::Boolean get_IsInCameraView()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_GET_ISINCAMERAVIEW_OFFSET))(this);
	}

	::System::Void UpdateInCameraView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_UPDATEINCAMERAVIEW_OFFSET))(this);
	}

	::System::Boolean IsBindToThisEntity(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_ISBINDTOTHISENTITY_OFFSET))(this, a1);
	}

	::System::Void UpdateTargetEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_UPDATETARGETENTITYID_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BF83626A2DE6215E(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_METHOD_1_BF83626A2DE6215E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FFAAA55EA670DA1F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_A563316592F5FB29_METHOD_1_FFAAA55EA670DA1F_OFFSET))(this);
	}
};
