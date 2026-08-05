#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/DOTweenAnimationType.h"
#include "unitysdk/DG/Tweening/Core/TargetType.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/DG/Tweening/LoopType.h"
#include "unitysdk/DG/Tweening/RotateMode.h"
#include "unitysdk/DG/Tweening/ScrambleMode.h"
#include "unitysdk/Struct_2_B8B3C2CDA60FB918.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening { class TweenCallback; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_CREATETWEENHANDLE_OFFSET UNITYSDK_OFFSET(0x1792D5D0)
#define MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_CREATETWEEN_OFFSET UNITYSDK_OFFSET(0x1792C000)
#define MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1792BEA0)
#define MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1792BB40)
#define MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_GET__ONTWEENFINISHED_OFFSET UNITYSDK_OFFSET(0x1792D530)
#define MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_ONTWEENFINISHED_OFFSET UNITYSDK_OFFSET(0x1792D610)
#define MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_TYPETODOTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1792BCC0)
#define MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1792D660)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int StageTweenAnimData_TypeDefinitionIndex = 50571;

	class StageTweenAnimData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* targetGameObject; // 0x10
		::System::Single delay; // 0x18
		::System::Single duration; // 0x1C
		::DG::Tweening::Ease easeType; // 0x20
		::UnityEngine::AnimationCurve* easeCurve; // 0x28
		::DG::Tweening::LoopType loopType; // 0x30
		::System::Int32 loops; // 0x34
		::System::String* id; // 0x38
		::System::Boolean isRelative; // 0x40
		::System::Boolean isFrom; // 0x41
		::System::Boolean isIndependentUpdate; // 0x42
		::System::Boolean isIgnoreWorldTimeScale; // 0x43
		::System::Boolean isValid; // 0x44
		::UnityEngine::Component* target; // 0x48
		::DG::Tweening::Core::DOTweenAnimationType animationType; // 0x50
		::DG::Tweening::Core::TargetType targetType; // 0x54
		::DG::Tweening::Core::TargetType forcedTargetType; // 0x58
		::System::Boolean useTargetAsV3; // 0x5C
		::System::Single endValueFloat; // 0x60
		::UnityEngine::Vector3 endValueV3; // 0x64
		::UnityEngine::Vector2 endValueV2; // 0x70
		::UnityEngine::Color endValueColor; // 0x78
		::System::String* endValueString; // 0x88
		::UnityEngine::Rect endValueRect; // 0x90
		::UnityEngine::Transform* endValueTransform; // 0xA0
		::System::Boolean optionalBool0; // 0xA8
		::System::Single optionalFloat0; // 0xAC
		::System::Int32 optionalInt0; // 0xB0
		::DG::Tweening::RotateMode optionalRotationMode; // 0xB4
		::DG::Tweening::ScrambleMode optionalScrambleMode; // 0xB8
		::System::String* optionalString; // 0xC0
		::System::Boolean _tweenCreated; // 0xC8
		::System::Int32 _playCount; // 0xCC
		::DG::Tweening::Tween* tween; // 0xD0
		::DG::Tweening::TweenCallback* __OnTweenFinished; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_GET_TRANSFORM_OFFSET))(this);
		}

		static ::DG::Tweening::Core::TargetType TypeToDOTargetType(::System::Type* t)
		{
			return ((::DG::Tweening::Core::TargetType(*)(::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_TYPETODOTARGETTYPE_OFFSET))(t);
		}

		::UnityEngine::Component* GetComponent(::System::Type* t)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_GETCOMPONENT_OFFSET))(this, t);
		}

		::System::Void CreateTween()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_CREATETWEEN_OFFSET))(this);
		}

		::Struct_2_B8B3C2CDA60FB918 CreateTweenHandle()
		{
			return ((::Struct_2_B8B3C2CDA60FB918(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_CREATETWEENHANDLE_OFFSET))(this);
		}

		::DG::Tweening::TweenCallback* get__OnTweenFinished()
		{
			return ((::DG::Tweening::TweenCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_GET__ONTWEENFINISHED_OFFSET))(this);
		}

		::System::Void OnTweenFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_STAGETWEENANIMDATA_ONTWEENFINISHED_OFFSET))(this);
		}
	};
}
