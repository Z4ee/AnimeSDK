#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ABILITY_NPCENTITYNATIVEDATA_FOUNDATION_CONTAINER_IKEYFUNC_NPCCROWD_ABILITY_NPCENTITYNATIVEDATA__GET_ALLOWDUPLICATEKEYS_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define NPCCROWD_ABILITY_NPCENTITYNATIVEDATA_FOUNDATION_IEQUALSFUNC_NPCCROWD_ABILITY_NPCENTITYNATIVEDATA__EQUALS_OFFSET UNITYSDK_OFFSET(0x8257B0)
#define NPCCROWD_ABILITY_NPCENTITYNATIVEDATA_FOUNDATION_IHASHFUNC_NPCCROWD_ABILITY_NPCENTITYNATIVEDATA__HASH_OFFSET UNITYSDK_OFFSET(0x8257C0)
#define NPCCROWD_ABILITY_NPCENTITYNATIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8257A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCEntityNativeData_TypeDefinitionIndex = 44699;

	struct alignas(4) NPCEntityNativeData
	{
		::System::UInt32 _entityId; // 0x10
		::UnityEngine::Vector3 Position; // 0x14
		::UnityEngine::Vector3 Velocity; // 0x20
		::System::UInt32 TagMask; // 0x2C
		::MoleMole::Config::CampType CampType; // 0x30

		::System::Void _ctor(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCENTITYNATIVEDATA__CTOR_OFFSET))(this, entityId);
		}

		::System::Boolean Foundation_Container_IKeyFunc_NPCCrowd_Ability_NPCEntityNativeData__get_AllowDuplicateKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCENTITYNATIVEDATA_FOUNDATION_CONTAINER_IKEYFUNC_NPCCROWD_ABILITY_NPCENTITYNATIVEDATA__GET_ALLOWDUPLICATEKEYS_OFFSET))(this);
		}

		::System::Boolean Foundation_IEqualsFunc_NPCCrowd_Ability_NPCEntityNativeData__Equals(::NPCCrowd::Ability::NPCEntityNativeData left, ::NPCCrowd::Ability::NPCEntityNativeData right)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCENTITYNATIVEDATA_FOUNDATION_IEQUALSFUNC_NPCCROWD_ABILITY_NPCENTITYNATIVEDATA__EQUALS_OFFSET))(this, left, right);
		}

		::System::Int32 Foundation_IHashFunc_NPCCrowd_Ability_NPCEntityNativeData__Hash(::NPCCrowd::Ability::NPCEntityNativeData value)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Ability::NPCEntityNativeData))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCENTITYNATIVEDATA_FOUNDATION_IHASHFUNC_NPCCROWD_ABILITY_NPCENTITYNATIVEDATA__HASH_OFFSET))(this, value);
		}
	};
}
