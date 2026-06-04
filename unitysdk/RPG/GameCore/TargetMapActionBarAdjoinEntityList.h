#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_24A45C489545A966_OFFSET UNITYSDK_OFFSET(0x19D10C70)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_65C5F33B1927EEB1_OFFSET UNITYSDK_OFFSET(0x19D10F50)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_AF358AD86F0C73AE_OFFSET UNITYSDK_OFFSET(0x19D10AD0)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_D10E728B386B0D5E_OFFSET UNITYSDK_OFFSET(0x19D10E60)
#define RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19D10BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapActionBarAdjoinEntityList_TypeDefinitionIndex = 22697;

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

		static ::System::Void Method_3_D10E728B386B0D5E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_D10E728B386B0D5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65C5F33B1927EEB1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPACTIONBARADJOINENTITYLIST_METHOD_3_65C5F33B1927EEB1_OFFSET))(a1, a2);
		}
	};
}
