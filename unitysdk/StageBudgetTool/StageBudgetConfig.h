#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace StageBudgetTool { class Block; }
namespace StageBudgetTool { class Passage; }
namespace StageBudgetTool { class Room; }
namespace StageBudgetTool { class Volume; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STAGEBUDGETTOOL_STAGEBUDGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC56D0)

namespace StageBudgetTool
{
	inline static constexpr unsigned int StageBudgetConfig_TypeDefinitionIndex = 45961;

	class StageBudgetConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::StageBudgetTool::Block*>* BlockList; // 0x18
		::System::Collections::Generic::List_1<::StageBudgetTool::Volume*>* VolumeList; // 0x20
		::System::Collections::Generic::List_1<::StageBudgetTool::Passage*>* PassageList; // 0x28
		::System::Collections::Generic::List_1<::StageBudgetTool::Room*>* RoomList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_STAGEBUDGETCONFIG__CTOR_OFFSET))(this);
		}
	};
}
