#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/FloatOptions.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_FLOATPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1F981660)
#define DG_TWEENING_PLUGINS_FLOATPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1F9816F0)
#define DG_TWEENING_PLUGINS_FLOATPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1F9816D0)
#define DG_TWEENING_PLUGINS_FLOATPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1F9814E0)
#define DG_TWEENING_PLUGINS_FLOATPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1F9816A0)
#define DG_TWEENING_PLUGINS_FLOATPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1F9814F0)
#define DG_TWEENING_PLUGINS_FLOATPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1F981670)
#define DG_TWEENING_PLUGINS_FLOATPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F981920)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int FloatPlugin_TypeDefinitionIndex = 28556;

	class FloatPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_FLOATPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_FLOATPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_FLOATPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::System::Single ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>* t, ::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_FLOATPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_FLOATPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_FLOATPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::FloatOptions options, ::System::Single unitsXSecond, ::System::Single changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::FloatOptions, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_FLOATPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::FloatOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::System::Single>* getter, ::DG::Tweening::Core::DOSetter_1<::System::Single>* setter, ::System::Single elapsed, ::System::Single startValue, ::System::Single changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::FloatOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::System::Single>*, ::DG::Tweening::Core::DOSetter_1<::System::Single>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_FLOATPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
