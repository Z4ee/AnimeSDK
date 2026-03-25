#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97EE280)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_GET_DAMAGEPERCENT_OFFSET UNITYSDK_OFFSET(0x97EE250)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x97EE240)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_GET_RELATEDDATAOBJECT_OFFSET UNITYSDK_OFFSET(0x97EE260)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_SET_RELATEDDATAOBJECT_OFFSET UNITYSDK_OFFSET(0x97EE270)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x97EE210)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x97EE200)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDamageStatisticInfo_TypeDefinitionIndex = 52314;

	class GridFightDamageStatisticInfo : public ::System::Object
	{
	public:
		::System::Object* _RelatedDataObject_k__BackingField; // 0x10
		::System::Double _Damage_k__BackingField; // 0x18
		::System::Single _DamagePercent_k__BackingField; // 0x20

		::System::Void _ctor(::System::Double damage, ::System::Single damagePercent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO__CTOR_OFFSET))(this, damage, damagePercent);
		}

		::System::Void _ctor_1(::System::Double damage, ::System::Double maxDamage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO__CTOR_1_OFFSET))(this, damage, maxDamage);
		}

		::System::Double get_Damage()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_GET_DAMAGE_OFFSET))(this);
		}

		::System::Single get_DamagePercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_GET_DAMAGEPERCENT_OFFSET))(this);
		}

		::System::Object* get_RelatedDataObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_GET_RELATEDDATAOBJECT_OFFSET))(this);
		}

		::System::Void set_RelatedDataObject(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_SET_RELATEDDATAOBJECT_OFFSET))(this, value);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightDamageStatisticInfo* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightDamageStatisticInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_COMPARETO_OFFSET))(this, other);
		}
	};
}
