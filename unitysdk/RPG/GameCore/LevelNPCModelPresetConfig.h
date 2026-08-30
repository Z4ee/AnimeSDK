#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCMODELPRESETCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C11DCA0)
#define RPG_GAMECORE_LEVELNPCMODELPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11E4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCModelPresetConfig_TypeDefinitionIndex = 17080;

	class LevelNPCModelPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EyeCtrlKey; // 0x10
		::System::String* FaceExpressionKey; // 0x18
		::System::String* EyeBloomKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCMODELPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCModelPresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCModelPresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCMODELPRESETCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
