#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1733FBC0)
#define RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1733EAB0)
#define RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1733FBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCOverrideBehaviorParameter_TypeDefinitionIndex = 15861;

	class LevelNPCOverrideBehaviorParameter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCOverrideBehaviorParameter*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCOverrideBehaviorParameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCOverrideBehaviorParameter* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCOverrideBehaviorParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
