#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C95F190)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_GET_DAMAGEPERCENT_OFFSET UNITYSDK_OFFSET(0x1C95F160)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x1C95F150)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_GET_RELATEDDATAOBJECT_OFFSET UNITYSDK_OFFSET(0x1C95F170)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_SET_RELATEDDATAOBJECT_OFFSET UNITYSDK_OFFSET(0x1C95F180)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C95F120)
#define RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C95F110)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDamageStatisticInfo_TypeDefinitionIndex = 64474;

	class GridFightDamageStatisticInfo : public ::System::Object
	{
	public:
		::System::Object* _RelatedDataObject_k__BackingField; // 0x10
		::System::Double _Damage_k__BackingField; // 0x18
		::System::Single _DamagePercent_k__BackingField; // 0x20

		::System::Void _ctor(::System::Double a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO__CTOR_1_OFFSET))(this, a1, a2);
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

		::System::Void set_RelatedDataObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_SET_RELATEDDATAOBJECT_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightDamageStatisticInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightDamageStatisticInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDAMAGESTATISTICINFO_COMPARETO_OFFSET))(this, a1);
		}
	};
}
