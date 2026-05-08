#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class SurfPoint; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MONOSURFBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x142B21F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfButton_TypeDefinitionIndex = 76520;

	class MonoSurfButton : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* material; // 0x18
		::UnityEngine::Animation* effect1; // 0x20
		::UnityEngine::Animation* effect2; // 0x28
		::Il2CppArray<::MoleMole::SurfPoint*>* points; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFBUTTON__CTOR_OFFSET))(this);
		}
	};
}
