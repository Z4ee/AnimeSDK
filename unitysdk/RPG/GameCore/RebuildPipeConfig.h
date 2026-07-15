#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REBUILDPIPECONFIG_METHOD_3_0716379D4C4414BA_OFFSET UNITYSDK_OFFSET(0x1B9BB0B0)
#define RPG_GAMECORE_REBUILDPIPECONFIG_METHOD_3_F7363F569DE7B579_OFFSET UNITYSDK_OFFSET(0x1B9BB0F0)
#define RPG_GAMECORE_REBUILDPIPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9BB0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RebuildPipeConfig_TypeDefinitionIndex = 17900;

	class RebuildPipeConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRebuildPipe; // 0x10
		::System::UInt32 Level; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDPIPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0716379D4C4414BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RebuildPipeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RebuildPipeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDPIPECONFIG_METHOD_3_0716379D4C4414BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7363F569DE7B579(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RebuildPipeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RebuildPipeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REBUILDPIPECONFIG_METHOD_3_F7363F569DE7B579_OFFSET))(a1, a2);
		}
	};
}
