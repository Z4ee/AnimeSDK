#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimAnimatorListenType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMANIMATORLISTENCONFIG_METHOD_2_526F687203DBA239_OFFSET UNITYSDK_OFFSET(0x1D0A0920)
#define RPG_GAMECORE_FIVEDIMANIMATORLISTENCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A0B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAnimatorListenConfig_TypeDefinitionIndex = 18433;

	class FiveDimAnimatorListenConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 LayerIndex; // 0x10
		::System::String* StateName; // 0x18
		::System::Int32 StateHash; // 0x20
		::RPG::GameCore::FiveDimAnimatorListenType ListenType; // 0x24
		::System::Single ListenRatio; // 0x28
		::RPG::GameCore::LittleGameEvent* Event; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMANIMATORLISTENCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_526F687203DBA239(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAnimatorListenConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAnimatorListenConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMANIMATORLISTENCONFIG_METHOD_2_526F687203DBA239_OFFSET))(a1, a2);
		}
	};
}
