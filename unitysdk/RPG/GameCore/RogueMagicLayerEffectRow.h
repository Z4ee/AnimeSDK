#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3EE0E0)
#define RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EE350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicLayerEffectRow_TypeDefinitionIndex = 14693;

	class RogueMagicLayerEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x10
		::RPG::Client::TextID LayerEffectName; // 0x18
		::RPG::Client::TextID LayerEffectDesc; // 0x28
		::System::UInt32 LayerEffectID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicLayerEffectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicLayerEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
