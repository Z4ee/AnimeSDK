#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CAC0F23A7272040;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_GET_ISINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x19045AF0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_GET_SHOULDCONTINUE_OFFSET UNITYSDK_OFFSET(0x19045AE0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_ISBINDTOTHISENTITY_OFFSET UNITYSDK_OFFSET(0x19046520)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_METHOD_1_0F2103CCBD8370FF_OFFSET UNITYSDK_OFFSET(0x190461A0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_METHOD_1_D0F89197FA241298_OFFSET UNITYSDK_OFFSET(0x19045DD0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_UPDATEINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x19045B00)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_UPDATETARGETENTITYID_OFFSET UNITYSDK_OFFSET(0x19046580)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29__CTOR_OFFSET UNITYSDK_OFFSET(0x190465D0)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_258_Class_1_A563316592F5FB29_TypeDefinitionIndex = 42206;

class Class_1_534AF681CC2BD5FD_258_Class_1_A563316592F5FB29 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_3; // 0x0
	::System::String* Field_1_8; // 0x10
	::System::WeakReference_1<::Class_1_1CAC0F23A7272040*>* Field_1_6; // 0x18
	::System::Single Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::System::Boolean Field_1_1; // 0x28
	::System::Boolean Field_1_0; // 0x29
	::System::Boolean Field_1_5; // 0x2A
	::System::Int32 Field_1_7; // 0x2C

	::System::Void _ctor(::Class_1_1CAC0F23A7272040* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CAC0F23A7272040*, ::System::String*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_ShouldContinue()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_GET_SHOULDCONTINUE_OFFSET))(this);
	}

	::System::Boolean get_IsInCameraView()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_GET_ISINCAMERAVIEW_OFFSET))(this);
	}

	::System::Void UpdateInCameraView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_UPDATEINCAMERAVIEW_OFFSET))(this);
	}

	::System::Boolean IsBindToThisEntity(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_ISBINDTOTHISENTITY_OFFSET))(this, a1);
	}

	::System::Void UpdateTargetEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_UPDATETARGETENTITYID_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0F2103CCBD8370FF(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_METHOD_1_0F2103CCBD8370FF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D0F89197FA241298()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_A563316592F5FB29_METHOD_1_D0F89197FA241298_OFFSET))(this);
	}
};
