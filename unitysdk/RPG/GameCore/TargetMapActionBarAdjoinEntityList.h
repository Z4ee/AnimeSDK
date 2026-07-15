#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_24A45C489545A966_OFFSET UNITYSDK_OFFSET(0x1D0BF440)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_AF358AD86F0C73AE_OFFSET UNITYSDK_OFFSET(0x1D0BF2E0)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_D8BC194B4077EE2F_OFFSET UNITYSDK_OFFSET(0x1D0BF700)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_EAF003633F604BA5_OFFSET UNITYSDK_OFFSET(0x1D0BF630)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BF3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapActionBarAdjoinEntityList_TypeDefinitionIndex = 23164;

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

		static ::System::Void Method_3_EAF003633F604BA5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_EAF003633F604BA5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D8BC194B4077EE2F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_D8BC194B4077EE2F_OFFSET))(a1, a2);
		}
	};
}
