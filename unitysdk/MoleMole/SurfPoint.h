#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_SURFPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x13876310)

namespace MoleMole
{
	inline static constexpr unsigned int SurfPoint_TypeDefinitionIndex = 62038;

	class SurfPoint : public ::System::Object
	{
	public:
		::UnityEngine::Transform* on; // 0x10
		::UnityEngine::Transform* off; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFPOINT__CTOR_OFFSET))(this);
		}
	};
}
