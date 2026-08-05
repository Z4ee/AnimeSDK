#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace FluffyUnderware::Curvy::Generator { class CurvyGenerator; }
namespace UnityEngine { class MonoBehaviour; }

#define FLUFFYUNDERWARE_CURVY_CURVYCGEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A2900)
#define FLUFFYUNDERWARE_CURVY_CURVYCGEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2880)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyCGEventArgs_TypeDefinitionIndex = 39584;

	class CurvyCGEventArgs : public ::System::EventArgs
	{
	public:
		::FluffyUnderware::Curvy::Generator::CurvyGenerator* Generator; // 0x10
		::UnityEngine::MonoBehaviour* Sender; // 0x18
		::FluffyUnderware::Curvy::Generator::CGModule* Module; // 0x20

		::System::Void _ctor(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCGEVENTARGS__CTOR_OFFSET))(this, module);
		}

		::System::Void _ctor_1(::FluffyUnderware::Curvy::Generator::CurvyGenerator* generator, ::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CurvyGenerator*, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCGEVENTARGS__CTOR_1_OFFSET))(this, generator, module);
		}
	};
}
