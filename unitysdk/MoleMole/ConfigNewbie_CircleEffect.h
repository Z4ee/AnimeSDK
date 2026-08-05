#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNewbie_TargetPath; }
namespace SimpleJSON { class JSONClass; }

#define MOLEMOLE_CONFIGNEWBIE_CIRCLEEFFECT_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x19FFB020)
#define MOLEMOLE_CONFIGNEWBIE_CIRCLEEFFECT_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x19FFB1B0)
#define MOLEMOLE_CONFIGNEWBIE_CIRCLEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFB320)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_CircleEffect_TypeDefinitionIndex = 78130;

	class ConfigNewbie_CircleEffect : public ::System::Object
	{
	public:
		::MoleMole::ConfigNewbie_TargetPath* targetPath; // 0x10
		::System::Int32 Ratio; // 0x18
		::System::Int32 Duration; // 0x1C
		::System::Int32 Delay; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_CIRCLEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_CIRCLEEFFECT_LOADFROMBYTES_OFFSET))(this, flexMap);
		}

		::System::Void LoadFromJson(::SimpleJSON::JSONClass* jsonNode)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_CIRCLEEFFECT_LOADFROMJSON_OFFSET))(this, jsonNode);
		}
	};
}
