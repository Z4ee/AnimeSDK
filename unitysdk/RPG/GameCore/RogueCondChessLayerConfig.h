#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_METHOD_6_1FD5A18C975C5B11_OFFSET UNITYSDK_OFFSET(0x1C4AEA00)
#define RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_METHOD_6_2415552AA638EB35_OFFSET UNITYSDK_OFFSET(0x1C4AEA50)
#define RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AEA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondChessLayerConfig_TypeDefinitionIndex = 19039;

	class RogueCondChessLayerConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1FD5A18C975C5B11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondChessLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondChessLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_METHOD_6_1FD5A18C975C5B11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_2415552AA638EB35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondChessLayerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondChessLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_METHOD_6_2415552AA638EB35_OFFSET))(a1, a2);
		}
	};
}
