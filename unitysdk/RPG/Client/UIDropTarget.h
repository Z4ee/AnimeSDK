#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define RPG_CLIENT_UIDROPTARGET_ADD_DRAGENTERED_OFFSET UNITYSDK_OFFSET(0xE39ED10)
#define RPG_CLIENT_UIDROPTARGET_ADD_DRAGEXITED_OFFSET UNITYSDK_OFFSET(0xE39EDD0)
#define RPG_CLIENT_UIDROPTARGET_ADD_DROPPED_OFFSET UNITYSDK_OFFSET(0xE39EE90)
#define RPG_CLIENT_UIDROPTARGET_GET_CANACCEPT_OFFSET UNITYSDK_OFFSET(0xE39ECF0)
#define RPG_CLIENT_UIDROPTARGET_METHOD_5_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xE39EFB0)
#define RPG_CLIENT_UIDROPTARGET_METHOD_5_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xE39F010)
#define RPG_CLIENT_UIDROPTARGET_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE39EF50)
#define RPG_CLIENT_UIDROPTARGET_REMOVE_DRAGENTERED_OFFSET UNITYSDK_OFFSET(0xE39ED70)
#define RPG_CLIENT_UIDROPTARGET_REMOVE_DRAGEXITED_OFFSET UNITYSDK_OFFSET(0xE39EE30)
#define RPG_CLIENT_UIDROPTARGET_REMOVE_DROPPED_OFFSET UNITYSDK_OFFSET(0xE39EEF0)
#define RPG_CLIENT_UIDROPTARGET_SET_CANACCEPT_OFFSET UNITYSDK_OFFSET(0xE39ED00)
#define RPG_CLIENT_UIDROPTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xE39F070)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDropTarget_TypeDefinitionIndex = 73066;

	class UIDropTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _CanAccept_k__BackingField; // 0x18
		::System::Action* DragEntered; // 0x20
		::System::Action* DragExited; // 0x28
		::System::Action* Dropped; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanAccept()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_GET_CANACCEPT_OFFSET))(this);
		}

		::System::Void set_CanAccept(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_SET_CANACCEPT_OFFSET))(this, a1);
		}

		::System::Void add_DragEntered(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_ADD_DRAGENTERED_OFFSET))(this, a1);
		}

		::System::Void remove_DragEntered(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_REMOVE_DRAGENTERED_OFFSET))(this, a1);
		}

		::System::Void add_DragExited(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_ADD_DRAGEXITED_OFFSET))(this, a1);
		}

		::System::Void remove_DragExited(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_REMOVE_DRAGEXITED_OFFSET))(this, a1);
		}

		::System::Void add_Dropped(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_ADD_DROPPED_OFFSET))(this, a1);
		}

		::System::Void remove_Dropped(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_REMOVE_DROPPED_OFFSET))(this, a1);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_METHOD_5_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_METHOD_5_4343F372F34C05BF_2_OFFSET))(this);
		}
	};
}
