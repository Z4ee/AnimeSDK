#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SceneTVMenuDataRow; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define CLASS_2_6D632684DB80530A_CLASS_1_17F54E506533EDC7__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E6BB0)

inline static constexpr unsigned int Class_2_6D632684DB80530A_Class_1_17F54E506533EDC7_TypeDefinitionIndex = 68772;

class Class_2_6D632684DB80530A_Class_1_17F54E506533EDC7 : public ::System::Object
{
public:
	::System::String* CLOPOKOLDFO; // 0x10
	::RPG::GameCore::SceneTVMenuDataRow* EABKOHGCHFP; // 0x18
	::UnityEngine::Texture2D* AACBKNJEJNC; // 0x20
	::System::Boolean JKCIODIHMNC; // 0x28
	::System::Int32 FPMKMOEOCHF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D632684DB80530A_CLASS_1_17F54E506533EDC7__CTOR_OFFSET))(this);
	}
};
