#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_MONOSLIDINGGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x14A121D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSlidingGround_TypeDefinitionIndex = 50521;

	class MonoSlidingGround : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* frictionTag; // 0x18
		::System::String* accelerationTag; // 0x20
		::System::String* deltaAngleTag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSLIDINGGROUND__CTOR_OFFSET))(this);
		}
	};
}
