#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceSortedItem; }

#define RPG_GAMECORE_SUBMISSIONSORTEDITEM_METHOD_2_1468540DAE5C4EA0_OFFSET UNITYSDK_OFFSET(0x1D580FB0)
#define RPG_GAMECORE_SUBMISSIONSORTEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D581100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionSortedItem_TypeDefinitionIndex = 18808;

	class SubMissionSortedItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x10
		::Il2CppArray<::RPG::GameCore::PerformanceSortedItem*>* PerformanceSortList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONSORTEDITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1468540DAE5C4EA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubMissionSortedItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubMissionSortedItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONSORTEDITEM_METHOD_2_1468540DAE5C4EA0_OFFSET))(a1, a2);
		}
	};
}
