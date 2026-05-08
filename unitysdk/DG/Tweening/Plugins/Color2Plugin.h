#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Color2.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/ColorOptions.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_COLOR2PLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1C297590)
#define DG_TWEENING_PLUGINS_COLOR2PLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1C297660)
#define DG_TWEENING_PLUGINS_COLOR2PLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1C297650)
#define DG_TWEENING_PLUGINS_COLOR2PLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1C297330)
#define DG_TWEENING_PLUGINS_COLOR2PLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1C297600)
#define DG_TWEENING_PLUGINS_COLOR2PLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1C297340)
#define DG_TWEENING_PLUGINS_COLOR2PLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1C2975B0)
#define DG_TWEENING_PLUGINS_COLOR2PLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C297960)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int Color2Plugin_TypeDefinitionIndex = 25445;

	class Color2Plugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLOR2PLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLOR2PLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLOR2PLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::DG::Tweening::Color2 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* t, ::DG::Tweening::Color2 value)
		{
			return ((::DG::Tweening::Color2(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*, ::DG::Tweening::Color2))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLOR2PLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLOR2PLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLOR2PLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::ColorOptions options, ::System::Single unitsXSecond, ::DG::Tweening::Color2 changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::ColorOptions, ::System::Single, ::DG::Tweening::Color2))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLOR2PLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::ColorOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::DG::Tweening::Color2>* getter, ::DG::Tweening::Core::DOSetter_1<::DG::Tweening::Color2>* setter, ::System::Single elapsed, ::DG::Tweening::Color2 startValue, ::DG::Tweening::Color2 changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::ColorOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::DG::Tweening::Color2>*, ::DG::Tweening::Core::DOSetter_1<::DG::Tweening::Color2>*, ::System::Single, ::DG::Tweening::Color2, ::DG::Tweening::Color2, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLOR2PLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
