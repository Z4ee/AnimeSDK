#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1948F110)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN___C__DISPLAYCLASS5_0__RELOADFROMFILEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1948F120)

namespace Code::Logic::Data::ScriptObject::SlideRopePattern
{
	inline static constexpr unsigned int ConfigSlideRopePattern___c__DisplayClass5_0_TypeDefinitionIndex = 74500;

	class ConfigSlideRopePattern___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* moveOneStepCallback; // 0x10
		::System::String* dataName; // 0x18
		::System::Action_1<::System::String*>* finishCallback; // 0x20
		::System::Single progressSpan; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFileAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN___C__DISPLAYCLASS5_0__RELOADFROMFILEASYNC_B__0_OFFSET))(this);
		}
	};
}
