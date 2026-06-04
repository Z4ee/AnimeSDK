#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_RENDERERPACKAGE_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB859460)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_RENDERERPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB8594D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayBehavior_RendererPackage_TypeDefinitionIndex = 66028;

	class Effect_InstanceArrayBehavior_RendererPackage : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x18
		::System::UInt32 renderingLayerMask; // 0x20
		::RPG::Client::TAUtils::SimpleTransform transform; // 0x24
		::System::Single animationDelay; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_RENDERERPACKAGE__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_RENDERERPACKAGE_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}
	};
}
