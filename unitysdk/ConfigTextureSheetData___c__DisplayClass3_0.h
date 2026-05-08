#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x120BB630)
#define CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS3_0__RELOADFROMFILEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x120BB640)

inline static constexpr unsigned int ConfigTextureSheetData___c__DisplayClass3_0_TypeDefinitionIndex = 44053;

class ConfigTextureSheetData___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* finishCallback; // 0x10
	::System::Action_1<::System::Single>* moveOneStepCallback; // 0x18
	::System::String* dataName; // 0x20
	::System::Single progressSpan; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReloadFromFileAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS3_0__RELOADFROMFILEASYNC_B__0_OFFSET))(this);
	}
};
