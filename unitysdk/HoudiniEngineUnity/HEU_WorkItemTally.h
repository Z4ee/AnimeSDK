#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_ANYWORKITEMSFAILED_OFFSET UNITYSDK_OFFSET(0x8496040)
#define HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_ANYWORKITEMSPENDING_OFFSET UNITYSDK_OFFSET(0x8496090)
#define HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_AREALLWORKITEMSCOMPLETE_OFFSET UNITYSDK_OFFSET(0x8495FF0)
#define HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_PROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0x84A89C0)
#define HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_ZEROALL_OFFSET UNITYSDK_OFFSET(0x8495FA0)
#define HOUDINIENGINEUNITY_HEU_WORKITEMTALLY__CTOR_OFFSET UNITYSDK_OFFSET(0x8496130)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_WorkItemTally_TypeDefinitionIndex = 37753;

	class HEU_WorkItemTally : public ::System::Object
	{
	public:
		::System::Int32 _totalWorkItems; // 0x10
		::System::Int32 _waitingWorkItems; // 0x14
		::System::Int32 _scheduledWorkItems; // 0x18
		::System::Int32 _cookingWorkItems; // 0x1C
		::System::Int32 _cookedWorkItems; // 0x20
		::System::Int32 _erroredWorkItems; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_WORKITEMTALLY__CTOR_OFFSET))(this);
		}

		::System::Void ZeroAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_ZEROALL_OFFSET))(this);
		}

		::System::Boolean AreAllWorkItemsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_AREALLWORKITEMSCOMPLETE_OFFSET))(this);
		}

		::System::Boolean AnyWorkItemsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_ANYWORKITEMSFAILED_OFFSET))(this);
		}

		::System::Boolean AnyWorkItemsPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_ANYWORKITEMSPENDING_OFFSET))(this);
		}

		::System::String* ProgressRatio()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_WORKITEMTALLY_PROGRESSRATIO_OFFSET))(this);
		}
	};
}
