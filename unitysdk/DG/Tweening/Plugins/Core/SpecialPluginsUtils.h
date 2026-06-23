#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Plugins/Options/QuaternionOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/Vector3ArrayOptions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }

#define DG_TWEENING_PLUGINS_CORE_SPECIALPLUGINSUTILS_SETCAMERASHAKEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E26DDA0)
#define DG_TWEENING_PLUGINS_CORE_SPECIALPLUGINSUTILS_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0x1E26D9E0)
#define DG_TWEENING_PLUGINS_CORE_SPECIALPLUGINSUTILS_SETPUNCH_OFFSET UNITYSDK_OFFSET(0x1E26DC10)
#define DG_TWEENING_PLUGINS_CORE_SPECIALPLUGINSUTILS_SETSHAKE_OFFSET UNITYSDK_OFFSET(0x1E26DD70)

namespace DG::Tweening::Plugins::Core
{
	inline static constexpr unsigned int SpecialPluginsUtils_TypeDefinitionIndex = 27966;

	class SpecialPluginsUtils : public ::System::Object
	{
	public:
		static ::System::Boolean SetLookAt(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_SPECIALPLUGINSUTILS_SETLOOKAT_OFFSET))(t);
		}

		static ::System::Boolean SetPunch(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_SPECIALPLUGINSUTILS_SETPUNCH_OFFSET))(t);
		}

		static ::System::Boolean SetShake(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_SPECIALPLUGINSUTILS_SETSHAKE_OFFSET))(t);
		}

		static ::System::Boolean SetCameraShakePosition(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_SPECIALPLUGINSUTILS_SETCAMERASHAKEPOSITION_OFFSET))(t);
		}
	};
}
