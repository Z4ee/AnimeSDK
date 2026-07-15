#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTEAMROOTOFFSET_METHOD_3_2D0F7F1A2ED33BCF_OFFSET UNITYSDK_OFFSET(0x1C60D350)
#define RPG_GAMECORE_SETTEAMROOTOFFSET_METHOD_3_95879A4769583B86_OFFSET UNITYSDK_OFFSET(0x1C60D390)
#define RPG_GAMECORE_SETTEAMROOTOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60D380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTeamRootOffset_TypeDefinitionIndex = 21686;

	class SetTeamRootOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Boolean Reset; // 0x1C
		::RPG::GameCore::TargetEvaluator* OriginPosTargetType; // 0x20
		::RPG::MVector3 Offset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMROOTOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D0F7F1A2ED33BCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTeamRootOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTeamRootOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMROOTOFFSET_METHOD_3_2D0F7F1A2ED33BCF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95879A4769583B86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTeamRootOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTeamRootOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTEAMROOTOFFSET_METHOD_3_95879A4769583B86_OFFSET))(a1, a2);
		}
	};
}
