#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E7C2E14EFF880F30.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/MoleMole/ConfigNewbie_HighLightPrefabData.h"
#include "unitysdk/MoleMole/ConfigNewbie_TargetPath_ExtraType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x170D4C80)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x170D4C90)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x170D4ED0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA___BASE_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x170D4F10)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_HighLightDynamicData_TypeDefinitionIndex = 49754;

	class ConfigNewbie_HighLightDynamicData : public ::MoleMole::ConfigNewbie_HighLightPrefabData
	{
	public:
		::Enum_3_E7C2E14EFF880F30 Type; // 0x20
		::System::Int32 param; // 0x24
		::System::String* param1String; // 0x28
		::System::String* param2String; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::ConfigNewbie_TargetPath_ExtraType get_DataType()
		{
			return ((::MoleMole::ConfigNewbie_TargetPath_ExtraType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_LOADFROMBYTES_OFFSET))(this, flexMap);
		}

		::System::Void __base_LoadFromBytes(::FlexBuffers::FlxMap P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA___BASE_LOADFROMBYTES_OFFSET))(this, P0);
		}
	};
}
