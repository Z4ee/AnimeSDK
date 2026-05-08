#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/NoOptions.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_DOUBLEPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1C297AA0)
#define DG_TWEENING_PLUGINS_DOUBLEPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1C297B30)
#define DG_TWEENING_PLUGINS_DOUBLEPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1C297B10)
#define DG_TWEENING_PLUGINS_DOUBLEPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1C2979E0)
#define DG_TWEENING_PLUGINS_DOUBLEPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1C297AE0)
#define DG_TWEENING_PLUGINS_DOUBLEPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1C2979F0)
#define DG_TWEENING_PLUGINS_DOUBLEPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1C297AB0)
#define DG_TWEENING_PLUGINS_DOUBLEPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C297CB0)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int DoublePlugin_TypeDefinitionIndex = 25446;

	class DoublePlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_DOUBLEPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_DOUBLEPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_DOUBLEPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::System::Double ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::System::Double value)
		{
			return ((::System::Double(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>*, ::System::Double))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_DOUBLEPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_DOUBLEPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_DOUBLEPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::NoOptions options, ::System::Single unitsXSecond, ::System::Double changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::NoOptions, ::System::Single, ::System::Double))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_DOUBLEPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::NoOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::System::Double>* getter, ::DG::Tweening::Core::DOSetter_1<::System::Double>* setter, ::System::Single elapsed, ::System::Double startValue, ::System::Double changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::NoOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::System::Double>*, ::DG::Tweening::Core::DOSetter_1<::System::Double>*, ::System::Single, ::System::Double, ::System::Double, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_DOUBLEPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
