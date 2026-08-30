#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_37E4E72FD3B5C545_OFFSET UNITYSDK_OFFSET(0x1E1BA670)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_74FF5CB42F2D8A1D_OFFSET UNITYSDK_OFFSET(0x1E1BA800)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_EBD544EAA6EC72C8_OFFSET UNITYSDK_OFFSET(0x1E1BA740)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_F0660C4664397D94_OFFSET UNITYSDK_OFFSET(0x1E1BA830)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BA730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAllTeamMember_TypeDefinitionIndex = 23672;

	class TargetMapAllTeamMember : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean RemoveUnselectable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_37E4E72FD3B5C545(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllTeamMember*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllTeamMember*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_37E4E72FD3B5C545_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EBD544EAA6EC72C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllTeamMember* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllTeamMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_EBD544EAA6EC72C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74FF5CB42F2D8A1D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMember*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMember*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_74FF5CB42F2D8A1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F0660C4664397D94(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMember* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_F0660C4664397D94_OFFSET))(a1, a2);
		}
	};
}
