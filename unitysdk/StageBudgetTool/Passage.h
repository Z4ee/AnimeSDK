#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageBudgetTool/PassageConnectivity.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace StageBudgetTool { class Door; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STAGEBUDGETTOOL_PASSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xD0944B0)

namespace StageBudgetTool
{
	inline static constexpr unsigned int Passage_TypeDefinitionIndex = 45041;

	class Passage : public ::System::Object
	{
	public:
		::System::String* Alias; // 0x10
		::StageBudgetTool::PassageConnectivity passageConnectivity; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PassageLine; // 0x20
		::StageBudgetTool::Door* DoorA; // 0x28
		::StageBudgetTool::Door* DoorB; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_PASSAGE__CTOR_OFFSET))(this);
		}
	};
}
