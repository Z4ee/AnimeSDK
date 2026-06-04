#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimMoveConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELMOVECONFIG_METHOD_2_6A9E1BD291041AAF_OFFSET UNITYSDK_OFFSET(0x19769830)
#define RPG_GAMECORE_FOURROTATEVOXELMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1976AE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelMoveConfig_TypeDefinitionIndex = 15911;

	class FourRotateVoxelMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 MaxRotateCnt; // 0x10
		::System::Single MaxFallDownVoxelSize; // 0x14
		::System::Single FallDownDelayResetTime; // 0x18
		::RPG::GameCore::FiveDimMoveConfig* BaseMoveConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6A9E1BD291041AAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMOVECONFIG_METHOD_2_6A9E1BD291041AAF_OFFSET))(a1, a2);
		}
	};
}
