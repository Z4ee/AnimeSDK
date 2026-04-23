#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELFLOOREDITORSYNCOPTIONS_METHOD_2_7BAF21312E9F4D24_OFFSET UNITYSDK_OFFSET(0x18A423B0)
#define RPG_GAMECORE_LEVELFLOOREDITORSYNCOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18A423F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorEditorSyncOptions_TypeDefinitionIndex = 16525;

	class LevelFloorEditorSyncOptions : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOOREDITORSYNCOPTIONS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7BAF21312E9F4D24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelFloorEditorSyncOptions*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelFloorEditorSyncOptions*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOOREDITORSYNCOPTIONS_METHOD_2_7BAF21312E9F4D24_OFFSET))(a1, a2);
		}
	};
}
