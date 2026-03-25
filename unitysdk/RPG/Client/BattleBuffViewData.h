#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEBUFFVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9193D30)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFCURRENTLIFE_OFFSET UNITYSDK_OFFSET(0x9194220)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0x91941E0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0x9194200)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0x91941C0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0x9194280)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_ISSHOWNUM_OFFSET UNITYSDK_OFFSET(0x9194240)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_SHOWNUM_OFFSET UNITYSDK_OFFSET(0x9194260)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFCURRENTLIFE_OFFSET UNITYSDK_OFFSET(0x9194230)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0x91941F0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0x9194210)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0x91941D0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0x9194290)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_ISSHOWNUM_OFFSET UNITYSDK_OFFSET(0x9194250)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_SHOWNUM_OFFSET UNITYSDK_OFFSET(0x9194270)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9193DB0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFDESC_OFFSET UNITYSDK_OFFSET(0x9193F80)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFSHOWNUM_OFFSET UNITYSDK_OFFSET(0x9194100)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffViewData_TypeDefinitionIndex = 58599;

	class BattleBuffViewData : public ::System::Object
	{
	public:
		::System::String* _BuffDesc_k__BackingField; // 0x10
		::System::String* _BuffIconPath_k__BackingField; // 0x18
		::System::String* _BuffName_k__BackingField; // 0x20
		::RPG::GameCore::EnumStatusType _BuffType_k__BackingField; // 0x28
		::System::Boolean _IsShowNum_k__BackingField; // 0x2C
		::System::Int32 _BuffCurrentLife_k__BackingField; // 0x30
		::System::Int32 _ShowNum_k__BackingField; // 0x34

		::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__CTOR_OFFSET))(this, modifier);
		}

		static ::RPG::Client::BattleBuffViewData* Create(::RPG::GameCore::TurnBasedModifierInstance* modifier)
		{
			return ((::RPG::Client::BattleBuffViewData*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_CREATE_OFFSET))(modifier);
		}

		::System::String* _GetBuffDesc(::RPG::GameCore::TurnBasedModifierInstance* modifier, ::RPG::GameCore::StatusRow* config)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFDESC_OFFSET))(this, modifier, config);
		}

		::System::Int32 _GetBuffShowNum(::RPG::GameCore::TurnBasedModifierInstance* modifier)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFSHOWNUM_OFFSET))(this, modifier);
		}

		::System::String* get_BuffName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFNAME_OFFSET))(this);
		}

		::System::Void set_BuffName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFNAME_OFFSET))(this, value);
		}

		::System::String* get_BuffDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFDESC_OFFSET))(this);
		}

		::System::Void set_BuffDesc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFDESC_OFFSET))(this, value);
		}

		::System::String* get_BuffIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFICONPATH_OFFSET))(this);
		}

		::System::Void set_BuffIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFICONPATH_OFFSET))(this, value);
		}

		::System::Int32 get_BuffCurrentLife()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFCURRENTLIFE_OFFSET))(this);
		}

		::System::Void set_BuffCurrentLife(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFCURRENTLIFE_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowNum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_ISSHOWNUM_OFFSET))(this);
		}

		::System::Void set_IsShowNum(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_ISSHOWNUM_OFFSET))(this, value);
		}

		::System::Int32 get_ShowNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_SHOWNUM_OFFSET))(this);
		}

		::System::Void set_ShowNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_SHOWNUM_OFFSET))(this, value);
		}

		::RPG::GameCore::EnumStatusType get_BuffType()
		{
			return ((::RPG::GameCore::EnumStatusType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFTYPE_OFFSET))(this);
		}

		::System::Void set_BuffType(::RPG::GameCore::EnumStatusType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFTYPE_OFFSET))(this, value);
		}
	};
}
