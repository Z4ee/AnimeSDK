#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHMAGICUNITRANDOMCONFIG_METHOD_2_F48DF5CF93BD3769_OFFSET UNITYSDK_OFFSET(0x1CCD0860)
#define RPG_GAMECORE_ROGUEWORKBENCHMAGICUNITRANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD08A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchMagicUnitRandomConfig_TypeDefinitionIndex = 17818;

	class RogueWorkbenchMagicUnitRandomConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHMAGICUNITRANDOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F48DF5CF93BD3769(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchMagicUnitRandomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchMagicUnitRandomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHMAGICUNITRANDOMCONFIG_METHOD_2_F48DF5CF93BD3769_OFFSET))(a1, a2);
		}
	};
}
