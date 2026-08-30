#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_1066E12C64BCCDA8_OFFSET UNITYSDK_OFFSET(0x1D5B59C0)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_47A9420B7D9791F5_OFFSET UNITYSDK_OFFSET(0x1D5B59E0)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_8A8E39DE2173D4F3_OFFSET UNITYSDK_OFFSET(0x1D5B5960)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_B7F0B12C9F785072_OFFSET UNITYSDK_OFFSET(0x1D5B58E0)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B5950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapTeamEntity_TypeDefinitionIndex = 23670;

	class TargetMapTeamEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7F0B12C9F785072(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapTeamEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapTeamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_B7F0B12C9F785072_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A8E39DE2173D4F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapTeamEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_8A8E39DE2173D4F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1066E12C64BCCDA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_1066E12C64BCCDA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47A9420B7D9791F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_47A9420B7D9791F5_OFFSET))(a1, a2);
		}
	};
}
