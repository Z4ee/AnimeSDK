#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/StringOptions.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define DG_TWEENING_PLUGINS_STRINGPLUGIN_APPEND_OFFSET UNITYSDK_OFFSET(0x1C4DAA30)
#define DG_TWEENING_PLUGINS_STRINGPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1C4DA1C0)
#define DG_TWEENING_PLUGINS_STRINGPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1C4DA3E0)
#define DG_TWEENING_PLUGINS_STRINGPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1C4DA3A0)
#define DG_TWEENING_PLUGINS_STRINGPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1C4DA190)
#define DG_TWEENING_PLUGINS_STRINGPLUGIN_SCRAMBLEDCHARSTOUSE_OFFSET UNITYSDK_OFFSET(0x1C4DB6A0)
#define DG_TWEENING_PLUGINS_STRINGPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1C4DA1E0)
#define DG_TWEENING_PLUGINS_STRINGPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1C4DA100)
#define DG_TWEENING_PLUGINS_STRINGPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1C4DA1D0)
#define DG_TWEENING_PLUGINS_STRINGPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4DB7B0)
#define DG_TWEENING_PLUGINS_STRINGPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DB790)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int StringPlugin_TypeDefinitionIndex = 25459;

	class StringPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Char>** StaticGet__OpenedTags()
		{
			return (::System::Collections::Generic::List_1<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringPlugin_TypeDefinitionIndex)->GetStaticField(0x1EE90);
		}
		static ::System::Text::StringBuilder** StaticGet__Buffer()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(StringPlugin_TypeDefinitionIndex)->GetStaticField(0x1EE98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGIN__CCTOR_OFFSET))();
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::String* ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>* t, ::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>*, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::StringOptions options, ::System::Single unitsXSecond, ::System::String* changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::StringOptions, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::StringOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::System::String*>* getter, ::DG::Tweening::Core::DOSetter_1<::System::String*>* setter, ::System::Single elapsed, ::System::String* startValue, ::System::String* changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::StringOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::System::String*>*, ::DG::Tweening::Core::DOSetter_1<::System::String*>*, ::System::Single, ::System::String*, ::System::String*, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}

		::System::Text::StringBuilder* Append(::System::String* value, ::System::Int32 startIndex, ::System::Int32 length, ::System::Boolean richTextEnabled)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGIN_APPEND_OFFSET))(this, value, startIndex, length, richTextEnabled);
		}

		::Il2CppArray<::System::Char>* ScrambledCharsToUse(::DG::Tweening::Plugins::Options::StringOptions options)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::DG::Tweening::Plugins::Options::StringOptions))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_STRINGPLUGIN_SCRAMBLEDCHARSTOUSE_OFFSET))(this, options);
		}
	};
}
