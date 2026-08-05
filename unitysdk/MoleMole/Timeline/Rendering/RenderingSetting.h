#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_METHOD_1_E2BCD1B56132A826_1_OFFSET UNITYSDK_OFFSET(0x1891D4C0)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_METHOD_1_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0x1891D070)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1891D060)

namespace MoleMole::Timeline::Rendering
{
	inline static constexpr unsigned int RenderingSetting_TypeDefinitionIndex = 72408;

	class RenderingSetting : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 hizParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_E2BCD1B56132A826()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_METHOD_1_E2BCD1B56132A826_OFFSET))(this);
		}

		::System::Void Method_1_E2BCD1B56132A826_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_METHOD_1_E2BCD1B56132A826_1_OFFSET))(this);
		}
	};
}
