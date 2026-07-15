#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_METHOD_3_354CF2D574C870DD_OFFSET UNITYSDK_OFFSET(0x1D0C04B0)
#define RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_METHOD_3_8BB250EA873004F8_OFFSET UNITYSDK_OFFSET(0x1D0C0550)
#define RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_METHOD_3_F7264EC819675EFE_OFFSET UNITYSDK_OFFSET(0x1D0C05B0)
#define RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_METHOD_3_FE2E24B2B7ADF2BA_OFFSET UNITYSDK_OFFSET(0x1D0C05F0)
#define RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C0540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAllOffTeamMember_TypeDefinitionIndex = 23094;

	class TargetMapAllOffTeamMember : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_354CF2D574C870DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllOffTeamMember*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllOffTeamMember*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_METHOD_3_354CF2D574C870DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8BB250EA873004F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllOffTeamMember* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllOffTeamMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_METHOD_3_8BB250EA873004F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7264EC819675EFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllOffTeamMember*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllOffTeamMember*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_METHOD_3_F7264EC819675EFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FE2E24B2B7ADF2BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllOffTeamMember* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllOffTeamMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_METHOD_3_FE2E24B2B7ADF2BA_OFFSET))(a1, a2);
		}
	};
}
