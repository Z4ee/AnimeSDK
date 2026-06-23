#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;

#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_HANDLESELECT_OFFSET UNITYSDK_OFFSET(0x1A1FB7A0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_HPPERCENT_OFFSET UNITYSDK_OFFSET(0x1A1FB840)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISADDBANGBOO_OFFSET UNITYSDK_OFFSET(0x1A1FB820)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISADD_OFFSET UNITYSDK_OFFSET(0x1A1FB800)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISDEFAULTAVATAR_OFFSET UNITYSDK_OFFSET(0x1A1FB8A0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1A1FB780)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISMASK_OFFSET UNITYSDK_OFFSET(0x1A1FB7C0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1A1FB880)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_SHOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1A1FB7E0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_TOWERID_OFFSET UNITYSDK_OFFSET(0x1A1FB860)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SETHANDLESELECT_OFFSET UNITYSDK_OFFSET(0x1A1FB900)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SETMASK_OFFSET UNITYSDK_OFFSET(0x1A1FB960)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_HANDLESELECT_OFFSET UNITYSDK_OFFSET(0x1A1FB7B0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_HPPERCENT_OFFSET UNITYSDK_OFFSET(0x1A1FB850)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISADDBANGBOO_OFFSET UNITYSDK_OFFSET(0x1A1FB830)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISADD_OFFSET UNITYSDK_OFFSET(0x1A1FB810)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISDEFAULTAVATAR_OFFSET UNITYSDK_OFFSET(0x1A1FB8B0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1A1FB790)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISMASK_OFFSET UNITYSDK_OFFSET(0x1A1FB7D0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1A1FB890)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_SHOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1A1FB7F0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_TOWERID_OFFSET UNITYSDK_OFFSET(0x1A1FB870)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1FB8D0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A1FB8F0)
#define MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1FB8C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelRoleCardWidgetController_Context_TypeDefinitionIndex = 40388;

	class UIBabelRoleCardWidgetController_Context : public ::System::Object
	{
	public:
		::System::Int32 AvatarLevel; // 0x10
		::System::Int32 BuddyId; // 0x14
		::System::Int32 _HpPercent_k__BackingField; // 0x18
		::System::Int32 AvatarId; // 0x1C
		::System::Boolean _ShowNotification_k__BackingField; // 0x20
		::System::Boolean _IsDefaultAvatar_k__BackingField; // 0x21
		::System::Boolean _IsNew_k__BackingField; // 0x22
		::System::Int32 _TowerID_k__BackingField; // 0x24
		::System::Boolean _IsAddBangBoo_k__BackingField; // 0x28
		::System::Boolean _IsMask_k__BackingField; // 0x29
		::System::Boolean _IsAdd_k__BackingField; // 0x2A
		::System::Boolean _HandleSelect_k__BackingField; // 0x2B
		::System::Boolean _IsEmpty_k__BackingField; // 0x2C
		::System::Boolean IsBtnInteractable; // 0x2D

		::System::Void _ctor(::System::Int32 towerid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, towerid);
		}

		::System::Void _ctor_1(::Class_2_1824EF69C8E376A3* data, ::System::Int32 towerid)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET))(this, data, towerid);
		}

		::System::Void _ctor_2(::System::Int32 avatarId, ::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET))(this, avatarId, level);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void set_IsEmpty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISEMPTY_OFFSET))(this, value);
		}

		::System::Boolean get_HandleSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_HANDLESELECT_OFFSET))(this);
		}

		::System::Void set_HandleSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_HANDLESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_IsMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISMASK_OFFSET))(this);
		}

		::System::Void set_IsMask(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISMASK_OFFSET))(this, value);
		}

		::System::Boolean get_ShowNotification()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_SHOWNOTIFICATION_OFFSET))(this);
		}

		::System::Void set_ShowNotification(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_SHOWNOTIFICATION_OFFSET))(this, value);
		}

		::System::Boolean get_IsAdd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISADD_OFFSET))(this);
		}

		::System::Void set_IsAdd(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISADD_OFFSET))(this, value);
		}

		::System::Boolean get_IsAddBangBoo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISADDBANGBOO_OFFSET))(this);
		}

		::System::Void set_IsAddBangBoo(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISADDBANGBOO_OFFSET))(this, value);
		}

		::System::Int32 get_HpPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_HPPERCENT_OFFSET))(this);
		}

		::System::Void set_HpPercent(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_HPPERCENT_OFFSET))(this, value);
		}

		::System::Int32 get_TowerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_TOWERID_OFFSET))(this);
		}

		::System::Void set_TowerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_TOWERID_OFFSET))(this, value);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISNEW_OFFSET))(this, value);
		}

		::System::Boolean get_IsDefaultAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISDEFAULTAVATAR_OFFSET))(this);
		}

		::System::Void set_IsDefaultAvatar(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISDEFAULTAVATAR_OFFSET))(this, value);
		}

		::MoleMole::UIBabelRoleCardWidgetController_Context* SetHandleSelect(::System::Boolean handleSelect, ::System::Boolean showNotification)
		{
			return ((::MoleMole::UIBabelRoleCardWidgetController_Context*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SETHANDLESELECT_OFFSET))(this, handleSelect, showNotification);
		}

		::MoleMole::UIBabelRoleCardWidgetController_Context* SetMask(::System::Boolean mask)
		{
			return ((::MoleMole::UIBabelRoleCardWidgetController_Context*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELROLECARDWIDGETCONTROLLER_CONTEXT_SETMASK_OFFSET))(this, mask);
		}
	};
}
