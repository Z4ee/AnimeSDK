#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEPARENTCONFIG_METHOD_3_90010129E71B1FEC_OFFSET UNITYSDK_OFFSET(0x1D204F20)
#define RPG_GAMECORE_LITTLEGAMEPARENTCONFIG_METHOD_3_99DF50D858C26FD1_OFFSET UNITYSDK_OFFSET(0x1D204FD0)
#define RPG_GAMECORE_LITTLEGAMEPARENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D204FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameParentConfig_TypeDefinitionIndex = 18636;

	class LittleGameParentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 ParentID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPARENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90010129E71B1FEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameParentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameParentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPARENTCONFIG_METHOD_3_90010129E71B1FEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99DF50D858C26FD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameParentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameParentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPARENTCONFIG_METHOD_3_99DF50D858C26FD1_OFFSET))(a1, a2);
		}
	};
}
