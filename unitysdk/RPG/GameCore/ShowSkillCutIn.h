#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CutInSourceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWSKILLCUTIN_METHOD_3_60847421BF38722E_OFFSET UNITYSDK_OFFSET(0x17703890)
#define RPG_GAMECORE_SHOWSKILLCUTIN_METHOD_3_EB89798D293D6F73_OFFSET UNITYSDK_OFFSET(0x17703810)
#define RPG_GAMECORE_SHOWSKILLCUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17703860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSkillCutIn_TypeDefinitionIndex = 21157;

	class ShowSkillCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CutInSourceType Type; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::UInt32 ParamID; // 0x30
		::System::UInt32 ParamID2; // 0x34
		::System::String* ParamStr; // 0x38
		::System::Single ParamFloat; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLCUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB89798D293D6F73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSkillCutIn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSkillCutIn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLCUTIN_METHOD_3_EB89798D293D6F73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_60847421BF38722E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSkillCutIn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSkillCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLCUTIN_METHOD_3_60847421BF38722E_OFFSET))(a1, a2);
		}
	};
}
