#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/MoleMole/ConfigNewbie_HighLightPrefabData.h"
#include "unitysdk/MoleMole/ConfigNewbie_TargetPath_ExtraType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x17D337C0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x17D337D0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17D33900)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA___BASE_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x17D33940)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_HighLightScrollViewData_TypeDefinitionIndex = 56134;

	class ConfigNewbie_HighLightScrollViewData : public ::MoleMole::ConfigNewbie_HighLightPrefabData
	{
	public:
		::System::Boolean selectAll; // 0x20
		::System::String* itemIndexs; // 0x28
		::System::String* childPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::ConfigNewbie_TargetPath_ExtraType get_DataType()
		{
			return ((::MoleMole::ConfigNewbie_TargetPath_ExtraType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA_LOADFROMBYTES_OFFSET))(this, flexMap);
		}

		::System::Void __base_LoadFromBytes(::FlexBuffers::FlxMap P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA___BASE_LOADFROMBYTES_OFFSET))(this, P0);
		}
	};
}
