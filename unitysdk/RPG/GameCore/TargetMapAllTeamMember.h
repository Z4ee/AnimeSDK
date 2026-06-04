#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_08197ABF01E7732B_OFFSET UNITYSDK_OFFSET(0x19D11B90)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_3989045D9D8953F2_OFFSET UNITYSDK_OFFSET(0x19D11BE0)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_B7229ADE2018A2FC_OFFSET UNITYSDK_OFFSET(0x19D119C0)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_EBD544EAA6EC72C8_OFFSET UNITYSDK_OFFSET(0x19D11AD0)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D11AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAllTeamMember_TypeDefinitionIndex = 22629;

	class TargetMapAllTeamMember : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean RemoveUnselectable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7229ADE2018A2FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllTeamMember*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllTeamMember*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_B7229ADE2018A2FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EBD544EAA6EC72C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllTeamMember* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllTeamMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_EBD544EAA6EC72C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08197ABF01E7732B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMember*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMember*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_08197ABF01E7732B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3989045D9D8953F2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMember* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_3989045D9D8953F2_OFFSET))(a1, a2);
		}
	};
}
