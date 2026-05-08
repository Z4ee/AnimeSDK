#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6C9D8350BCED7528.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/MoleMole/ConfigNewbie_TargetPath.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x14957B50)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14957B40)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14957B00)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA___BASE_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x14957E90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_HighLightData_TypeDefinitionIndex = 56129;

	class ConfigNewbie_HighLightData : public ::MoleMole::ConfigNewbie_TargetPath
	{
	public:
		::System::Boolean disableClick; // 0x28
		::System::Boolean muteClickNextCB; // 0x29
		::System::Boolean AddSortingOrder; // 0x2A
		::System::Boolean SkipConsole; // 0x2B
		::Enum_3_6C9D8350BCED7528 LightLoopIgnorePlatform; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA__CTOR_1_OFFSET))(this, path);
		}

		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA_LOADFROMBYTES_OFFSET))(this, flexMap);
		}

		::System::Void __base_LoadFromBytes(::FlexBuffers::FlxMap P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA___BASE_LOADFROMBYTES_OFFSET))(this, P0);
		}
	};
}
