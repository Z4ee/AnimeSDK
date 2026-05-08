#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/SpiralOptions.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_SPIRALPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1C475EB0)
#define DG_TWEENING_PLUGINS_SPIRALPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1C475F90)
#define DG_TWEENING_PLUGINS_SPIRALPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1C475F80)
#define DG_TWEENING_PLUGINS_SPIRALPLUGIN_GET_OFFSET UNITYSDK_OFFSET(0x1C475E70)
#define DG_TWEENING_PLUGINS_SPIRALPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1C475E50)
#define DG_TWEENING_PLUGINS_SPIRALPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1C475EE0)
#define DG_TWEENING_PLUGINS_SPIRALPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1C475E60)
#define DG_TWEENING_PLUGINS_SPIRALPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1C475ED0)
#define DG_TWEENING_PLUGINS_SPIRALPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C476450)
#define DG_TWEENING_PLUGINS_SPIRALPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C476430)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int SpiralPlugin_TypeDefinitionIndex = 32932;

	class SpiralPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_DefaultDirection()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(SpiralPlugin_TypeDefinitionIndex)->GetStaticField(0x7F60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_SPIRALPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_SPIRALPLUGIN__CCTOR_OFFSET))();
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_SPIRALPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_SPIRALPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		static ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>* Get()
		{
			return ((::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>*(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_SPIRALPLUGIN_GET_OFFSET))();
		}

		::UnityEngine::Vector3 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>* t, ::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_SPIRALPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_SPIRALPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::SpiralOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_SPIRALPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::SpiralOptions options, ::System::Single unitsXSecond, ::UnityEngine::Vector3 changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::SpiralOptions, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_SPIRALPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::SpiralOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, ::System::Single elapsed, ::UnityEngine::Vector3 startValue, ::UnityEngine::Vector3 changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::SpiralOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_SPIRALPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
