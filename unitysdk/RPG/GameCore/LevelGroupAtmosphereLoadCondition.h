#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION_METHOD_2_2797B037FB889F43_OFFSET UNITYSDK_OFFSET(0x1B036430)
#define RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION_METHOD_2_BDA8D3E2D8324F51_OFFSET UNITYSDK_OFFSET(0x1B036900)
#define RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B036960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupAtmosphereLoadCondition_TypeDefinitionIndex = 16525;

	class LevelGroupAtmosphereLoadCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2797B037FB889F43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION_METHOD_2_2797B037FB889F43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_BDA8D3E2D8324F51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION_METHOD_2_BDA8D3E2D8324F51_OFFSET))(a1, a2);
		}
	};
}
