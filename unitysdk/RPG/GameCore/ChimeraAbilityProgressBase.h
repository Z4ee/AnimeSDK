#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x187F1C20)
#define RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187F0960)
#define RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x187F16A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityProgressBase_TypeDefinitionIndex = 15020;

	class ChimeraAbilityProgressBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraAbilityProgressBase* NextProgress; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraAbilityProgressBase*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityProgressBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraAbilityProgressBase* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityProgressBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
