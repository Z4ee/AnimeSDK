#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEvilSmileStateConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_METHOD_3_0457A4B52FE555F8_OFFSET UNITYSDK_OFFSET(0x1973BF60)
#define RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_METHOD_3_8BD71A83C733D1DA_OFFSET UNITYSDK_OFFSET(0x1973BF10)
#define RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1973BF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileMoveConfig_TypeDefinitionIndex = 15875;

	class FiveDimEvilSmileMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector3 ColliderCenter; // 0x40
		::System::Single AppearDistance; // 0x4C
		::System::String* AnimParamName; // 0x50
		::RPG::GameCore::HoyoTagContainer* TriggerTargetTag; // 0x58
		::System::String* TriggerEventName; // 0x60
		::System::Single TraceDistance; // 0x68
		::RPG::MVector3 TraceOffset; // 0x6C
		::System::Single MoveTeleportDistance; // 0x78
		::System::Boolean IsAdvanceStateConfig; // 0x7C
		::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateConfig*>* StateConfigList; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8BD71A83C733D1DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_METHOD_3_8BD71A83C733D1DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0457A4B52FE555F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_METHOD_3_0457A4B52FE555F8_OFFSET))(a1, a2);
		}
	};
}
