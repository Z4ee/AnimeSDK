#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_METHOD_3_047A063A133E5510_OFFSET UNITYSDK_OFFSET(0x1D0C2930)
#define RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_METHOD_3_76FFAA74781EC89A_OFFSET UNITYSDK_OFFSET(0x1D0C2A10)
#define RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_METHOD_3_B57F5E99F35D3015_OFFSET UNITYSDK_OFFSET(0x1D0C29B0)
#define RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_METHOD_3_F1ECF942793B0B67_OFFSET UNITYSDK_OFFSET(0x1D0C2A30)
#define RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C29A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapEnemyTeamEntity_TypeDefinitionIndex = 23091;

	class TargetMapEnemyTeamEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_047A063A133E5510(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapEnemyTeamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_METHOD_3_047A063A133E5510_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B57F5E99F35D3015(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapEnemyTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_METHOD_3_B57F5E99F35D3015_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76FFAA74781EC89A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapEnemyTeamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_METHOD_3_76FFAA74781EC89A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F1ECF942793B0B67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapEnemyTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_METHOD_3_F1ECF942793B0B67_OFFSET))(a1, a2);
		}
	};
}
