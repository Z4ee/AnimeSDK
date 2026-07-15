#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEITEMUSEBUFFGAMEMODEDROPCONFIG_METHOD_2_EA66BE8F8B96B8E4_OFFSET UNITYSDK_OFFSET(0x1AF4B560)
#define RPG_GAMECORE_MAZEITEMUSEBUFFGAMEMODEDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4B5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeItemUseBuffGameModeDropConfig_TypeDefinitionIndex = 20953;

	class MazeItemUseBuffGameModeDropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEITEMUSEBUFFGAMEMODEDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EA66BE8F8B96B8E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeItemUseBuffGameModeDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeItemUseBuffGameModeDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEITEMUSEBUFFGAMEMODEDROPCONFIG_METHOD_2_EA66BE8F8B96B8E4_OFFSET))(a1, a2);
		}
	};
}
