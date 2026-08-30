#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE_METHOD_3_0A855D976D101053_OFFSET UNITYSDK_OFFSET(0x1D93B620)
#define RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE_METHOD_3_430FC500E0012916_OFFSET UNITYSDK_OFFSET(0x1D93B6F0)
#define RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D93B6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicOptionalLayerGate_TypeDefinitionIndex = 21877;

	class RogueMagicOptionalLayerGate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A855D976D101053(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicOptionalLayerGate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicOptionalLayerGate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE_METHOD_3_0A855D976D101053_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_430FC500E0012916(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicOptionalLayerGate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicOptionalLayerGate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICOPTIONALLAYERGATE_METHOD_3_430FC500E0012916_OFFSET))(a1, a2);
		}
	};
}
