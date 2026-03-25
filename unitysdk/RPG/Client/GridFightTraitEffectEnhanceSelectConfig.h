#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightSelectEnhanceRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x98D2200)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_COST_OFFSET UNITYSDK_OFFSET(0x98D23D0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x98D23F0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x98D2450)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x98D2390)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98D2410)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x98D2430)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_TRAITEFFECTID_OFFSET UNITYSDK_OFFSET(0x98D23B0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_COST_OFFSET UNITYSDK_OFFSET(0x98D23E0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_DESC_OFFSET UNITYSDK_OFFSET(0x98D2400)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x98D2460)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x98D23A0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_NAME_OFFSET UNITYSDK_OFFSET(0x98D2420)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x98D2440)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_TRAITEFFECTID_OFFSET UNITYSDK_OFFSET(0x98D23C0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x98D2380)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectEnhanceSelectConfig_TypeDefinitionIndex = 53132;

	class GridFightTraitEffectEnhanceSelectConfig : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* _Desc_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::System::String* _SimpleDesc_k__BackingField; // 0x28
		::System::UInt32 _TraitEffectID_k__BackingField; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x34
		::System::UInt32 _Cost_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightTraitEffectEnhanceSelectConfig* Create(::RPG::GameCore::GridFightSelectEnhanceRow* row)
		{
			return ((::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*(*)(::RPG::GameCore::GridFightSelectEnhanceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_CREATE_OFFSET))(row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_TraitEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_TRAITEFFECTID_OFFSET))(this);
		}

		::System::Void set_TraitEffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_TRAITEFFECTID_OFFSET))(this, value);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_COST_OFFSET))(this);
		}

		::System::Void set_Cost(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_COST_OFFSET))(this, value);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_DESC_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::System::Void set_SimpleDesc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_SIMPLEDESC_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTENHANCESELECTCONFIG_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}
