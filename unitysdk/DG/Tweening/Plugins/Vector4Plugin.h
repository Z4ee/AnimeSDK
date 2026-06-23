#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/VectorOptions.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_VECTOR4PLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1E584EE0)
#define DG_TWEENING_PLUGINS_VECTOR4PLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1E585080)
#define DG_TWEENING_PLUGINS_VECTOR4PLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1E585020)
#define DG_TWEENING_PLUGINS_VECTOR4PLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1E584A50)
#define DG_TWEENING_PLUGINS_VECTOR4PLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1E584F20)
#define DG_TWEENING_PLUGINS_VECTOR4PLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1E584A60)
#define DG_TWEENING_PLUGINS_VECTOR4PLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1E584EF0)
#define DG_TWEENING_PLUGINS_VECTOR4PLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E585A10)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int Vector4Plugin_TypeDefinitionIndex = 27949;

	class Vector4Plugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR4PLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR4PLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR4PLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::UnityEngine::Vector4 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::UnityEngine::Vector4 value)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR4PLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR4PLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR4PLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::VectorOptions options, ::System::Single unitsXSecond, ::UnityEngine::Vector4 changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::VectorOptions, ::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR4PLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::VectorOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector4>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector4>* setter, ::System::Single elapsed, ::UnityEngine::Vector4 startValue, ::UnityEngine::Vector4 changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::VectorOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector4>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector4>*, ::System::Single, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR4PLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
