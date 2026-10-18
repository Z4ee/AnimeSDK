#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIDRAGSOURCE_ADD_DRAGBEGAN_OFFSET UNITYSDK_OFFSET(0xE39AA00)
#define RPG_CLIENT_UIDRAGSOURCE_ADD_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xE39AAC0)
#define RPG_CLIENT_UIDRAGSOURCE_GET_CANDRAG_OFFSET UNITYSDK_OFFSET(0xE39A9E0)
#define RPG_CLIENT_UIDRAGSOURCE_METHOD_5_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xE39A8F0)
#define RPG_CLIENT_UIDRAGSOURCE_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE39A890)
#define RPG_CLIENT_UIDRAGSOURCE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xE39AB80)
#define RPG_CLIENT_UIDRAGSOURCE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xE39AC80)
#define RPG_CLIENT_UIDRAGSOURCE_REMOVE_DRAGBEGAN_OFFSET UNITYSDK_OFFSET(0xE39AA60)
#define RPG_CLIENT_UIDRAGSOURCE_REMOVE_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xE39AB20)
#define RPG_CLIENT_UIDRAGSOURCE_SET_CANDRAG_OFFSET UNITYSDK_OFFSET(0xE39A9F0)
#define RPG_CLIENT_UIDRAGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0xE39ACD0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragSource_TypeDefinitionIndex = 73065;

	class UIDragSource : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _CanDrag_k__BackingField; // 0x18
		::System::Action* DragBegan; // 0x20
		::System::Action* DragEnded; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_GET_CANDRAG_OFFSET))(this);
		}

		::System::Void set_CanDrag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_SET_CANDRAG_OFFSET))(this, a1);
		}

		::System::Void add_DragBegan(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_ADD_DRAGBEGAN_OFFSET))(this, a1);
		}

		::System::Void remove_DragBegan(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_REMOVE_DRAGBEGAN_OFFSET))(this, a1);
		}

		::System::Void add_DragEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_ADD_DRAGENDED_OFFSET))(this, a1);
		}

		::System::Void remove_DragEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_REMOVE_DRAGENDED_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_METHOD_5_4343F372F34C05BF_1_OFFSET))(this);
		}
	};
}
