#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELGAMEMODECONFIG_METHOD_2_8348F7234F39CC0E_OFFSET UNITYSDK_OFFSET(0x1B97BA40)
#define RPG_GAMECORE_FOURROTATEVOXELGAMEMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97BAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelGameModeConfig_TypeDefinitionIndex = 16088;

	class FourRotateVoxelGameModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GameModeTaskProgressText; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGAMEMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8348F7234F39CC0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelGameModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelGameModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGAMEMODECONFIG_METHOD_2_8348F7234F39CC0E_OFFSET))(a1, a2);
		}
	};
}
