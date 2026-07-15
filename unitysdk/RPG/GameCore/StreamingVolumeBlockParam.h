#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STREAMINGVOLUMEBLOCKPARAM_METHOD_2_5D5A3D691B308399_OFFSET UNITYSDK_OFFSET(0x1B41F300)
#define RPG_GAMECORE_STREAMINGVOLUMEBLOCKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B41F540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingVolumeBlockParam_TypeDefinitionIndex = 18368;

	class StreamingVolumeBlockParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BlockAlias; // 0x10
		::System::Single RangeBegin; // 0x18
		::System::Single RangeEnd; // 0x1C
		::System::Boolean ForceHLOD; // 0x20
		::System::Boolean ForceHide; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMEBLOCKPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5D5A3D691B308399(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingVolumeBlockParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingVolumeBlockParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMEBLOCKPARAM_METHOD_2_5D5A3D691B308399_OFFSET))(a1, a2);
		}
	};
}
