#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPropertyBindType.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }

#define RPG_GAMECORE_GRIDFIGHTTRAITOLDLAYERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DD9E0)
#define RPG_GAMECORE_GRIDFIGHTTRAITOLDLAYERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DDCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitOldLayerConfigRow_TypeDefinitionIndex = 12971;

	class GridFightTraitOldLayerConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* TraitMemberPropertyList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AllMemberPropertyList; // 0x18
		::RPG::GameCore::GridFightPropertyBindType PropertyBindType; // 0x20
		::System::UInt32 Layer; // 0x24
		::System::UInt32 ExistSeason; // 0x28
		::System::UInt32 MazebuffID; // 0x2C
		::System::UInt32 TraitID; // 0x30
		::RPG::GameCore::GridFightTrailLayerQuality Quality; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITOLDLAYERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITOLDLAYERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
