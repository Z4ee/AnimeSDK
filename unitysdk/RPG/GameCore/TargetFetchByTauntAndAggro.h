#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_68990A283ED17235_OFFSET UNITYSDK_OFFSET(0x1D5A9C10)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_844FDC9CE175F613_OFFSET UNITYSDK_OFFSET(0x1D5A9D30)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_A8BA5A58F5E4BC32_OFFSET UNITYSDK_OFFSET(0x1D5A9BD0)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_B4226CA478DA8A4A_OFFSET UNITYSDK_OFFSET(0x1D5A9D60)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A9C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchByTauntAndAggro_TypeDefinitionIndex = 23694;

	class TargetFetchByTauntAndAggro : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceTarget; // 0x10
		::System::Boolean RandomByAggroWhenFail; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A8BA5A58F5E4BC32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchByTauntAndAggro*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_A8BA5A58F5E4BC32_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68990A283ED17235(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_68990A283ED17235_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_844FDC9CE175F613(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchByTauntAndAggro*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_844FDC9CE175F613_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4226CA478DA8A4A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_B4226CA478DA8A4A_OFFSET))(a1, a2);
		}
	};
}
