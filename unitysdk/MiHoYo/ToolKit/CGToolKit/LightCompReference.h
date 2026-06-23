#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_LIGHTCOMPREFERENCE_RECOVERREFERENCE_OFFSET UNITYSDK_OFFSET(0x126DE5E0)
#define MIHOYO_TOOLKIT_CGTOOLKIT_LIGHTCOMPREFERENCE_RELOAD_OFFSET UNITYSDK_OFFSET(0x126DE570)
#define MIHOYO_TOOLKIT_CGTOOLKIT_LIGHTCOMPREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x126DE480)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int LightCompReference_TypeDefinitionIndex = 76752;

	class LightCompReference : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* Values; // 0x18

		::System::Void _ctor(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* light)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_LIGHTCOMPREFERENCE__CTOR_OFFSET))(this, light);
		}

		::System::Void Reload(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* light)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_LIGHTCOMPREFERENCE_RELOAD_OFFSET))(this, light);
		}

		::System::Void RecoverReference(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_LIGHTCOMPREFERENCE_RECOVERREFERENCE_OFFSET))(this, root);
		}
	};
}
