#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_DEBUGGING_DEBUGUTILS_DRAWSTRING_OFFSET UNITYSDK_OFFSET(0x9449240)
#define RPG_CLIENT_DEBUGGING_DEBUGUTILS_METHOD_5_CFAA1B02F36ADD7B_OFFSET UNITYSDK_OFFSET(0x9449260)
#define RPG_CLIENT_DEBUGGING_DEBUGUTILS_METHOD_5_EFC9F5E801B244B0_OFFSET UNITYSDK_OFFSET(0x9449310)
#define RPG_CLIENT_DEBUGGING_DEBUGUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x94493B0)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int DebugUtils_TypeDefinitionIndex = 64451;

	class DebugUtils : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void DrawString(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Nullable_1<::UnityEngine::Color> a5)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGUTILS_DRAWSTRING_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 Method_5_CFAA1B02F36ADD7B(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGUTILS_METHOD_5_CFAA1B02F36ADD7B_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 Method_5_EFC9F5E801B244B0(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGUTILS_METHOD_5_EFC9F5E801B244B0_OFFSET))(a1, a2, a3);
		}
	};
}
