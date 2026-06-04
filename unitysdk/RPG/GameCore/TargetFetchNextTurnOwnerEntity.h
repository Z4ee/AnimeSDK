#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_METHOD_4_7D4EBA3E2B7A783E_OFFSET UNITYSDK_OFFSET(0x19D0DAB0)
#define RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_METHOD_4_A115B506FBE09D2C_OFFSET UNITYSDK_OFFSET(0x19D06520)
#define RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_METHOD_4_B4F42FA8E0B36A2C_OFFSET UNITYSDK_OFFSET(0x19D0DB70)
#define RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_METHOD_4_CB48E3CC304A5D3C_OFFSET UNITYSDK_OFFSET(0x19CFA9D0)
#define RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFA980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNextTurnOwnerEntity_TypeDefinitionIndex = 22656;

	class TargetFetchNextTurnOwnerEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7D4EBA3E2B7A783E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_METHOD_4_7D4EBA3E2B7A783E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CB48E3CC304A5D3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_METHOD_4_CB48E3CC304A5D3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A115B506FBE09D2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_METHOD_4_A115B506FBE09D2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B4F42FA8E0B36A2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_METHOD_4_B4F42FA8E0B36A2C_OFFSET))(a1, a2);
		}
	};
}
