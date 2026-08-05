#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoTubeRenderer; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MONOINVERTEBRATE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1807C090)
#define MOLEMOLE_MONOINVERTEBRATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1807C320)
#define MOLEMOLE_MONOINVERTEBRATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1807C520)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInvertebrate_TypeDefinitionIndex = 64448;

	class MonoInvertebrate : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* _material; // 0x18
		::MoleMole::MonoTubeRenderer* Field_5_2; // 0x20
		::System::Int32 pointCount; // 0x28
		::System::Int32 edgeCount; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINVERTEBRATE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINVERTEBRATE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINVERTEBRATE_UPDATE_OFFSET))(this);
		}
	};
}
