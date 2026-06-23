#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoTubeRenderer; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MONOSTARFISH_START_OFFSET UNITYSDK_OFFSET(0x18CECBE0)
#define MOLEMOLE_MONOSTARFISH_UPDATE_OFFSET UNITYSDK_OFFSET(0x18CEDB20)
#define MOLEMOLE_MONOSTARFISH__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEE060)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStarfish_TypeDefinitionIndex = 53002;

	class MonoStarfish : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 Field_5_0 = 0x5; // 0x0
		// static const ::System::Single Field_5_1; // 0x0
		// static const ::System::Int32 Field_5_2 = 0x14; // 0x0
		::UnityEngine::Material* _material; // 0x18
		::Il2CppArray<::MoleMole::MonoTubeRenderer*>* Field_5_4; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTARFISH__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTARFISH_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTARFISH_UPDATE_OFFSET))(this);
		}
	};
}
