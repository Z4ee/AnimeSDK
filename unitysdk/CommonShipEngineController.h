#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CommonShipEngineController_Struct_2_6F908A01393DE9DB.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AirshipEngineBehaviorMode;
namespace RPG::Client { class AirshipAudio; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define COMMONSHIPENGINECONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x16B35160)
#define COMMONSHIPENGINECONTROLLER_GET_CURRENTWORKINGSTATE_OFFSET UNITYSDK_OFFSET(0x16B35100)
#define COMMONSHIPENGINECONTROLLER_METHOD_5_481F397A7A0618DD_OFFSET UNITYSDK_OFFSET(0x16B35370)
#define COMMONSHIPENGINECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16B35490)
#define COMMONSHIPENGINECONTROLLER_SETCURRENTWORKINGSTATE_OFFSET UNITYSDK_OFFSET(0x16B34E00)
#define COMMONSHIPENGINECONTROLLER_SET_CURRENTWORKINGSTATE_OFFSET UNITYSDK_OFFSET(0x16B35110)
#define COMMONSHIPENGINECONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x16B35600)
#define COMMONSHIPENGINECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16B355B0)
#define COMMONSHIPENGINECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B35DB0)
#define COMMONSHIPENGINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16B35D70)

inline static constexpr unsigned int CommonShipEngineController_TypeDefinitionIndex = 45307;

class CommonShipEngineController : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_Field_5_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CommonShipEngineController_TypeDefinitionIndex)->GetStaticField(0x10190);
	}
	::UnityEngine::Renderer* MREngine; // 0x18
	::System::Collections::Generic::List_1<::AirshipEngineBehaviorMode*>* EngineBehaviorModes; // 0x20
	::RPG::Client::AirshipAudio* Field_5_3; // 0x28
	::UnityEngine::Transform* Field_5_4; // 0x30
	::UnityEngine::Renderer* Field_5_5; // 0x38
	::EAirshipWorkingState Field_5_6; // 0x40
	::System::Single Field_5_7; // 0x44
	::CommonShipEngineController_Struct_2_6F908A01393DE9DB Field_5_8; // 0x48
	::UnityEngine::MaterialPropertyBlock* Field_5_9; // 0xA0
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_10; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER__CCTOR_OFFSET))();
	}

	::System::Void SetCurrentWorkingState(::EAirshipWorkingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::EAirshipWorkingState))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_SETCURRENTWORKINGSTATE_OFFSET))(this, a1);
	}

	::EAirshipWorkingState get_CurrentWorkingState()
	{
		return ((::EAirshipWorkingState(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_GET_CURRENTWORKINGSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentWorkingState(::EAirshipWorkingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::EAirshipWorkingState))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_SET_CURRENTWORKINGSTATE_OFFSET))(this, a1);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_AWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_ONDESTROY_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_TICK_OFFSET))(this, a1);
	}

	::AirshipEngineBehaviorMode* Method_5_481F397A7A0618DD(::EAirshipWorkingState a1)
	{
		return ((::AirshipEngineBehaviorMode*(*)(::PVOID, ::EAirshipWorkingState))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_METHOD_5_481F397A7A0618DD_OFFSET))(this, a1);
	}
};
