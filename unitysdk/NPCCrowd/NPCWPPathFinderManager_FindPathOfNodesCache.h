#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCWPPATHFINDERMANAGER_FINDPATHOFNODESCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x11D97CA0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCWPPathFinderManager_FindPathOfNodesCache_TypeDefinitionIndex = 48020;

	class NPCWPPathFinderManager_FindPathOfNodesCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt16>* result; // 0x10
		::System::UInt16 exitPointID; // 0x18
		::System::UInt16 startPointID; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERMANAGER_FINDPATHOFNODESCACHE__CTOR_OFFSET))(this);
		}
	};
}
