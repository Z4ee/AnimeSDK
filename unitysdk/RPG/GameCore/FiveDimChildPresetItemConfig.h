#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCHILDPRESETITEMCONFIG_METHOD_2_D13E2ED16E963FA0_OFFSET UNITYSDK_OFFSET(0x19735290)
#define RPG_GAMECORE_FIVEDIMCHILDPRESETITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197354C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimChildPresetItemConfig_TypeDefinitionIndex = 15892;

	class FiveDimChildPresetItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 LocalPosition; // 0x10
		::RPG::MVector3 LocalRotation; // 0x1C
		::System::String* PresetName; // 0x28
		::System::Boolean IsGridView; // 0x30
		::System::UInt32 GridSizeX; // 0x34
		::System::UInt32 GridSizeY; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHILDPRESETITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D13E2ED16E963FA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChildPresetItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChildPresetItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHILDPRESETITEMCONFIG_METHOD_2_D13E2ED16E963FA0_OFFSET))(a1, a2);
		}
	};
}
