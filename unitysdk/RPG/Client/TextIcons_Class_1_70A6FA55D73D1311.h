#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TEXTICONS_CLASS_1_70A6FA55D73D1311_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA589200)
#define RPG_CLIENT_TEXTICONS_CLASS_1_70A6FA55D73D1311__CTOR_OFFSET UNITYSDK_OFFSET(0xA58CEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons_Class_1_70A6FA55D73D1311_TypeDefinitionIndex = 59567;

	class TextIcons_Class_1_70A6FA55D73D1311 : public ::System::Object
	{
	public:
		::UnityEngine::CanvasRenderer* Field_1_0; // 0x10
		::UnityEngine::Texture* Field_1_2; // 0x18
		::System::Int32 Field_1_1; // 0x20

		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CLASS_1_70A6FA55D73D1311__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CLASS_1_70A6FA55D73D1311_METHOD_1_9681042564541CD6_OFFSET))(this);
		}
	};
}
