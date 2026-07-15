#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_21AC0596C562A8FB_OFFSET UNITYSDK_OFFSET(0x1D0BDB30)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_A11B81032D874802_OFFSET UNITYSDK_OFFSET(0x1D0BDC30)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_C28B2D6E951406DA_OFFSET UNITYSDK_OFFSET(0x1D0BDBB0)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_F3F79E6223ACA8CF_OFFSET UNITYSDK_OFFSET(0x1D0BDC10)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BDBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTurnActionEntity_TypeDefinitionIndex = 23143;

	class TargetFetchTurnActionEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_21AC0596C562A8FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTurnActionEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTurnActionEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_21AC0596C562A8FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C28B2D6E951406DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_C28B2D6E951406DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F3F79E6223ACA8CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnActionEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnActionEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_F3F79E6223ACA8CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A11B81032D874802(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_A11B81032D874802_OFFSET))(a1, a2);
		}
	};
}
