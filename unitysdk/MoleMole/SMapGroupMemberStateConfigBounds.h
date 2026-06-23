#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define MOLEMOLE_SMAPGROUPMEMBERSTATECONFIGBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE2C30)

namespace MoleMole
{
	inline static constexpr unsigned int SMapGroupMemberStateConfigBounds_TypeDefinitionIndex = 45678;

	class SMapGroupMemberStateConfigBounds : public ::System::Object
	{
	public:
		::UnityEngine::Bounds Bounds; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SMAPGROUPMEMBERSTATECONFIGBOUNDS__CTOR_OFFSET))(this);
		}
	};
}
