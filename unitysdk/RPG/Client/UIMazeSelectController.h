#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UIMAZESELECTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE387B70)
#define RPG_CLIENT_UIMAZESELECTCONTROLLER_RESETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0xE387A90)
#define RPG_CLIENT_UIMAZESELECTCONTROLLER_SETSELECTWEAKBLOCK_OFFSET UNITYSDK_OFFSET(0xE3879C0)
#define RPG_CLIENT_UIMAZESELECTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE387CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMazeSelectController_TypeDefinitionIndex = 69066;

	class UIMazeSelectController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* WeakBlockMaterial; // 0x18
		::Il2CppArray<::UnityEngine::UI::Image*>* ControlImages; // 0x20
		::UnityEngine::Animator* Animator; // 0x28
		::System::Boolean _bAwaked; // 0x30
		::System::Boolean _bReseted; // 0x31
		::Il2CppArray<::UnityEngine::Material*>* _BasicMaterials; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAZESELECTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetSelectWeakBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAZESELECTCONTROLLER_SETSELECTWEAKBLOCK_OFFSET))(this);
		}

		::System::Void ResetSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAZESELECTCONTROLLER_RESETSELECTSTATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAZESELECTCONTROLLER_AWAKE_OFFSET))(this);
		}
	};
}
