#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_1C7DD83CF5861EDC_OFFSET UNITYSDK_OFFSET(0x1D5B50A0)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_6BA4413F08CC5329_OFFSET UNITYSDK_OFFSET(0x1D5B5160)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_8868B294B53D1AD9_OFFSET UNITYSDK_OFFSET(0x1D5B4FD0)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_BEC06A1ACA590840_OFFSET UNITYSDK_OFFSET(0x1D5B5190)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B5090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillTarget_TypeDefinitionIndex = 23751;

	class TargetMapSkillTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean LogErrorIfEmpty; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8868B294B53D1AD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_8868B294B53D1AD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1C7DD83CF5861EDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_1C7DD83CF5861EDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6BA4413F08CC5329(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_6BA4413F08CC5329_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEC06A1ACA590840(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_BEC06A1ACA590840_OFFSET))(a1, a2);
		}
	};
}
