#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/RPG/GameCore/ForceKillShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x192E1510)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GETISFORCEKILLMODIFIER_OFFSET UNITYSDK_OFFSET(0x192E18D0)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GETREFRESHFORCEKILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x192E1950)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x192E14B0)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x192E1490)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0x192E14D0)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x192E14F0)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x192E15E0)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x192E14C0)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x192E14A0)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_SET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0x192E14E0)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_SET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x192E1500)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA__CACULATEFROMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x192E1630)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x192E15D0)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA__RESET_OFFSET UNITYSDK_OFFSET(0x192E19B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DefaultForceKillMarkData_TypeDefinitionIndex = 71619;

	class DefaultForceKillMarkData : public ::System::Object
	{
	public:
		::System::Boolean _IsValid_k__BackingField; // 0x10
		::RPG::GameCore::ForceKillMarkType _MarkType_k__BackingField; // 0x14
		::RPG::GameCore::ForceKillShowType _ShowType_k__BackingField; // 0x18
		::System::Single _FillAmount_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_SET_ISVALID_OFFSET))(this, a1);
		}

		::System::Single get_FillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_FillAmount(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_SET_FILLAMOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::ForceKillMarkType get_MarkType()
		{
			return ((::RPG::GameCore::ForceKillMarkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GET_MARKTYPE_OFFSET))(this);
		}

		::System::Void set_MarkType(::RPG::GameCore::ForceKillMarkType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ForceKillMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_SET_MARKTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ForceKillShowType get_ShowType()
		{
			return ((::RPG::GameCore::ForceKillShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GET_SHOWTYPE_OFFSET))(this);
		}

		::System::Void set_ShowType(::RPG::GameCore::ForceKillShowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ForceKillShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_SET_SHOWTYPE_OFFSET))(this, a1);
		}

		static ::RPG::Client::DefaultForceKillMarkData* Create(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::DefaultForceKillMarkData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Refresh(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Boolean GetIsForceKillModifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GETISFORCEKILLMODIFIER_OFFSET))(this, a1);
		}

		::System::Boolean GetRefreshForceKillAmount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA_GETREFRESHFORCEKILLAMOUNT_OFFSET))(this);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA__RESET_OFFSET))(this);
		}

		::System::Void _CaculateFromModifiers(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA__CACULATEFROMMODIFIERS_OFFSET))(this, a1);
		}
	};
}
