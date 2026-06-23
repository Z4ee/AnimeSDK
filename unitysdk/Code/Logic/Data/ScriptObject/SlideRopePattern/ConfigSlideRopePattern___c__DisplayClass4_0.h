#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::SlideRopePattern { class ConfigSlideRopePattern; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11841AC0)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN___C__DISPLAYCLASS4_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x11841D60)

namespace Code::Logic::Data::ScriptObject::SlideRopePattern
{
	inline static constexpr unsigned int ConfigSlideRopePattern___c__DisplayClass4_0_TypeDefinitionIndex = 67589;

	class ConfigSlideRopePattern___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Code::Logic::Data::ScriptObject::SlideRopePattern::ConfigSlideRopePattern*>* __9__0; // 0x10
		::System::Action* complete; // 0x18
		::System::Int32 inLoadingRef; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_b__0(::Code::Logic::Data::ScriptObject::SlideRopePattern::ConfigSlideRopePattern* config)
		{
			return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::SlideRopePattern::ConfigSlideRopePattern*))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN___C__DISPLAYCLASS4_0__RELOADFROMFILE_B__0_OFFSET))(this, config);
		}
	};
}
