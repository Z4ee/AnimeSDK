#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define FLUFFYUNDERWARE_CURVY_CURVYEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55B820)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyEventArgs_TypeDefinitionIndex = 37182;

	class CurvyEventArgs : public ::System::EventArgs
	{
	public:
		::UnityEngine::MonoBehaviour* Sender; // 0x10
		::System::Object* Data; // 0x18

		::System::Void _ctor(::UnityEngine::MonoBehaviour* sender, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYEVENTARGS__CTOR_OFFSET))(this, sender, data);
		}
	};
}
