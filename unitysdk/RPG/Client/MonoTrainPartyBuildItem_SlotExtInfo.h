#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTEXTINFO_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x1A357310)
#define RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A357450)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTrainPartyBuildItem_SlotExtInfo_TypeDefinitionIndex = 65804;

	class MonoTrainPartyBuildItem_SlotExtInfo : public ::System::Object
	{
	public:
		::UnityEngine::Transform* anchor; // 0x10
		::System::UInt32 dynamicID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTEXTINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTEXTINFO_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
		}
	};
}
