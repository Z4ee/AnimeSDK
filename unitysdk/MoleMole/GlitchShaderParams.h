#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_GLITCHSHADERPARAMS_AWAKE_OFFSET UNITYSDK_OFFSET(0x151327C0)
#define MOLEMOLE_GLITCHSHADERPARAMS_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15132970)
#define MOLEMOLE_GLITCHSHADERPARAMS_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x15132810)
#define MOLEMOLE_GLITCHSHADERPARAMS_UPDATE_OFFSET UNITYSDK_OFFSET(0x15132AA0)
#define MOLEMOLE_GLITCHSHADERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x15132AF0)

namespace MoleMole
{
	inline static constexpr unsigned int GlitchShaderParams_TypeDefinitionIndex = 65240;

	class GlitchShaderParams : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Field_5_0; // 0x18
		::UnityEngine::Vector4 Field_5_1; // 0x1C
		::UnityEngine::Renderer* Field_5_2; // 0x30
		::UnityEngine::Transform* Field_5_3; // 0x38
		::UnityEngine::MaterialPropertyBlock* Field_5_4; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCHSHADERPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCHSHADERPARAMS_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCHSHADERPARAMS_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCHSHADERPARAMS_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCHSHADERPARAMS_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}
	};
}
