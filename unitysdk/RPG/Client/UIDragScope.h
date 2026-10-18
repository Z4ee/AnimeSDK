#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7AAFF9DFD3D41721.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_DCF8BD91C05E4BD7;
class Class_1_FB142AD4B9B30D0F;
namespace RPG::Client { class UIDragEventReceiver; }
namespace RPG::Client { class UIDragGhost; }
namespace RPG::Client { class UIDragSource; }
namespace RPG::Client { class UIDropTarget; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGBEGAN_OFFSET UNITYSDK_OFFSET(0xE38CBE0)
#define RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xE38CC40)
#define RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGMOVED_OFFSET UNITYSDK_OFFSET(0xE38EC90)
#define RPG_CLIENT_UIDRAGSCOPE_AWAKE_OFFSET UNITYSDK_OFFSET(0xE38F5C0)
#define RPG_CLIENT_UIDRAGSCOPE_BEGINDRAGFROMPOINTER_OFFSET UNITYSDK_OFFSET(0xE38F610)
#define RPG_CLIENT_UIDRAGSCOPE_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0xE38C300)
#define RPG_CLIENT_UIDRAGSCOPE_CANCEL_OFFSET UNITYSDK_OFFSET(0xE38C900)
#define RPG_CLIENT_UIDRAGSCOPE_DROP_OFFSET UNITYSDK_OFFSET(0xE38C750)
#define RPG_CLIENT_UIDRAGSCOPE_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xE38BCE0)
#define RPG_CLIENT_UIDRAGSCOPE_METHOD_5_111A5A0BB320DE6D_OFFSET UNITYSDK_OFFSET(0xE38F7E0)
#define RPG_CLIENT_UIDRAGSCOPE_METHOD_5_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xE38FA80)
#define RPG_CLIENT_UIDRAGSCOPE_METHOD_5_B65F40BD0782C031_OFFSET UNITYSDK_OFFSET(0xE38F920)
#define RPG_CLIENT_UIDRAGSCOPE_MOVE_OFFSET UNITYSDK_OFFSET(0xE38C6B0)
#define RPG_CLIENT_UIDRAGSCOPE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE38FBF0)
#define RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGBEGAN_OFFSET UNITYSDK_OFFSET(0xE38CEA0)
#define RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xE38CF00)
#define RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGMOVED_OFFSET UNITYSDK_OFFSET(0xE38EE50)
#define RPG_CLIENT_UIDRAGSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0xE38FD00)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragScope_TypeDefinitionIndex = 73063;

	class UIDragScope : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIDragGhost* _Ghost; // 0x18
		::System::Action* DragBegan; // 0x20
		::System::Action_1<::Struct_2_7AAFF9DFD3D41721>* DragMoved; // 0x28
		::System::Action* DragEnded; // 0x30
		::Class_1_FB142AD4B9B30D0F* INNPHMMNOAN; // 0x38
		::RPG::Client::UIDragEventReceiver* LFCELIPJIOA; // 0x40
		::Class_1_DCF8BD91C05E4BD7* FPAHLFBBNMK; // 0x48
		::RPG::Client::UIDropTarget* EIKEPMFMHEH; // 0x50
		::System::Boolean EAEBGAALOJM; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE__CTOR_OFFSET))(this);
		}

		::System::Void add_DragBegan(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGBEGAN_OFFSET))(this, a1);
		}

		::System::Void remove_DragBegan(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGBEGAN_OFFSET))(this, a1);
		}

		::System::Void add_DragMoved(::System::Action_1<::Struct_2_7AAFF9DFD3D41721>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_7AAFF9DFD3D41721>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_DragMoved(::System::Action_1<::Struct_2_7AAFF9DFD3D41721>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_7AAFF9DFD3D41721>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGMOVED_OFFSET))(this, a1);
		}

		::System::Void add_DragEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_ADD_DRAGENDED_OFFSET))(this, a1);
		}

		::System::Void remove_DragEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_REMOVE_DRAGENDED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_GET_ISDRAGGING_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_AWAKE_OFFSET))(this);
		}

		::System::Void BeginDragFromPointer(::RPG::Client::UIDragSource* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_BEGINDRAGFROMPOINTER_OFFSET))(this, a1, a2);
		}

		::System::Void BeginDrag(::RPG::Client::UIDragSource* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_BEGINDRAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Move(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_MOVE_OFFSET))(this, a1, a2);
		}

		::System::Void Drop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_DROP_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_CANCEL_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_111A5A0BB320DE6D(::RPG::Client::UIDragSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_METHOD_5_111A5A0BB320DE6D_OFFSET))(this, a1);
		}

		::System::Void Method_5_B65F40BD0782C031(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_METHOD_5_B65F40BD0782C031_OFFSET))(this, a1);
		}

		::System::Void Method_5_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSCOPE_METHOD_5_85377D41FEE05B66_OFFSET))(this);
		}
	};
}
