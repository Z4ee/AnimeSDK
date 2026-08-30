#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightShowFullScreenCutInType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTINPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18446CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowFullScreenCutInParam_TypeDefinitionIndex = 58294;

	class GridFightShowFullScreenCutInParam : public ::System::Object
	{
	public:
		::System::String* TraitSearchKey; // 0x10
		::System::String* OverrideImagePath; // 0x18
		::System::UInt32 TraitLv; // 0x20
		::RPG::GameCore::GridFightShowFullScreenCutInType CutInType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTINPARAM__CTOR_OFFSET))(this);
		}
	};
}
