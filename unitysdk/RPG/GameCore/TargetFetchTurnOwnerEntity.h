#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_0BE8677640A44229_OFFSET UNITYSDK_OFFSET(0x19CFCFC0)
#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_59626BCA16CD7C21_OFFSET UNITYSDK_OFFSET(0x19D0F720)
#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_8FEADDFF1C7DDE71_OFFSET UNITYSDK_OFFSET(0x19D07970)
#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_F4D2547EB0CDB087_OFFSET UNITYSDK_OFFSET(0x19D0F660)
#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFCF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTurnOwnerEntity_TypeDefinitionIndex = 22681;

	class TargetFetchTurnOwnerEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F4D2547EB0CDB087(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_F4D2547EB0CDB087_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0BE8677640A44229(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_0BE8677640A44229_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8FEADDFF1C7DDE71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_8FEADDFF1C7DDE71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_59626BCA16CD7C21(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_59626BCA16CD7C21_OFFSET))(a1, a2);
		}
	};
}
