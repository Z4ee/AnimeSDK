#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VirtualCursorStatus.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class IVirtualCursor; }
namespace RPG::Client { class UIDragScope; }
namespace RPG::Client { class UIDragSource; }
namespace RPG::Client { class VirtualCursor; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIDRAGCURSORDRIVER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE397610)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_CANCEL_OFFSET UNITYSDK_OFFSET(0xE3974B0)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_DROP_OFFSET UNITYSDK_OFFSET(0xE397100)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xE3968B0)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_METHOD_5_1079F6CD72370E91_OFFSET UNITYSDK_OFFSET(0xE396C70)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xE397DC0)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_METHOD_5_D1210E516B515FAD_OFFSET UNITYSDK_OFFSET(0xE396C10)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_METHOD_5_F21AEFAB1185096C_OFFSET UNITYSDK_OFFSET(0xE397050)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_METHOD_5_FF0BED909298199C_OFFSET UNITYSDK_OFFSET(0xE397E60)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE3978F0)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE397690)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_PICK_OFFSET UNITYSDK_OFFSET(0xE396980)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE397BB0)
#define RPG_CLIENT_UIDRAGCURSORDRIVER__CTOR_OFFSET UNITYSDK_OFFSET(0xE397EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragCursorDriver_TypeDefinitionIndex = 73056;

	class UIDragCursorDriver : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single GCJNNILPJMB; // 0x0
		::RPG::Client::VirtualCursor* _CursorOverride; // 0x18
		::System::Boolean _DriveCursorStatus; // 0x20
		::RPG::Client::UIDragScope* OAMCDOCACHG; // 0x28
		::UnityEngine::EventSystems::PointerEventData* BFDGBAJEJMC; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* IONPJOBMNIA; // 0x38
		::UnityEngine::Vector2 OFEBPEIHNHN; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_GET_ISDRAGGING_OFFSET))(this);
		}

		::System::Void Pick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_PICK_OFFSET))(this);
		}

		::System::Void Drop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_DROP_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_CANCEL_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_5_FF0BED909298199C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_METHOD_5_FF0BED909298199C_OFFSET))(this);
		}

		::RPG::Client::UIDragSource* Method_5_1079F6CD72370E91(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::Client::UIDragSource*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_METHOD_5_1079F6CD72370E91_OFFSET))(this, a1);
		}

		::RPG::Client::IVirtualCursor* Method_5_D1210E516B515FAD()
		{
			return ((::RPG::Client::IVirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_METHOD_5_D1210E516B515FAD_OFFSET))(this);
		}

		::System::Void Method_5_F21AEFAB1185096C(::RPG::Client::VirtualCursorStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursorStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_METHOD_5_F21AEFAB1185096C_OFFSET))(this, a1);
		}
	};
}
