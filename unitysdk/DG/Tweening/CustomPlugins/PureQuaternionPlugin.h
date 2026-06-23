#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/NoOptions.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1E6EA050)
#define DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1E6EA2B0)
#define DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1E6EA1A0)
#define DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_PLUG_OFFSET UNITYSDK_OFFSET(0x1E6E9E20)
#define DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1E6E9EC0)
#define DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1E6EA170)
#define DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1E6E9ED0)
#define DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1E6EA060)
#define DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E9EA0)

namespace DG::Tweening::CustomPlugins
{
	inline static constexpr unsigned int PureQuaternionPlugin_TypeDefinitionIndex = 27976;

	class PureQuaternionPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>
	{
	public:
		static ::DG::Tweening::CustomPlugins::PureQuaternionPlugin** StaticGet__plug()
		{
			return (::DG::Tweening::CustomPlugins::PureQuaternionPlugin**)Il2CppClass::FromTypeDefinitionIndex(PureQuaternionPlugin_TypeDefinitionIndex)->GetStaticField(0x22CD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN__CTOR_OFFSET))(this);
		}

		static ::DG::Tweening::CustomPlugins::PureQuaternionPlugin* Plug()
		{
			return ((::DG::Tweening::CustomPlugins::PureQuaternionPlugin*(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_PLUG_OFFSET))();
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::UnityEngine::Quaternion ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::UnityEngine::Quaternion value)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::NoOptions options, ::System::Single unitsXSecond, ::UnityEngine::Quaternion changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::NoOptions, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::NoOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Quaternion>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Quaternion>* setter, ::System::Single elapsed, ::UnityEngine::Quaternion startValue, ::UnityEngine::Quaternion changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::NoOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Quaternion>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Quaternion>*, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_CUSTOMPLUGINS_PUREQUATERNIONPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
