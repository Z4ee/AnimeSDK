#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelLockableFeatureType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1C1199A0)
#define RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C119960)
#define RPG_GAMECORE_LEVELLOCKFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C119990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLockFeature_TypeDefinitionIndex = 23138;

	class LevelLockFeature : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LevelLockableFeatureType LockFeatureType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelLockFeature*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelLockFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelLockFeature* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelLockFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
