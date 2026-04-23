#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightPropertyBindType.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }

#define RPG_GAMECORE_GRIDFIGHTTRAITLAYERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DD3F0)
#define RPG_GAMECORE_GRIDFIGHTTRAITLAYERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DD7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitLayerConfigRow_TypeDefinitionIndex = 12940;

	class GridFightTraitLayerConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* OverrideBEPropertyList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AllMemberPropertyList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* PropertyParamList; // 0x20
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* TraitMemberPropertyList; // 0x28
		::System::UInt32 Layer; // 0x30
		::RPG::Client::TextID PropertyDesc; // 0x38
		::RPG::GameCore::GridFightPropertyBindType PropertyBindType; // 0x48
		::RPG::GameCore::GridFightTrailLayerQuality Quality; // 0x4C
		::System::UInt32 TraitID; // 0x50
		::System::UInt32 MazebuffID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITLAYERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitLayerConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitLayerConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITLAYERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
