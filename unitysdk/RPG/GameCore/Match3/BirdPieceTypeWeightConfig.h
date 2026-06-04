#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDPIECETYPEWEIGHTCONFIG_METHOD_2_8D003DEB89E5CC7F_OFFSET UNITYSDK_OFFSET(0x198E0080)
#define RPG_GAMECORE_MATCH3_BIRDPIECETYPEWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198E0270)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdPieceTypeWeightConfig_TypeDefinitionIndex = 23576;

	class BirdPieceTypeWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ItemPackCount; // 0x10
		::System::Boolean UseWeight; // 0x14
		::System::UInt32 FruitWeight; // 0x18
		::System::UInt32 ItemPackWeight; // 0x1C
		::System::UInt32 BreakCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDPIECETYPEWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8D003DEB89E5CC7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDPIECETYPEWEIGHTCONFIG_METHOD_2_8D003DEB89E5CC7F_OFFSET))(a1, a2);
		}
	};
}
