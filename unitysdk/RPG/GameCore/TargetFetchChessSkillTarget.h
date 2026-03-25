#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCHESSSKILLTARGET_METHOD_4_AEF2C3AD2544B5CF_OFFSET UNITYSDK_OFFSET(0x177BDEF0)
#define RPG_GAMECORE_TARGETFETCHCHESSSKILLTARGET_METHOD_4_C23EE6AC974B0D89_OFFSET UNITYSDK_OFFSET(0x177B4200)
#define RPG_GAMECORE_TARGETFETCHCHESSSKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x177B4180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchChessSkillTarget_TypeDefinitionIndex = 22166;

	class TargetFetchChessSkillTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSSKILLTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AEF2C3AD2544B5CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchChessSkillTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchChessSkillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSSKILLTARGET_METHOD_4_AEF2C3AD2544B5CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C23EE6AC974B0D89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchChessSkillTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchChessSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCHESSSKILLTARGET_METHOD_4_C23EE6AC974B0D89_OFFSET))(a1, a2);
		}
	};
}
