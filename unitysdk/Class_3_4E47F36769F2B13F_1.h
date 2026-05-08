#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7808BF09EBF8C35A.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

namespace UnityEngine { class Transform; }

#define CLASS_3_4E47F36769F2B13F_1_METHOD_3_C86B8EFA9B7A448E_OFFSET UNITYSDK_OFFSET(0x11929650)
#define CLASS_3_4E47F36769F2B13F_1_METHOD_3_D9A324015CCCC56E_OFFSET UNITYSDK_OFFSET(0x11929770)
#define CLASS_3_4E47F36769F2B13F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11929600)

inline static constexpr unsigned int Class_3_4E47F36769F2B13F_1_TypeDefinitionIndex = 42681;

class Class_3_4E47F36769F2B13F_1 : public ::Class_2_7808BF09EBF8C35A
{
public:
	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_4E47F36769F2B13F_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C86B8EFA9B7A448E(::Share::ENotificationBadgeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_4E47F36769F2B13F_1_METHOD_3_C86B8EFA9B7A448E_OFFSET))(this, a1);
	}

	::System::Void Method_3_D9A324015CCCC56E(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_4E47F36769F2B13F_1_METHOD_3_D9A324015CCCC56E_OFFSET))(this, a1, a2);
	}
};
