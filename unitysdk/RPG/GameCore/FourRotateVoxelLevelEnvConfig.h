#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELENVCONFIG_METHOD_2_AAC2ADD8376B6644_OFFSET UNITYSDK_OFFSET(0x1B97BF40)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELENVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97C0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelEnvConfig_TypeDefinitionIndex = 16087;

	class FourRotateVoxelLevelEnvConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EnvProfilePath; // 0x10
		::System::String* SkyboxPath; // 0x18
		::System::String* BGMGroupName; // 0x20
		::System::String* BGMStateName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELENVCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AAC2ADD8376B6644(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelLevelEnvConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelLevelEnvConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELENVCONFIG_METHOD_2_AAC2ADD8376B6644_OFFSET))(a1, a2);
		}
	};
}
