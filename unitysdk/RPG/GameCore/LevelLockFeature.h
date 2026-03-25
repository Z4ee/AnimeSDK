#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelLockableFeatureType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1733B060)
#define RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1733AFE0)
#define RPG_GAMECORE_LEVELLOCKFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1733B030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLockFeature_TypeDefinitionIndex = 21630;

	class LevelLockFeature : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LevelLockableFeatureType LockFeatureType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelLockFeature*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelLockFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelLockFeature* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelLockFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURE_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
