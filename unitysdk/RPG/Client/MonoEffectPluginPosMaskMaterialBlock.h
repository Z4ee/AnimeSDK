#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCompoundMaterialBlock.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINPOSMASKMATERIALBLOCK_SETMATERIALPROPETIES_OFFSET UNITYSDK_OFFSET(0xD7C4460)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSMASKMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C4690)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginPosMaskMaterialBlock_TypeDefinitionIndex = 69899;

	class MonoEffectPluginPosMaskMaterialBlock : public ::RPG::Client::MonoEffectPluginCompoundMaterialBlock
	{
	public:
		::System::Boolean DissolvePosMaskOn; // 0x18
		::System::Single PosMaskRange; // 0x1C
		::System::Boolean DissolvePosMaskWorldON; // 0x20
		::UnityEngine::Vector4 DissolvePosMaskRootOffset; // 0x24
		::System::Boolean DissolvePosMaskFilpOn; // 0x34
		::UnityEngine::Transform* PosMaskTarget; // 0x38
		::UnityEngine::Vector4 DissolvePosMaskPos; // 0x40
		::UnityEngine::Vector3 FJEFCMHNPFA; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSMASKMATERIALBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void SetMaterialPropeties(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSMASKMATERIALBLOCK_SETMATERIALPROPETIES_OFFSET))(this, a1);
		}
	};
}
