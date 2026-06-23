#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_488;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x13841520)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13841420)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_ADD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13841320)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x138416C0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_HASCREATE_OFFSET UNITYSDK_OFFSET(0x13840D00)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_INS_OFFSET UNITYSDK_OFFSET(0x13840E00)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x138412C0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13841670)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x138415A0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x138414A0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_REMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x138413A0)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x13841620)
#define MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13841710)

namespace MoleMole::UpdateWindow
{
	inline static constexpr unsigned int UpdateBehaviour_TypeDefinitionIndex = 52713;

	class UpdateBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::UpdateWindow::UpdateBehaviour** StaticGet_Field_5_0()
		{
			return (::MoleMole::UpdateWindow::UpdateBehaviour**)Il2CppClass::FromTypeDefinitionIndex(UpdateBehaviour_TypeDefinitionIndex)->GetStaticField(0x4DAA0);
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

		::System::Collections::Generic::IReadOnlyCollection_1<::Class_0_16E4307DCC419505_488*>* get_Items()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::Class_0_16E4307DCC419505_488*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATEWINDOW_UPDATEBEHAVIOUR_GET_ITEMS_OFFSET))(this);
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
