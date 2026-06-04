#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_METHOD_4_28172AD7D07B76B3_OFFSET UNITYSDK_OFFSET(0x19D0EBE0)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_METHOD_4_82E0498B85AB62C5_OFFSET UNITYSDK_OFFSET(0x19D07230)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_METHOD_4_D3195A111679F8A5_OFFSET UNITYSDK_OFFSET(0x19CFC210)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_METHOD_4_EB1B723184C63D55_OFFSET UNITYSDK_OFFSET(0x19D0ECA0)
#define RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFC1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchStanceBreakTargetEntity_TypeDefinitionIndex = 22682;

	class TargetFetchStanceBreakTargetEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_28172AD7D07B76B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_METHOD_4_28172AD7D07B76B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D3195A111679F8A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_METHOD_4_D3195A111679F8A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82E0498B85AB62C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_METHOD_4_82E0498B85AB62C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EB1B723184C63D55(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSTANCEBREAKTARGETENTITY_METHOD_4_EB1B723184C63D55_OFFSET))(a1, a2);
		}
	};
}
