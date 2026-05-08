#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x11339AC0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x113399C0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x113398C0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x11339C60)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_HASCREATE_OFFSET UNITYSDK_OFFSET(0x11339300)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_INS_OFFSET UNITYSDK_OFFSET(0x11339400)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11339C10)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x11339B40)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11339A40)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11339940)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x11339BC0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x11339CB0)

namespace MoleMole::UpdateWindow
{
	inline static constexpr unsigned int UpdateBehaviour_TypeDefinitionIndex = 78983;

	class UpdateBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::UpdateWindow::UpdateBehaviour** StaticGet_Field_5_0()
		{
			return (::MoleMole::UpdateWindow::UpdateBehaviour**)Il2CppClass::FromTypeDefinitionIndex(UpdateBehaviour_TypeDefinitionIndex)->GetStaticField(0x43A40);
		}
		::System::Action* Field_5_1; // 0x18
		::System::Action* Field_5_2; // 0x20
		::System::Action* Field_5_3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_HasCreate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_HASCREATE_OFFSET))();
		}

		static ::MoleMole::UpdateWindow::UpdateBehaviour* get_Ins()
		{
			return ((::MoleMole::UpdateWindow::UpdateBehaviour*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_INS_OFFSET))();
		}

		::System::Void add_onUpdate(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void remove_onUpdate(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void add_onLateUpdate(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void remove_onLateUpdate(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void add_onFixedUpdate(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONFIXEDUPDATE_OFFSET))(this, a1);
		}

		::System::Void remove_onFixedUpdate(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONFIXEDUPDATE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_FIXEDUPDATE_OFFSET))(this);
		}
	};
}
