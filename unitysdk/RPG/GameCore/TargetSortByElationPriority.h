#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_576FA5510D923E69_OFFSET UNITYSDK_OFFSET(0x1E1C16B0)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_7769C90CF6BFB3F8_OFFSET UNITYSDK_OFFSET(0x1E1C1520)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_90DFFF98F4964971_OFFSET UNITYSDK_OFFSET(0x1E1C1660)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_F4FDD057F7716392_OFFSET UNITYSDK_OFFSET(0x1E1C14C0)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C1510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByElationPriority_TypeDefinitionIndex = 23722;

	class TargetSortByElationPriority : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Boolean FilterByElationTimeTag; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F4FDD057F7716392(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByElationPriority*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByElationPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_F4FDD057F7716392_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7769C90CF6BFB3F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByElationPriority* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_7769C90CF6BFB3F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_90DFFF98F4964971(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByElationPriority*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByElationPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_90DFFF98F4964971_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_576FA5510D923E69(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByElationPriority* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_576FA5510D923E69_OFFSET))(a1, a2);
		}
	};
}
