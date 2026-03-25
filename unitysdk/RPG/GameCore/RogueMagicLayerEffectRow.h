#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17613C60)
#define RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17613ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicLayerEffectRow_TypeDefinitionIndex = 13589;

	class RogueMagicLayerEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x10
		::System::UInt32 LayerEffectID; // 0x18
		::RPG::Client::TextID LayerEffectDesc; // 0x20
		::RPG::Client::TextID LayerEffectName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicLayerEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicLayerEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYEREFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
