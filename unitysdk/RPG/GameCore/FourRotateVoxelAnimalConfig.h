#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELANIMALCONFIG_METHOD_2_9D5FA88583E866A2_OFFSET UNITYSDK_OFFSET(0x1892CAF0)
#define RPG_GAMECORE_FOURROTATEVOXELANIMALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1892CED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelAnimalConfig_TypeDefinitionIndex = 15853;

	class FourRotateVoxelAnimalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UIProgressLockIconPath; // 0x10
		::System::String* UIProgressUnlockIconPath; // 0x18
		::System::Int32 UICollectionColor; // 0x20
		::System::String* UIFinishPointIconPath; // 0x28
		::System::Int32 Brick2DMatIndex; // 0x30
		::System::String* Brick2DMaterialPath; // 0x38
		::System::String* CastEffectPath; // 0x40
		::System::String* LiquidEffectPath; // 0x48
		::System::String* SprayEffectPath; // 0x50
		::System::String* SplashEffectPath; // 0x58
		::System::String* GatherEffectPath; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELANIMALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9D5FA88583E866A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelAnimalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelAnimalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELANIMALCONFIG_METHOD_2_9D5FA88583E866A2_OFFSET))(a1, a2);
		}
	};
}
