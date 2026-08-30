#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Renderer; }

#define MESHBOUNDDRAWER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xBBC0850)
#define MESHBOUNDDRAWER_START_OFFSET UNITYSDK_OFFSET(0xBBC05B0)
#define MESHBOUNDDRAWER__CTOR_OFFSET UNITYSDK_OFFSET(0xBBC0A90)

inline static constexpr unsigned int MeshBoundDrawer_TypeDefinitionIndex = 47747;

class MeshBoundDrawer : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Renderer* BICEEGMOBGN; // 0x18
	::UnityEngine::Bounds FBOMKLKIAMO; // 0x20
	::Il2CppArray<::UnityEngine::Vector3>* JCDHKHJBIHG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHBOUNDDRAWER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHBOUNDDRAWER_START_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHBOUNDDRAWER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}
};
