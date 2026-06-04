#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_1C7DD83CF5861EDC_OFFSET UNITYSDK_OFFSET(0x19D14CD0)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_4BADCFE2AA0829FE_OFFSET UNITYSDK_OFFSET(0x19D14DE0)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_7D478A2C3ECCFD1F_OFFSET UNITYSDK_OFFSET(0x19D14D90)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_D968C77241804C90_OFFSET UNITYSDK_OFFSET(0x19D14BC0)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19D14CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillTarget_TypeDefinitionIndex = 22704;

	class TargetMapSkillTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean LogErrorIfEmpty; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D968C77241804C90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_D968C77241804C90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1C7DD83CF5861EDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_1C7DD83CF5861EDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D478A2C3ECCFD1F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_7D478A2C3ECCFD1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4BADCFE2AA0829FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_METHOD_3_4BADCFE2AA0829FE_OFFSET))(a1, a2);
		}
	};
}
