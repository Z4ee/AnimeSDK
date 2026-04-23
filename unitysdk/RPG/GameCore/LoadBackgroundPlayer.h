#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOADBACKGROUNDPLAYER_METHOD_3_E71936373F5BE682_OFFSET UNITYSDK_OFFSET(0x18A71490)
#define RPG_GAMECORE_LOADBACKGROUNDPLAYER_METHOD_3_F5F5210F78AE67EB_OFFSET UNITYSDK_OFFSET(0x18A71510)
#define RPG_GAMECORE_LOADBACKGROUNDPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A714E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadBackgroundPlayer_TypeDefinitionIndex = 19160;

	class LoadBackgroundPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSyncLoad; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBACKGROUNDPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E71936373F5BE682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadBackgroundPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadBackgroundPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBACKGROUNDPLAYER_METHOD_3_E71936373F5BE682_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F5F5210F78AE67EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadBackgroundPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadBackgroundPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBACKGROUNDPLAYER_METHOD_3_F5F5210F78AE67EB_OFFSET))(a1, a2);
		}
	};
}
