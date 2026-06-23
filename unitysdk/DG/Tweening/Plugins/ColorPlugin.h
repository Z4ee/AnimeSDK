#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/ColorOptions.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_COLORPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1E26C160)
#define DG_TWEENING_PLUGINS_COLORPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1E26C1E0)
#define DG_TWEENING_PLUGINS_COLORPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1E26C1D0)
#define DG_TWEENING_PLUGINS_COLORPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1E26C020)
#define DG_TWEENING_PLUGINS_COLORPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1E26C1A0)
#define DG_TWEENING_PLUGINS_COLORPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1E26C030)
#define DG_TWEENING_PLUGINS_COLORPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1E26C170)
#define DG_TWEENING_PLUGINS_COLORPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E26C420)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int ColorPlugin_TypeDefinitionIndex = 27942;

	class ColorPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLORPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLORPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLORPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::UnityEngine::Color ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>* t, ::UnityEngine::Color value)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLORPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLORPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLORPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::ColorOptions options, ::System::Single unitsXSecond, ::UnityEngine::Color changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::ColorOptions, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLORPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::ColorOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Color>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Color>* setter, ::System::Single elapsed, ::UnityEngine::Color startValue, ::UnityEngine::Color changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::ColorOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Color>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Color>*, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_COLORPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
