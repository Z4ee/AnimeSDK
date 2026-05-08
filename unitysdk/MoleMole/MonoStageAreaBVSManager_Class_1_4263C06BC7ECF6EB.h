#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_CLASS_1_4263C06BC7ECF6EB_METHOD_1_A3EF4ED894EBFFC3_OFFSET UNITYSDK_OFFSET(0x142B1FA0)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_CLASS_1_4263C06BC7ECF6EB__CTOR_OFFSET UNITYSDK_OFFSET(0x142B1EB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageAreaBVSManager_Class_1_4263C06BC7ECF6EB_TypeDefinitionIndex = 39850;

	class MonoStageAreaBVSManager_Class_1_4263C06BC7ECF6EB : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion Field_1_1; // 0x10
		::UnityEngine::Vector3 Field_1_2; // 0x20
		::UnityEngine::Vector3 Field_1_0; // 0x2C

		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_CLASS_1_4263C06BC7ECF6EB__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A3EF4ED894EBFFC3(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_CLASS_1_4263C06BC7ECF6EB_METHOD_1_A3EF4ED894EBFFC3_OFFSET))(this, a1);
		}
	};
}
