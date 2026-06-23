#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/PathOptions.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace DG::Tweening::Plugins::Core::PathCore { class Path; }

#define DG_TWEENING_PLUGINS_PATHPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1E5E7DF0)
#define DG_TWEENING_PLUGINS_PATHPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1E5E8410)
#define DG_TWEENING_PLUGINS_PATHPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1E5E83F0)
#define DG_TWEENING_PLUGINS_PATHPLUGIN_GET_OFFSET UNITYSDK_OFFSET(0x1E5E7DB0)
#define DG_TWEENING_PLUGINS_PATHPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1E5E7D50)
#define DG_TWEENING_PLUGINS_PATHPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1E5E7F50)
#define DG_TWEENING_PLUGINS_PATHPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1E5E7DA0)
#define DG_TWEENING_PLUGINS_PATHPLUGIN_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E5E8790)
#define DG_TWEENING_PLUGINS_PATHPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1E5E7E10)
#define DG_TWEENING_PLUGINS_PATHPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E9CA0)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int PathPlugin_TypeDefinitionIndex = 27941;

	class PathPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>
	{
	public:
		// static const ::System::Single MinLookAhead; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_PATHPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_PATHPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_PATHPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		static ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* Get()
		{
			return ((::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_PATHPLUGIN_GET_OFFSET))();
		}

		::DG::Tweening::Plugins::Core::PathCore::Path* ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t, ::UnityEngine::Vector3 value)
		{
			return ((::DG::Tweening::Plugins::Core::PathCore::Path*(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_PATHPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_PATHPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_PATHPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::PathOptions options, ::System::Single unitsXSecond, ::DG::Tweening::Plugins::Core::PathCore::Path* changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::PathOptions, ::System::Single, ::DG::Tweening::Plugins::Core::PathCore::Path*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_PATHPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::PathOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, ::System::Single elapsed, ::DG::Tweening::Plugins::Core::PathCore::Path* startValue, ::DG::Tweening::Plugins::Core::PathCore::Path* changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::PathOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, ::System::Single, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_PATHPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}

		::System::Void SetOrientation(::DG::Tweening::Plugins::Options::PathOptions options, ::DG::Tweening::Tween* t, ::DG::Tweening::Plugins::Core::PathCore::Path* path, ::System::Single pathPerc, ::UnityEngine::Vector3 tPos, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::PathOptions, ::DG::Tweening::Tween*, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::System::Single, ::UnityEngine::Vector3, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_PATHPLUGIN_SETORIENTATION_OFFSET))(this, options, t, path, pathPerc, tPos, updateNotice);
		}
	};
}
