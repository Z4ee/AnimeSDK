#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace Code::Logic::Data::ScriptObject::SlideRopePattern { class SlideRopePatternConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x118412D0)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x11841AD0)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x11841410)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN__CCTOR_OFFSET UNITYSDK_OFFSET(0x11841CC0)
#define CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x11841BE0)

namespace Code::Logic::Data::ScriptObject::SlideRopePattern
{
	inline static constexpr unsigned int ConfigSlideRopePattern_TypeDefinitionIndex = 67587;

	class ConfigSlideRopePattern : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::SlideRopePattern::SlideRopePatternConfig*>** StaticGet__dicRuntimeSlideRopePatternConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::SlideRopePattern::SlideRopePatternConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSlideRopePattern_TypeDefinitionIndex)->GetStaticField(0x38C90);
		}
		// static const ::System::String* DEFAULT_KEY; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Code::Logic::Data::ScriptObject::SlideRopePattern::SlideRopePatternConfig*>* DicSlideRopePatternConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN__CCTOR_OFFSET))();
		}

		static ::Code::Logic::Data::ScriptObject::SlideRopePattern::SlideRopePatternConfig* GetConfig(::System::String* key)
		{
			return ((::Code::Logic::Data::ScriptObject::SlideRopePattern::SlideRopePatternConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN_GETCONFIG_OFFSET))(key);
		}

		static ::System::Void ReloadFromFile(::System::Boolean isAsync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN_RELOADFROMFILE_OFFSET))(isAsync, complete);
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_SLIDEROPEPATTERN_CONFIGSLIDEROPEPATTERN_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}
	};
}
