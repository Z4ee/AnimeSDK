#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOJIGSAWFRAMEIKBAKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACEBE20)
#define RPG_CLIENT_MONOJIGSAWFRAMEIKBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACEBE10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoJigsawFrameIKBaker_TypeDefinitionIndex = 68573;

	class MonoJigsawFrameIKBaker : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_AnimatorPoseState()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoJigsawFrameIKBaker_TypeDefinitionIndex)->GetStaticField(0x16340);
		}
		::UnityEngine::Transform* BodyEffectorTarget; // 0x18
		::System::Single MaxBodyEffectorHeight; // 0x20
		::System::Single MinBodyEffectorHeight; // 0x24
		::UnityEngine::Vector3 ANAHLJABNJF; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJIGSAWFRAMEIKBAKER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJIGSAWFRAMEIKBAKER__CCTOR_OFFSET))();
		}
	};
}
