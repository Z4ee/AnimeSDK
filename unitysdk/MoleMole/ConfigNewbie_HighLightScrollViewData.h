#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/MoleMole/ConfigNewbie_HighLightPrefabData.h"
#include "unitysdk/MoleMole/ConfigNewbie_TargetPath_ExtraType.h"

namespace SimpleJSON { class JSONClass; }
namespace System { class String; }

#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x19FFB340)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x19FFB350)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x19FFB480)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFB5A0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA___BASE_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x19FFB5E0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA___BASE_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x19FFB610)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_HighLightScrollViewData_TypeDefinitionIndex = 78126;

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

		::System::Void LoadFromJson(::SimpleJSON::JSONClass* jsonNode)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA_LOADFROMJSON_OFFSET))(this, jsonNode);
		}

		::System::Void __base_LoadFromBytes(::FlexBuffers::FlxMap P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA___BASE_LOADFROMBYTES_OFFSET))(this, P0);
		}

		::System::Void __base_LoadFromJson(::SimpleJSON::JSONClass* P0)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTSCROLLVIEWDATA___BASE_LOADFROMJSON_OFFSET))(this, P0);
		}
	};
}
