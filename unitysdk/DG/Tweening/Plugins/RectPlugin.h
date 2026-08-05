#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/RectOptions.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_RECTPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1FC53F50)
#define DG_TWEENING_PLUGINS_RECTPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1FC53FE0)
#define DG_TWEENING_PLUGINS_RECTPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1FC53FC0)
#define DG_TWEENING_PLUGINS_RECTPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1FC53B70)
#define DG_TWEENING_PLUGINS_RECTPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1FC53F90)
#define DG_TWEENING_PLUGINS_RECTPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1FC53B80)
#define DG_TWEENING_PLUGINS_RECTPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1FC53F60)
#define DG_TWEENING_PLUGINS_RECTPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC54400)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int RectPlugin_TypeDefinitionIndex = 28550;

	class RectPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::UnityEngine::Rect ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>* t, ::UnityEngine::Rect value)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::RectOptions options, ::System::Single unitsXSecond, ::UnityEngine::Rect changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::RectOptions, ::System::Single, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::RectOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Rect>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Rect>* setter, ::System::Single elapsed, ::UnityEngine::Rect startValue, ::UnityEngine::Rect changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::RectOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Rect>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Rect>*, ::System::Single, ::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
