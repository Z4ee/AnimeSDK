#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E2714210413A69CA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_0E3D561C72111316;

#define MOLEMOLE_UICINEMASINGLERESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15250A50)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingleResultContext_TypeDefinitionIndex = 40238;

	class UICinemaSingleResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_0E3D561C72111316* singlePlayController; // 0x28
		::System::Int32 currScore; // 0x30
		::System::Int32 currMaxCount; // 0x34
		::System::Int32 clearAllBubbleCount; // 0x38
		::System::Boolean hasMultiClickBubble; // 0x3C
		::System::Boolean hasClearAllBubble; // 0x3D
		::System::Int32 levelID; // 0x40
		::System::Int32 multiClickBubbleCount; // 0x44
		::System::Int32 historyMaxCount; // 0x48
		::System::Int32 normalBubbleCount; // 0x4C
		::System::Int32 historyMaxScore; // 0x50
		::Enum_3_E2714210413A69CA currLevel; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
