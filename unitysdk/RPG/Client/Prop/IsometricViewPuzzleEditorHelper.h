#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEEDITORHELPER_ADJUST_OFFSET UNITYSDK_OFFSET(0xAE2D2C0)
#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEEDITORHELPER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xAE2CF70)
#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEEDITORHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0xAE2D680)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int IsometricViewPuzzleEditorHelper_TypeDefinitionIndex = 72139;

	class IsometricViewPuzzleEditorHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Camera; // 0x18
		::UnityEngine::GameObject* Side1; // 0x20
		::UnityEngine::GameObject* Side2; // 0x28
		::System::Single DiffHeight; // 0x30
		::System::Single OrthSize; // 0x34
		::UnityEngine::Vector3 Field_5_5; // 0x38
		::UnityEngine::Vector3 Field_5_6; // 0x44
		::System::Boolean Field_5_7; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEEDITORHELPER__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEEDITORHELPER_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void Adjust(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEEDITORHELPER_ADJUST_OFFSET))(this, a1);
		}
	};
}
