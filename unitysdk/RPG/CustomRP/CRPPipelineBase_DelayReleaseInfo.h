#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define RPG_CUSTOMRP_CRPPIPELINEBASE_DELAYRELEASEINFO_RESET_OFFSET UNITYSDK_OFFSET(0x192B18C0)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_DELAYRELEASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x192B1920)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPPipelineBase_DelayReleaseInfo_TypeDefinitionIndex = 36863;

	class CRPPipelineBase_DelayReleaseInfo : public ::System::Object
	{
	public:
		::UnityEngine::Object* obj; // 0x10
		::System::Int32 frame; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_DELAYRELEASEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_DELAYRELEASEINFO_RESET_OFFSET))(this);
		}
	};
}
