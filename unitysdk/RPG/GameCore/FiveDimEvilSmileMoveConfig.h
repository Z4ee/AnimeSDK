#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEvilSmileStateConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_METHOD_3_0D16E945EF6D8F9C_OFFSET UNITYSDK_OFFSET(0x1BA948F0)
#define RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_METHOD_3_67AD1788554F4E95_OFFSET UNITYSDK_OFFSET(0x1BA94940)
#define RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA94930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileMoveConfig_TypeDefinitionIndex = 16049;

	class FiveDimEvilSmileMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector3 ColliderCenter; // 0x40
		::System::Single AppearDistance; // 0x4C
		::System::String* AnimParamName; // 0x50
		::RPG::GameCore::HoyoTagContainer* TriggerTargetTag; // 0x58
		::System::String* TriggerEventName; // 0x60
		::System::String* OnHitPlayerEventName; // 0x68
		::System::Single TraceDistance; // 0x70
		::RPG::MVector3 TraceOffset; // 0x74
		::System::Single MoveTeleportDistance; // 0x80
		::System::Boolean IsIgnoreTeleportOnTrace; // 0x84
		::System::Boolean IsAdvanceStateConfig; // 0x85
		::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateConfig*>* StateConfigList; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0D16E945EF6D8F9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_METHOD_3_0D16E945EF6D8F9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67AD1788554F4E95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_METHOD_3_67AD1788554F4E95_OFFSET))(a1, a2);
		}
	};
}
