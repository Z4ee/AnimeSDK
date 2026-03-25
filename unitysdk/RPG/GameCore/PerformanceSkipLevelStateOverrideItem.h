#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FSVOverridItem; }
namespace RPG::GameCore { class GroupPropertyOverrideItem; }
namespace RPG::GameCore { class PropStateOverrideItem; }

#define RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDEITEM_METHOD_2_9645F1DE95A7C204_OFFSET UNITYSDK_OFFSET(0x1749F770)
#define RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1749FA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipLevelStateOverrideItem_TypeDefinitionIndex = 17458;

	class PerformanceSkipLevelStateOverrideItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14
		::Il2CppArray<::RPG::GameCore::PropStateOverrideItem*>* PropStateOverrides; // 0x18
		::Il2CppArray<::RPG::GameCore::FSVOverridItem*>* FSVOverrides; // 0x20
		::Il2CppArray<::RPG::GameCore::GroupPropertyOverrideItem*>* GroupPropertyOverrides; // 0x28
		::Il2CppArray<::System::UInt32>* ReloadGroupList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9645F1DE95A7C204(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSkipLevelStateOverrideItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipLevelStateOverrideItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDEITEM_METHOD_2_9645F1DE95A7C204_OFFSET))(a1, a2);
		}
	};
}
