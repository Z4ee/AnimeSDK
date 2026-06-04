#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETSHENJUNACTIONBAR_METHOD_3_46393CC2A5BF6A2E_OFFSET UNITYSDK_OFFSET(0x19C5D870)
#define RPG_GAMECORE_SETSHENJUNACTIONBAR_METHOD_3_9679308B6CC9BDF9_OFFSET UNITYSDK_OFFSET(0x19C5D7F0)
#define RPG_GAMECORE_SETSHENJUNACTIONBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x19C5D840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetShenJunActionBar_TypeDefinitionIndex = 21679;

	class SetShenJunActionBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Level1LayerCount; // 0x18
		::System::UInt32 Level2LayerCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSHENJUNACTIONBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9679308B6CC9BDF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetShenJunActionBar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetShenJunActionBar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSHENJUNACTIONBAR_METHOD_3_9679308B6CC9BDF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46393CC2A5BF6A2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetShenJunActionBar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetShenJunActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSHENJUNACTIONBAR_METHOD_3_46393CC2A5BF6A2E_OFFSET))(a1, a2);
		}
	};
}
