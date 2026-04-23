#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimOneWayEntryConfig; }

#define RPG_GAMECORE_FIVEDIMENTRYCONFIG_METHOD_3_7C82697C0859388C_OFFSET UNITYSDK_OFFSET(0x188FFB60)
#define RPG_GAMECORE_FIVEDIMENTRYCONFIG_METHOD_3_9EC689523426F43D_OFFSET UNITYSDK_OFFSET(0x188FFBD0)
#define RPG_GAMECORE_FIVEDIMENTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188FFBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntryConfig_TypeDefinitionIndex = 17604;

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

		static ::System::Void Method_3_7C82697C0859388C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTRYCONFIG_METHOD_3_7C82697C0859388C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9EC689523426F43D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntryConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTRYCONFIG_METHOD_3_9EC689523426F43D_OFFSET))(a1, a2);
		}
	};
}
