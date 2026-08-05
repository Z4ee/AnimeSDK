#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define FLUFFYUNDERWARE_CURVY_CURVYEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6A830)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyEventArgs_TypeDefinitionIndex = 39517;

	class CurvyEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* Data; // 0x10
		::UnityEngine::MonoBehaviour* Sender; // 0x18

		::System::Void _ctor(::UnityEngine::MonoBehaviour* sender, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYEVENTARGS__CTOR_OFFSET))(this, sender, data);
		}
	};
}
