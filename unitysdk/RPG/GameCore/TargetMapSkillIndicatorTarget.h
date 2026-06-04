#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_388E9603D9E4A565_OFFSET UNITYSDK_OFFSET(0x19D14700)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_655FC2AE87489A59_OFFSET UNITYSDK_OFFSET(0x19D145E0)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_73983B5BEC62008A_OFFSET UNITYSDK_OFFSET(0x19D14740)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_B501871CBD6F1EE8_OFFSET UNITYSDK_OFFSET(0x19D146A0)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19D14680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillIndicatorTarget_TypeDefinitionIndex = 22711;

	class TargetMapSkillIndicatorTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_655FC2AE87489A59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_655FC2AE87489A59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B501871CBD6F1EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_B501871CBD6F1EE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_388E9603D9E4A565(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_388E9603D9E4A565_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_73983B5BEC62008A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_METHOD_3_73983B5BEC62008A_OFFSET))(a1, a2);
		}
	};
}
