#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_24A45C489545A966_OFFSET UNITYSDK_OFFSET(0x177C1690)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_AF358AD86F0C73AE_OFFSET UNITYSDK_OFFSET(0x177C14F0)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177C15E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapActionBarAdjoinEntityList_TypeDefinitionIndex = 22291;

	class TargetMapActionBarAdjoinEntityList : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* LoopCondition; // 0x10
		::System::Boolean ContainsSource; // 0x18
		::RPG::GameCore::DynamicFloat* LessMaxCount; // 0x20
		::RPG::GameCore::DynamicFloat* GreaterMaxCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AF358AD86F0C73AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_AF358AD86F0C73AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_24A45C489545A966(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_24A45C489545A966_OFFSET))(a1, a2);
		}
	};
}
