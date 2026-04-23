#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG_METHOD_2_981B249362B99BF0_OFFSET UNITYSDK_OFFSET(0x18915780)
#define RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG_METHOD_2_CE8B26C14DE27B59_OFFSET UNITYSDK_OFFSET(0x18914EF0)
#define RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1890C190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPropBakedMoveConfig_TypeDefinitionIndex = 15794;

	class FiveDimPropBakedMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single UnitLength; // 0x10
		::System::Single MaxSpeed; // 0x14
		::System::Single ColliderSizeX; // 0x18
		::System::Single ColliderSizeY; // 0x1C
		::RPG::MVector3 ColliderCenter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CE8B26C14DE27B59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPropBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPropBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG_METHOD_2_CE8B26C14DE27B59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_981B249362B99BF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPropBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPropBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPBAKEDMOVECONFIG_METHOD_2_981B249362B99BF0_OFFSET))(a1, a2);
		}
	};
}
