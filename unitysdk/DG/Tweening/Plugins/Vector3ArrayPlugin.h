#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Core/ABSTweenPlugin_3.h"
#include "unitysdk/DG/Tweening/Plugins/Options/Vector3ArrayOptions.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1E6EA400)
#define DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1E6EA950)
#define DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1E6EA850)
#define DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1E6EA3C0)
#define DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1E6EA700)
#define DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1E6EA3F0)
#define DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1E6EA540)
#define DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EB3D0)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int Vector3ArrayPlugin_TypeDefinitionIndex = 27940;

	class Vector3ArrayPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::Il2CppArray<::UnityEngine::Vector3>* ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t, ::UnityEngine::Vector3 value)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::Vector3ArrayOptions options, ::System::Single unitsXSecond, ::Il2CppArray<::UnityEngine::Vector3>* changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::Vector3ArrayOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, ::System::Single elapsed, ::Il2CppArray<::UnityEngine::Vector3>* startValue, ::Il2CppArray<::UnityEngine::Vector3>* changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_VECTOR3ARRAYPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
