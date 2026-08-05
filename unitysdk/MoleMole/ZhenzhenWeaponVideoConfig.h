#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ZhenzhenWeaponVideoSceneTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ZHENZHENWEAPONVIDEOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B26E20)

namespace MoleMole
{
	inline static constexpr unsigned int ZhenzhenWeaponVideoConfig_TypeDefinitionIndex = 42001;

	class ZhenzhenWeaponVideoConfig : public ::System::Object
	{
	public:
		::MoleMole::ZhenzhenWeaponVideoSceneTag tag; // 0x10
		::UnityEngine::Transform* videoTargetTransform; // 0x18
		::System::String* videoResourcePath; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* otherFaceCameraTransforms; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZHENZHENWEAPONVIDEOCONFIG__CTOR_OFFSET))(this);
		}
	};
}
