#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2FB1A61CD43E8B89.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_GET_ID_OFFSET UNITYSDK_OFFSET(0x16AA1820)
#define MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_GET_ROLEJOINTIPSTYPE_OFFSET UNITYSDK_OFFSET(0x16AA1800)
#define MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_SET_ID_OFFSET UNITYSDK_OFFSET(0x16AA1830)
#define MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_SET_ROLEJOINTIPSTYPE_OFFSET UNITYSDK_OFFSET(0x16AA1810)
#define MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA1840)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleJoinTipsPopWindowContext_TypeDefinitionIndex = 84913;

	class UIRoleJoinTipsPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ShowCancelBtn; // 0x28
		::System::Boolean ShowOKBtn; // 0x29
		::System::Boolean ShowGoBtn; // 0x2A
		::System::Int32 _ID_k__BackingField; // 0x2C
		::Enum_3_2FB1A61CD43E8B89 _RoleJoinTipsType_k__BackingField; // 0x30

		::System::Void _ctor(::Enum_3_2FB1A61CD43E8B89 type, ::System::Int32 id, ::System::Boolean showOK, ::System::Boolean showCancel, ::System::Boolean showGo)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_2FB1A61CD43E8B89, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT__CTOR_OFFSET))(this, type, id, showOK, showCancel, showGo);
		}

		::Enum_3_2FB1A61CD43E8B89 get_RoleJoinTipsType()
		{
			return ((::Enum_3_2FB1A61CD43E8B89(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_GET_ROLEJOINTIPSTYPE_OFFSET))(this);
		}

		::System::Void set_RoleJoinTipsType(::Enum_3_2FB1A61CD43E8B89 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_2FB1A61CD43E8B89))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_SET_ROLEJOINTIPSTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_SET_ID_OFFSET))(this, value);
		}
	};
}
