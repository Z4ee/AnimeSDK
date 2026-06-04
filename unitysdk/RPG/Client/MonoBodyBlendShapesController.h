#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class NamedCurve; }
namespace System { class String; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOBODYBLENDSHAPESCONTROLLER_ONIKWORKED_OFFSET UNITYSDK_OFFSET(0xC05AAD0)
#define RPG_CLIENT_MONOBODYBLENDSHAPESCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xC05A8F0)
#define RPG_CLIENT_MONOBODYBLENDSHAPESCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0xC05AA20)
#define RPG_CLIENT_MONOBODYBLENDSHAPESCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC05ADF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBodyBlendShapesController_TypeDefinitionIndex = 66492;

	class MonoBodyBlendShapesController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* bodyMeshRenderer; // 0x18
		::Il2CppArray<::System::String*>* Field_5_1; // 0x20
		::System::Single maxLegAngle; // 0x28
		::System::String* leftLegShapeName; // 0x30
		::UnityEngine::Transform* leftKnee; // 0x38
		::System::Single leftKneeStartValue; // 0x40
		::System::String* rightLegShapeName; // 0x48
		::UnityEngine::Transform* rightKnee; // 0x50
		::System::Single rightKneeStartValue; // 0x58
		::RPG::Client::NamedCurve* legShapeCurve; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYBLENDSHAPESCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYBLENDSHAPESCONTROLLER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYBLENDSHAPESCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void OnIKWorked(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYBLENDSHAPESCONTROLLER_ONIKWORKED_OFFSET))(this, a1, a2);
		}
	};
}
