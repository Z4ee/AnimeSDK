#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/NoOptions.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_ULONGPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1E87CF60)
#define DG_TWEENING_PLUGINS_ULONGPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1E87D010)
#define DG_TWEENING_PLUGINS_ULONGPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1E87CFD0)
#define DG_TWEENING_PLUGINS_ULONGPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1E87CEB0)
#define DG_TWEENING_PLUGINS_ULONGPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1E87CFA0)
#define DG_TWEENING_PLUGINS_ULONGPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1E87CEC0)
#define DG_TWEENING_PLUGINS_ULONGPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1E87CF70)
#define DG_TWEENING_PLUGINS_ULONGPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E87D330)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int UlongPlugin_TypeDefinitionIndex = 27939;

	class UlongPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::System::UInt64, ::System::UInt64, ::DG::Tweening::Plugins::Options::NoOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_ULONGPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::System::UInt64, ::System::UInt64, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::UInt64, ::System::UInt64, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_ULONGPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::System::UInt64, ::System::UInt64, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::UInt64, ::System::UInt64, ::DG::Tweening::Plugins::Options::NoOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_ULONGPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::System::UInt64 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::System::UInt64, ::System::UInt64, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::System::UInt64 value)
		{
			return ((::System::UInt64(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::UInt64, ::System::UInt64, ::DG::Tweening::Plugins::Options::NoOptions>*, ::System::UInt64))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_ULONGPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::System::UInt64, ::System::UInt64, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::UInt64, ::System::UInt64, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_ULONGPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::System::UInt64, ::System::UInt64, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::UInt64, ::System::UInt64, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_ULONGPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::NoOptions options, ::System::Single unitsXSecond, ::System::UInt64 changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::NoOptions, ::System::Single, ::System::UInt64))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_ULONGPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::NoOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::System::UInt64>* getter, ::DG::Tweening::Core::DOSetter_1<::System::UInt64>* setter, ::System::Single elapsed, ::System::UInt64 startValue, ::System::UInt64 changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::NoOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::System::UInt64>*, ::DG::Tweening::Core::DOSetter_1<::System::UInt64>*, ::System::Single, ::System::UInt64, ::System::UInt64, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_ULONGPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
