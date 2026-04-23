#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5C16A1F7496735F4;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CloseupShotData; }
namespace RPG::Client { class PlayableBindingControl; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_47AACC0D1B9F3610_METHOD_1_0B6621F52739EDE5_OFFSET UNITYSDK_OFFSET(0x95BFF70)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x95C3040)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_16F329E8131CBCB7_OFFSET UNITYSDK_OFFSET(0x95C1EC0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x95C11A0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x95BEA40)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_1E60D3ABD30B7685_OFFSET UNITYSDK_OFFSET(0x95C2590)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x95C12F0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_3A37670C2827DA9B_OFFSET UNITYSDK_OFFSET(0x95C28B0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_43C44485B10C4EF3_OFFSET UNITYSDK_OFFSET(0x95C2860)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x95C1210)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x95C24B0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x95C20A0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0x95BEAA0)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_9B1532AAD2928C7B_OFFSET UNITYSDK_OFFSET(0x95C2A50)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_9E9CC6617AFDF44B_OFFSET UNITYSDK_OFFSET(0x95C2F80)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x95C3030)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x95C3020)
#define CLASS_1_47AACC0D1B9F3610_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x95C3060)
#define CLASS_1_47AACC0D1B9F3610__CTOR_OFFSET UNITYSDK_OFFSET(0x95BE930)

inline static constexpr unsigned int Class_1_47AACC0D1B9F3610_TypeDefinitionIndex = 64157;

class Class_1_47AACC0D1B9F3610 : public ::System::Object
{
public:
	::Cinemachine::CinemachineVirtualCameraBase* Field_1_6; // 0x10
	::RPG::Client::CloseupShotData* Field_1_1; // 0x18
	::RPG::Client::CameraDataAndFlags* Field_1_15; // 0x20
	::UnityEngine::Transform* Field_1_7; // 0x28
	::UnityEngine::Playables::PlayableDirector* Field_1_4; // 0x30
	::UnityEngine::Object* Field_1_3; // 0x38
	::Class_1_5C16A1F7496735F4* Field_1_12; // 0x40
	::UnityEngine::GameObject* Field_1_2; // 0x48
	::RPG::Client::PlayableBindingControl* Field_1_16; // 0x50
	::System::Nullable_1<::UnityEngine::Quaternion> Field_1_9; // 0x58
	::System::Nullable_1<::System::Double> Field_1_5; // 0x70
	::System::Int32 Field_1_17; // 0x80
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_8; // 0x84
	::System::Boolean Field_1_14; // 0x94
	::System::Boolean Field_1_13; // 0x95
	::System::Int32 Field_1_0; // 0x98
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_10; // 0x9C
	::System::Nullable_1<::System::Single> Field_1_11; // 0xAC

	::System::Void _ctor(::RPG::Client::CloseupShotData* a1, ::RPG::Client::CameraDataAndFlags* a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::System::Nullable_1<::UnityEngine::Quaternion> a4, ::System::Nullable_1<::UnityEngine::Vector3> a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CloseupShotData*, ::RPG::Client::CameraDataAndFlags*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_8B4B3FEAD1B0C4A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET))(this);
	}

	::System::Void Method_1_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Boolean Method_1_0B6621F52739EDE5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_0B6621F52739EDE5_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_43C44485B10C4EF3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_43C44485B10C4EF3_OFFSET))(this, a1);
	}

	::System::Void Method_1_3A37670C2827DA9B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_3A37670C2827DA9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B1532AAD2928C7B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_9B1532AAD2928C7B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_16F329E8131CBCB7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_16F329E8131CBCB7_OFFSET))(this);
	}

	::System::Nullable_1<::System::Double> Method_1_9E9CC6617AFDF44B()
	{
		return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_9E9CC6617AFDF44B_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_1E60D3ABD30B7685(::RPG::GameCore::TargetEvaluator* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_1E60D3ABD30B7685_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47AACC0D1B9F3610_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
