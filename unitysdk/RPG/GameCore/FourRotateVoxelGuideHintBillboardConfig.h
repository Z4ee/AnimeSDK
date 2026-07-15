#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FourRotateVoxelLevelVarConditionSet; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG_METHOD_3_6C1656916F918F45_OFFSET UNITYSDK_OFFSET(0x1B97BB40)
#define RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG_METHOD_3_AB199334C7F4F092_OFFSET UNITYSDK_OFFSET(0x1B97BB00)
#define RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97BB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelGuideHintBillboardConfig_TypeDefinitionIndex = 16120;

	class FourRotateVoxelGuideHintBillboardConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsGuideHintBillboard; // 0x10
		::System::String* AttachPointName; // 0x18
		::RPG::GameCore::FourRotateVoxelLevelVarConditionSet* ActiveCondition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB199334C7F4F092(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG_METHOD_3_AB199334C7F4F092_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C1656916F918F45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGUIDEHINTBILLBOARDCONFIG_METHOD_3_6C1656916F918F45_OFFSET))(a1, a2);
		}
	};
}
