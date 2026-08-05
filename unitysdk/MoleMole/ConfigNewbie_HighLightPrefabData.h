#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/MoleMole/ConfigNewbie_HighLightExtra.h"
#include "unitysdk/MoleMole/ConfigNewbie_TargetPath_ExtraType.h"

namespace SimpleJSON { class JSONClass; }
namespace System { class String; }

#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTPREFABDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x19AD8910)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTPREFABDATA_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x19AD8920)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTPREFABDATA_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x19AD89F0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTPREFABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD8AD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_HighLightPrefabData_TypeDefinitionIndex = 78123;

	class ConfigNewbie_HighLightPrefabData : public ::MoleMole::ConfigNewbie_HighLightExtra
	{
	public:
		::System::String* PrefabName; // 0x10
		::System::Boolean IsChild; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTPREFABDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::ConfigNewbie_TargetPath_ExtraType get_DataType()
		{
			return ((::MoleMole::ConfigNewbie_TargetPath_ExtraType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTPREFABDATA_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTPREFABDATA_LOADFROMBYTES_OFFSET))(this, flexMap);
		}

		::System::Void LoadFromJson(::SimpleJSON::JSONClass* jsonNode)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTPREFABDATA_LOADFROMJSON_OFFSET))(this, jsonNode);
		}
	};
}
