#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/UintOptions.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_UINTPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1FC64D20)
#define DG_TWEENING_PLUGINS_UINTPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1FC64DB0)
#define DG_TWEENING_PLUGINS_UINTPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1FC64D90)
#define DG_TWEENING_PLUGINS_UINTPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1FC64C70)
#define DG_TWEENING_PLUGINS_UINTPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1FC64D50)
#define DG_TWEENING_PLUGINS_UINTPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1FC64C80)
#define DG_TWEENING_PLUGINS_UINTPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1FC64D30)
#define DG_TWEENING_PLUGINS_UINTPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC65000)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int UintPlugin_TypeDefinitionIndex = 28551;

	class UintPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::System::UInt32, ::System::UInt32, ::DG::Tweening::Plugins::Options::UintOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_UINTPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::System::UInt32, ::System::UInt32, ::DG::Tweening::Plugins::Options::UintOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::UInt32, ::System::UInt32, ::DG::Tweening::Plugins::Options::UintOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_UINTPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::System::UInt32, ::System::UInt32, ::DG::Tweening::Plugins::Options::UintOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::UInt32, ::System::UInt32, ::DG::Tweening::Plugins::Options::UintOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_UINTPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::System::UInt32 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::System::UInt32, ::System::UInt32, ::DG::Tweening::Plugins::Options::UintOptions>* t, ::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::UInt32, ::System::UInt32, ::DG::Tweening::Plugins::Options::UintOptions>*, ::System::UInt32))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_UINTPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::System::UInt32, ::System::UInt32, ::DG::Tweening::Plugins::Options::UintOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::UInt32, ::System::UInt32, ::DG::Tweening::Plugins::Options::UintOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_UINTPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::System::UInt32, ::System::UInt32, ::DG::Tweening::Plugins::Options::UintOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::System::UInt32, ::System::UInt32, ::DG::Tweening::Plugins::Options::UintOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_UINTPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::UintOptions options, ::System::Single unitsXSecond, ::System::UInt32 changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::UintOptions, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_UINTPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::UintOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::System::UInt32>* getter, ::DG::Tweening::Core::DOSetter_1<::System::UInt32>* setter, ::System::Single elapsed, ::System::UInt32 startValue, ::System::UInt32 changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::UintOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::System::UInt32>*, ::DG::Tweening::Core::DOSetter_1<::System::UInt32>*, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_UINTPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
