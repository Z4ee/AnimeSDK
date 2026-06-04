#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEITEMUSEBUFFDROPCONFIG_METHOD_2_9FDF98F9D53E4D99_OFFSET UNITYSDK_OFFSET(0x199014B0)
#define RPG_GAMECORE_MAZEITEMUSEBUFFDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199014F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeItemUseBuffDropConfig_TypeDefinitionIndex = 20537;

	class MazeItemUseBuffDropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEITEMUSEBUFFDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9FDF98F9D53E4D99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeItemUseBuffDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeItemUseBuffDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEITEMUSEBUFFDROPCONFIG_METHOD_2_9FDF98F9D53E4D99_OFFSET))(a1, a2);
		}
	};
}
