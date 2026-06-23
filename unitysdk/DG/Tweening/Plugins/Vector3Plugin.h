#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/VectorOptions.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_VECTOR3PLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1E8219E0)
#define DG_TWEENING_PLUGINS_VECTOR3PLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1E821B80)
#define DG_TWEENING_PLUGINS_VECTOR3PLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1E821B30)
#define DG_TWEENING_PLUGINS_VECTOR3PLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1E821620)
#define DG_TWEENING_PLUGINS_VECTOR3PLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1E821A50)
#define DG_TWEENING_PLUGINS_VECTOR3PLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1E821630)
#define DG_TWEENING_PLUGINS_VECTOR3PLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1E821A00)
#define DG_TWEENING_PLUGINS_VECTOR3PLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E822310)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int Vector3Plugin_TypeDefinitionIndex = 27953;

	class Vector3Plugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3PLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3PLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3PLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::UnityEngine::Vector3 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3PLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3PLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3PLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::VectorOptions options, ::System::Single unitsXSecond, ::UnityEngine::Vector3 changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::VectorOptions, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3PLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::VectorOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, ::System::Single elapsed, ::UnityEngine::Vector3 startValue, ::UnityEngine::Vector3 changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::VectorOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3PLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
