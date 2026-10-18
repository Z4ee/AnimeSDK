#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightShowRightCutInTraitImgType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTINPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE6D6D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowRightCutInParam_TypeDefinitionIndex = 58145;

	class GridFightShowRightCutInParam : public ::System::Object
	{
	public:
		::System::String* AugmentID; // 0x10
		::System::String* ImagePath; // 0x18
		::RPG::Client::GridFightRole* Role; // 0x20
		::System::String* TraitSearchKey; // 0x28
		::System::String* UIPrefabPath; // 0x30
		::System::UInt32 TraitLv; // 0x38
		::RPG::GameCore::GridFightShowRightCutInTraitImgType TraitShowImgType; // 0x3C
		::RPG::Client::TextID TitleTextID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTINPARAM__CTOR_OFFSET))(this);
		}
	};
}
