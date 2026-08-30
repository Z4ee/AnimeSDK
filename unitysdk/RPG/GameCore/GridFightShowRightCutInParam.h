#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightShowRightCutInTraitImgType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTINPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18446CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowRightCutInParam_TypeDefinitionIndex = 58297;

	class GridFightShowRightCutInParam : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::GridFightRole* Role; // 0x18
		::System::String* UIPrefabPath; // 0x20
		::System::String* TraitSearchKey; // 0x28
		::RPG::GameCore::GridFightShowRightCutInTraitImgType TraitShowImgType; // 0x30
		::System::UInt32 TraitLv; // 0x34
		::RPG::Client::TextID TitleTextID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTINPARAM__CTOR_OFFSET))(this);
		}
	};
}
