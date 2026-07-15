#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEMOVECONFIG_METHOD_2_122FA0AB612CB667_OFFSET UNITYSDK_OFFSET(0x1B703F70)
#define RPG_GAMECORE_CAKERACEMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7040D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceMoveConfig_TypeDefinitionIndex = 17677;

	class CakeRaceMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Desc; // 0x10
		::RPG::GameCore::CakeRaceMoveState MoveState; // 0x18
		::RPG::GameCore::CakeRaceMoveStateConfig* MoveStateConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_122FA0AB612CB667(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMOVECONFIG_METHOD_2_122FA0AB612CB667_OFFSET))(a1, a2);
		}
	};
}
