#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR_METHOD_3_4DC851B55E8B22EF_OFFSET UNITYSDK_OFFSET(0x1D599860)
#define RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR_METHOD_3_E94EA777DC000894_OFFSET UNITYSDK_OFFSET(0x1D5998B0)
#define RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5998A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncMonsterLightByCameraDir_TypeDefinitionIndex = 22717;

	class SyncMonsterLightByCameraDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSync; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DC851B55E8B22EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncMonsterLightByCameraDir*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncMonsterLightByCameraDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR_METHOD_3_4DC851B55E8B22EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E94EA777DC000894(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncMonsterLightByCameraDir* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncMonsterLightByCameraDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCMONSTERLIGHTBYCAMERADIR_METHOD_3_E94EA777DC000894_OFFSET))(a1, a2);
		}
	};
}
