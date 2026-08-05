#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal::Internal { class FullScreenQuadFxMaskProxy; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_FULLSCREENQFMREFERENCE_RECOVERREFERENCE_OFFSET UNITYSDK_OFFSET(0x12A11810)
#define MIHOYO_TOOLKIT_CGTOOLKIT_FULLSCREENQFMREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12A11760)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int FullScreenQfMReference_TypeDefinitionIndex = 61095;

	class FullScreenQfMReference : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* Values; // 0x18

		::System::Void _ctor(::UnityEngine::Rendering::Universal::Internal::FullScreenQuadFxMaskProxy* proxyComp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::FullScreenQuadFxMaskProxy*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_FULLSCREENQFMREFERENCE__CTOR_OFFSET))(this, proxyComp);
		}

		::System::Void RecoverReference(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_FULLSCREENQFMREFERENCE_RECOVERREFERENCE_OFFSET))(this, root);
		}
	};
}
