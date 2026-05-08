#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SuperDebug_LogModule.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTCONST_ISDYNAMICCONFIGID_OFFSET UNITYSDK_OFFSET(0x1022F420)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectConst_TypeDefinitionIndex = 73662;

	class ViewObjectConst : public ::System::Object
	{
	public:
		// static const ::MoleMole::SuperDebug_LogModule LogModule; // 0x0
		// static const ::MoleMole::SuperDebug_LogModule DebugLogModule; // 0x0
		// static const ::MoleMole::SuperDebug_LogModule DebugDetailLogModule; // 0x0
		// static const ::MoleMole::SuperDebug_LogModule GroupHandleLog; // 0x0
		// static const ::System::UInt32 EmptyGroupID = 0x0; // 0x0
		// static const ::System::UInt32 InvalidMemberId = 0x7FFFFFFF; // 0x0
		// static const ::System::UInt32 GlobalGroupID = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt32 DynamicConfigIdStart = 0x186A0; // 0x0

		static ::System::Boolean IsDynamicConfigId(::System::UInt32 configId)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTCONST_ISDYNAMICCONFIGID_OFFSET))(configId);
		}
	};
}
