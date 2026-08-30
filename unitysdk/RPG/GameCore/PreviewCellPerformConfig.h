#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesPreviewCellType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PREVIEWCELLPERFORMCONFIG_METHOD_2_4AD9CE90249A19E5_OFFSET UNITYSDK_OFFSET(0x1D16F0E0)
#define RPG_GAMECORE_PREVIEWCELLPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16F320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreviewCellPerformConfig_TypeDefinitionIndex = 18223;

	class PreviewCellPerformConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingFesPreviewCellType Type; // 0x10
		::System::Single PositionX; // 0x14
		::System::Single PositionZ; // 0x18
		::System::Int32 ScaleX; // 0x1C
		::System::Int32 ScaleZ; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREVIEWCELLPERFORMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4AD9CE90249A19E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreviewCellPerformConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreviewCellPerformConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREVIEWCELLPERFORMCONFIG_METHOD_2_4AD9CE90249A19E5_OFFSET))(a1, a2);
		}
	};
}
