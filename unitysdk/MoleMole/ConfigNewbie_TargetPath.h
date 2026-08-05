#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/MoleMole/ConfigNewbie_TargetPath_ExtraType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNewbie_HighLightExtra; }
namespace SimpleJSON { class JSONClass; }
namespace System { class String; }

#define MOLEMOLE_CONFIGNEWBIE_TARGETPATH_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1A94CC90)
#define MOLEMOLE_CONFIGNEWBIE_TARGETPATH_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1A94CCF0)
#define MOLEMOLE_CONFIGNEWBIE_TARGETPATH_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1A94CD00)
#define MOLEMOLE_CONFIGNEWBIE_TARGETPATH_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x1A94CFF0)
#define MOLEMOLE_CONFIGNEWBIE_TARGETPATH_PARSEEXTRADATA_1_OFFSET UNITYSDK_OFFSET(0x1A94CED0)
#define MOLEMOLE_CONFIGNEWBIE_TARGETPATH_PARSEEXTRADATA_OFFSET UNITYSDK_OFFSET(0x1A94D200)
#define MOLEMOLE_CONFIGNEWBIE_TARGETPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A94CC80)
#define MOLEMOLE_CONFIGNEWBIE_TARGETPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94CC40)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_TargetPath_TypeDefinitionIndex = 78127;

	class ConfigNewbie_TargetPath : public ::System::Object
	{
	public:
		::System::String* _path; // 0x10
		::MoleMole::ConfigNewbie_TargetPath_ExtraType ExtraDataType; // 0x18
		::MoleMole::ConfigNewbie_HighLightExtra* ExtraData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_TARGETPATH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_TARGETPATH__CTOR_1_OFFSET))(this, path);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_TARGETPATH_GET_ISEMPTY_OFFSET))(this);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_TARGETPATH_GET_PATH_OFFSET))(this);
		}

		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_TARGETPATH_LOADFROMBYTES_OFFSET))(this, flexMap);
		}

		::System::Void LoadFromJson(::SimpleJSON::JSONClass* jsonNode)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_TARGETPATH_LOADFROMJSON_OFFSET))(this, jsonNode);
		}

		::System::Void ParseExtraData(::MoleMole::ConfigNewbie_TargetPath_ExtraType extraType, ::SimpleJSON::JSONClass* jsonNode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNewbie_TargetPath_ExtraType, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_TARGETPATH_PARSEEXTRADATA_OFFSET))(this, extraType, jsonNode);
		}

		::System::Void ParseExtraData_1(::MoleMole::ConfigNewbie_TargetPath_ExtraType extraType, ::FlexBuffers::FlxMap flxMap)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNewbie_TargetPath_ExtraType, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_TARGETPATH_PARSEEXTRADATA_1_OFFSET))(this, extraType, flxMap);
		}
	};
}
