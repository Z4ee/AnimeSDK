#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER_METHOD_3_C1471F4729292102_OFFSET UNITYSDK_OFFSET(0x1865A170)
#define RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER_METHOD_3_D0230A1F627BA26B_OFFSET UNITYSDK_OFFSET(0x1865A1F0)
#define RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1865A1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcHeadLookAtPlayer_TypeDefinitionIndex = 20595;

	class AdvNpcHeadLookAtPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C1471F4729292102(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcHeadLookAtPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcHeadLookAtPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER_METHOD_3_C1471F4729292102_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D0230A1F627BA26B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcHeadLookAtPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcHeadLookAtPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHEADLOOKATPLAYER_METHOD_3_D0230A1F627BA26B_OFFSET))(a1, a2);
		}
	};
}
