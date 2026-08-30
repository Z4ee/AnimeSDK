#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMONESIDEPASSCONFIG_METHOD_2_C67A0DDAE3F614E5_OFFSET UNITYSDK_OFFSET(0x1D86F820)
#define RPG_GAMECORE_FIVEDIMONESIDEPASSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D86F930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimOneSidePassConfig_TypeDefinitionIndex = 18331;

	class FiveDimOneSidePassConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameEvent* OnEntityPass; // 0x10
		::RPG::GameCore::LittleGameEvent* OnEntityEnter; // 0x18
		::RPG::GameCore::LittleGameEvent* OnEntityQuit; // 0x20
		::RPG::GameCore::FiveDimEffectItem* GuestPassEffect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONESIDEPASSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C67A0DDAE3F614E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimOneSidePassConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimOneSidePassConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONESIDEPASSCONFIG_METHOD_2_C67A0DDAE3F614E5_OFFSET))(a1, a2);
		}
	};
}
