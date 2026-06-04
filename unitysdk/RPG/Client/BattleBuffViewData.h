#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEBUFFVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB3D3170)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFCURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xB3D3670)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xB3D3630)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0xB3D3650)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xB3D3610)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0xB3D36D0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_ISSHOWNUM_OFFSET UNITYSDK_OFFSET(0xB3D3690)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_SHOWNUM_OFFSET UNITYSDK_OFFSET(0xB3D36B0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFCURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xB3D3680)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xB3D3640)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0xB3D3660)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xB3D3620)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0xB3D36E0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_ISSHOWNUM_OFFSET UNITYSDK_OFFSET(0xB3D36A0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_SHOWNUM_OFFSET UNITYSDK_OFFSET(0xB3D36C0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D31F0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFDESC_OFFSET UNITYSDK_OFFSET(0xB3D33C0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFSHOWNUM_OFFSET UNITYSDK_OFFSET(0xB3D3550)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffViewData_TypeDefinitionIndex = 66849;

	class BattleBuffViewData : public ::System::Object
	{
	public:
		::System::String* _BuffIconPath_k__BackingField; // 0x10
		::System::String* _BuffName_k__BackingField; // 0x18
		::System::String* _BuffDesc_k__BackingField; // 0x20
		::System::Int32 _ShowNum_k__BackingField; // 0x28
		::System::Int32 _BuffCurrentLife_k__BackingField; // 0x2C
		::RPG::GameCore::EnumStatusType _BuffType_k__BackingField; // 0x30
		::System::Boolean _IsShowNum_k__BackingField; // 0x34

		::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::BattleBuffViewData* Create(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::Client::BattleBuffViewData*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_CREATE_OFFSET))(a1);
		}

		::System::String* _GetBuffDesc(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::StatusRow* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFDESC_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetBuffShowNum(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFSHOWNUM_OFFSET))(this, a1);
		}

		::System::String* get_BuffName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFNAME_OFFSET))(this);
		}

		::System::Void set_BuffName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFNAME_OFFSET))(this, a1);
		}

		::System::String* get_BuffDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFDESC_OFFSET))(this);
		}

		::System::Void set_BuffDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFDESC_OFFSET))(this, a1);
		}

		::System::String* get_BuffIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFICONPATH_OFFSET))(this);
		}

		::System::Void set_BuffIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFICONPATH_OFFSET))(this, a1);
		}

		::System::Int32 get_BuffCurrentLife()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFCURRENTLIFE_OFFSET))(this);
		}

		::System::Void set_BuffCurrentLife(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFCURRENTLIFE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowNum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_ISSHOWNUM_OFFSET))(this);
		}

		::System::Void set_IsShowNum(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_ISSHOWNUM_OFFSET))(this, a1);
		}

		::System::Int32 get_ShowNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_SHOWNUM_OFFSET))(this);
		}

		::System::Void set_ShowNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_SHOWNUM_OFFSET))(this, a1);
		}

		::RPG::GameCore::EnumStatusType get_BuffType()
		{
			return ((::RPG::GameCore::EnumStatusType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFTYPE_OFFSET))(this);
		}

		::System::Void set_BuffType(::RPG::GameCore::EnumStatusType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFTYPE_OFFSET))(this, a1);
		}
	};
}
