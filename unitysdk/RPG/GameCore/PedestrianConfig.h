#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PEDESTRIANCONFIG_METHOD_2_D9B960991E72708F_OFFSET UNITYSDK_OFFSET(0x1D41A550)
#define RPG_GAMECORE_PEDESTRIANCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41A600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PedestrianConfig_TypeDefinitionIndex = 17410;

	class PedestrianConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single SideBySideWidth; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEDESTRIANCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D9B960991E72708F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PedestrianConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PedestrianConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEDESTRIANCONFIG_METHOD_2_D9B960991E72708F_OFFSET))(a1, a2);
		}
	};
}
