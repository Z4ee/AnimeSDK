#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONTOURXZ__CTOR_OFFSET UNITYSDK_OFFSET(0x1922C8D0)

namespace MoleMole
{
	inline static constexpr unsigned int ContourXZ_TypeDefinitionIndex = 54447;

	class ContourXZ : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* points; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONTOURXZ__CTOR_OFFSET))(this);
		}
	};
}
