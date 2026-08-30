#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimOneWayEntryConfig; }

#define RPG_GAMECORE_FIVEDIMENTRYCONFIG_METHOD_3_575E8909B73A6184_OFFSET UNITYSDK_OFFSET(0x1D85C3D0)
#define RPG_GAMECORE_FIVEDIMENTRYCONFIG_METHOD_3_9EC689523426F43D_OFFSET UNITYSDK_OFFSET(0x1D85C410)
#define RPG_GAMECORE_FIVEDIMENTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85C400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntryConfig_TypeDefinitionIndex = 18323;

	class FiveDimEntryConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEnter; // 0x10
		::RPG::GameCore::FiveDimOneWayEntryConfig* EnterConfig; // 0x18
		::System::Boolean IsExit; // 0x20
		::RPG::GameCore::FiveDimOneWayEntryConfig* ExitConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTRYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_575E8909B73A6184(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTRYCONFIG_METHOD_3_575E8909B73A6184_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9EC689523426F43D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntryConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTRYCONFIG_METHOD_3_9EC689523426F43D_OFFSET))(a1, a2);
		}
	};
}
