#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelCameraDirectionMask.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG_METHOD_3_95EB4828D39493BB_OFFSET UNITYSDK_OFFSET(0x1D113AF0)
#define RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG_METHOD_3_E91D21E6070257DC_OFFSET UNITYSDK_OFFSET(0x1D113B40)
#define RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D113B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelDirectionRuleConfig_TypeDefinitionIndex = 16581;

	class FourRotateVoxelDirectionRuleConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsDirectionRule; // 0x10
		::RPG::GameCore::FourRotateVoxelCameraDirectionMask RenderDirectionMask; // 0x14
		::RPG::GameCore::FourRotateVoxelCameraDirectionMask TriggerDirectionMask; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_95EB4828D39493BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelDirectionRuleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelDirectionRuleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG_METHOD_3_95EB4828D39493BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E91D21E6070257DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelDirectionRuleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelDirectionRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG_METHOD_3_E91D21E6070257DC_OFFSET))(a1, a2);
		}
	};
}
