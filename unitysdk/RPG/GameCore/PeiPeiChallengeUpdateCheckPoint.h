#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_METHOD_3_65DE90A7152F3969_OFFSET UNITYSDK_OFFSET(0x18BDA820)
#define RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_METHOD_3_EA7B040E62D52275_OFFSET UNITYSDK_OFFSET(0x18BDA710)
#define RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDA7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PeiPeiChallengeUpdateCheckPoint_TypeDefinitionIndex = 20166;

	class PeiPeiChallengeUpdateCheckPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA7B040E62D52275(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_METHOD_3_EA7B040E62D52275_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65DE90A7152F3969(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_METHOD_3_65DE90A7152F3969_OFFSET))(a1, a2);
		}
	};
}
