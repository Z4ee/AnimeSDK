#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOGAMEPADCUSTOMLIST_CLASS_1_C459D6E56AF3A3C5_METHOD_1_AFB756BC1B1D6035_OFFSET UNITYSDK_OFFSET(0x18301D20)
#define MOLEMOLE_MONOGAMEPADCUSTOMLIST_CLASS_1_C459D6E56AF3A3C5__CTOR_OFFSET UNITYSDK_OFFSET(0x18301D10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadCustomList_Class_1_C459D6E56AF3A3C5_TypeDefinitionIndex = 39654;

	class MonoGamepadCustomList_Class_1_C459D6E56AF3A3C5 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADCUSTOMLIST_CLASS_1_C459D6E56AF3A3C5__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_AFB756BC1B1D6035(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADCUSTOMLIST_CLASS_1_C459D6E56AF3A3C5_METHOD_1_AFB756BC1B1D6035_OFFSET))(this, a1);
		}
	};
}
