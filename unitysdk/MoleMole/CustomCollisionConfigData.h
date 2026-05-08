#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CustomCollisionConfigData_CustomCollisionAlgorithm.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_CUSTOMCOLLISIONCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3ACC0)

namespace MoleMole
{
	inline static constexpr unsigned int CustomCollisionConfigData_TypeDefinitionIndex = 77999;

	class CustomCollisionConfigData : public ::System::Object
	{
	public:
		::UnityEngine::LayerMask COLLIDER_AGAINSTMASK; // 0x10
		::System::Single MinDistance; // 0x14
		::System::Single ClipSpeed; // 0x18
		::System::Single ClipMoveSpeed; // 0x1C
		::System::String* IgnoreCollisionTag; // 0x20
		::Il2CppArray<::System::String*>* TransparentCollisionTagV2; // 0x28
		::Il2CppArray<::System::String*>* stageCollisionTagV2; // 0x30
		::MoleMole::CustomCollisionConfigData_CustomCollisionAlgorithm CollisionAlgorithm; // 0x38
		::System::Single RaycastTolerance; // 0x3C
		::System::Single SphereCastRadius; // 0x40
		::System::Single SphereCastTolerance; // 0x44
		::UnityEngine::Vector2 ConeRadius; // 0x48
		::System::Single ConeSegments; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMCOLLISIONCONFIGDATA__CTOR_OFFSET))(this);
		}
	};
}
