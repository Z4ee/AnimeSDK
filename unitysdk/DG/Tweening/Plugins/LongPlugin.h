#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/NoOptions.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_LONGPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1E231A60)
#define DG_TWEENING_PLUGINS_LONGPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1E231AF0)
#define DG_TWEENING_PLUGINS_LONGPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1E231AD0)
#define DG_TWEENING_PLUGINS_LONGPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1E2319B0)
#define DG_TWEENING_PLUGINS_LONGPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1E231AA0)
#define DG_TWEENING_PLUGINS_LONGPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1E2319C0)
#define DG_TWEENING_PLUGINS_LONGPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1E231A70)
#define DG_TWEENING_PLUGINS_LONGPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E231CE0)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int LongPlugin_TypeDefinitionIndex = 27938;

	class LongPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::System::Int64, ::System::Int64, ::DG::Tweening::Plugins::Options::NoOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_LONGPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::System::Int64, ::System::Int64, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Int64, ::System::Int64, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_LONGPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::System::Int64, ::System::Int64, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Int64, ::System::Int64, ::DG::Tweening::Plugins::Options::NoOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_LONGPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::System::Int64 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::System::Int64, ::System::Int64, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::System::Int64 value)
		{
			return ((::System::Int64(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Int64, ::System::Int64, ::DG::Tweening::Plugins::Options::NoOptions>*, ::System::Int64))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_LONGPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::System::Int64, ::System::Int64, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Int64, ::System::Int64, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_LONGPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::System::Int64, ::System::Int64, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::Int64, ::System::Int64, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_LONGPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::NoOptions options, ::System::Single unitsXSecond, ::System::Int64 changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::NoOptions, ::System::Single, ::System::Int64))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_LONGPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::NoOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::System::Int64>* getter, ::DG::Tweening::Core::DOSetter_1<::System::Int64>* setter, ::System::Single elapsed, ::System::Int64 startValue, ::System::Int64 changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::NoOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::System::Int64>*, ::DG::Tweening::Core::DOSetter_1<::System::Int64>*, ::System::Single, ::System::Int64, ::System::Int64, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_LONGPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
