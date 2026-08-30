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

#define COMMONSHIPENGINECONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A873930)
#define COMMONSHIPENGINECONTROLLER_GET_CURRENTWORKINGSTATE_OFFSET UNITYSDK_OFFSET(0x1A8738D0)
#define COMMONSHIPENGINECONTROLLER_METHOD_5_481F397A7A0618DD_OFFSET UNITYSDK_OFFSET(0x1849BA60)
#define COMMONSHIPENGINECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1849B180)
#define COMMONSHIPENGINECONTROLLER_SETCURRENTWORKINGSTATE_OFFSET UNITYSDK_OFFSET(0x1A873750)
#define COMMONSHIPENGINECONTROLLER_SET_CURRENTWORKINGSTATE_OFFSET UNITYSDK_OFFSET(0x1A8738E0)
#define COMMONSHIPENGINECONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x1849B2F0)
#define COMMONSHIPENGINECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1849B2A0)
#define COMMONSHIPENGINECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1849BBC0)
#define COMMONSHIPENGINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1849BB80)

inline static constexpr unsigned int CommonShipEngineController_TypeDefinitionIndex = 47545;

class CommonShipEngineController : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_BOJJJKBKAIF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CommonShipEngineController_TypeDefinitionIndex)->GetStaticField(0x15310);
	}
	::UnityEngine::Renderer* MREngine; // 0x18
	::System::Collections::Generic::List_1<::AirshipEngineBehaviorMode*>* EngineBehaviorModes; // 0x20
	::RPG::Client::AirshipAudio* MIJBJBKFMID; // 0x28
	::UnityEngine::Transform* CBKAPICKOJB; // 0x30
	::UnityEngine::Renderer* IEMJPOPIEOB; // 0x38
	::EAirshipWorkingState NNPDFBLFCFK; // 0x40
	::System::Single BEEFCPKOBJI; // 0x44
	::CommonShipEngineController_Struct_2_6F908A01393DE9DB FBPHKOPPNII; // 0x48
	::UnityEngine::MaterialPropertyBlock* IDGFNFGGDOL; // 0xA0
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* BDFOEGCBEAE; // 0xA8

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
