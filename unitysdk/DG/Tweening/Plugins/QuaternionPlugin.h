#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/QuaternionOptions.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1FC4AF90)
#define DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1FC4B350)
#define DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1FC4B320)
#define DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1FC4A7A0)
#define DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1FC4B0C0)
#define DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1FC4A7B0)
#define DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1FC4B070)
#define DG_TWEENING_PLUGINS_QUATERNIONPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4B9B0)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int QuaternionPlugin_TypeDefinitionIndex = 28548;

	class QuaternionPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_QUATERNIONPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::UnityEngine::Vector3 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* t, ::UnityEngine::Quaternion value)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::QuaternionOptions options, ::System::Single unitsXSecond, ::UnityEngine::Vector3 changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::QuaternionOptions, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::QuaternionOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Quaternion>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Quaternion>* setter, ::System::Single elapsed, ::UnityEngine::Vector3 startValue, ::UnityEngine::Vector3 changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::QuaternionOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Quaternion>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Quaternion>*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_QUATERNIONPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
