#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_METHOD_3_65DE90A7152F3969_OFFSET UNITYSDK_OFFSET(0x1D41A970)
#define RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_METHOD_3_EA2F425E77125AAC_OFFSET UNITYSDK_OFFSET(0x1D41A8A0)
#define RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41A960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PeiPeiChallengeUpdateCheckPoint_TypeDefinitionIndex = 20947;

	class PeiPeiChallengeUpdateCheckPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA2F425E77125AAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_METHOD_3_EA2F425E77125AAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65DE90A7152F3969(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PeiPeiChallengeUpdateCheckPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGEUPDATECHECKPOINT_METHOD_3_65DE90A7152F3969_OFFSET))(a1, a2);
		}
	};
}
