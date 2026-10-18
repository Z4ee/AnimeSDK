#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_METHOD_4_1C75F7721E9343D4_OFFSET UNITYSDK_OFFSET(0x1DB61A80)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_METHOD_4_2F778258C45C317D_OFFSET UNITYSDK_OFFSET(0x1DB61B80)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_METHOD_4_A8E5DE6CD8BCDFA1_OFFSET UNITYSDK_OFFSET(0x1DB61BC0)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_METHOD_4_F5BAA9FEFB5955A9_OFFSET UNITYSDK_OFFSET(0x1DB61B20)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB61B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentInsertAbilityTarget_TypeDefinitionIndex = 24027;

	class TargetFetchCurrentInsertAbilityTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1C75F7721E9343D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_METHOD_4_1C75F7721E9343D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F5BAA9FEFB5955A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_METHOD_4_F5BAA9FEFB5955A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2F778258C45C317D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_METHOD_4_2F778258C45C317D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8E5DE6CD8BCDFA1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_METHOD_4_A8E5DE6CD8BCDFA1_OFFSET))(a1, a2);
		}
	};
}
