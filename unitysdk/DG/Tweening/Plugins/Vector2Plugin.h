#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/VectorOptions.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_VECTOR2PLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1E26E470)
#define DG_TWEENING_PLUGINS_VECTOR2PLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1E26E5D0)
#define DG_TWEENING_PLUGINS_VECTOR2PLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1E26E580)
#define DG_TWEENING_PLUGINS_VECTOR2PLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1E26E1E0)
#define DG_TWEENING_PLUGINS_VECTOR2PLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1E26E4D0)
#define DG_TWEENING_PLUGINS_VECTOR2PLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1E26E1F0)
#define DG_TWEENING_PLUGINS_VECTOR2PLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1E26E480)
#define DG_TWEENING_PLUGINS_VECTOR2PLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E26EBB0)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int Vector2Plugin_TypeDefinitionIndex = 27948;

	class Vector2Plugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR2PLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR2PLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR2PLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::UnityEngine::Vector2 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::UnityEngine::Vector2 value)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR2PLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR2PLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR2PLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::VectorOptions options, ::System::Single unitsXSecond, ::UnityEngine::Vector2 changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::VectorOptions, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR2PLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::VectorOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector2>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector2>* setter, ::System::Single elapsed, ::UnityEngine::Vector2 startValue, ::UnityEngine::Vector2 changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::VectorOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector2>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector2>*, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR2PLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
