#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animation; }

#define MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_8652DE0774915A40_OFFSET UNITYSDK_OFFSET(0x1686C7E0)
#define MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_A47A1AF85D5655BE_OFFSET UNITYSDK_OFFSET(0x1686C620)
#define MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_F6C10DB4374245F7_OFFSET UNITYSDK_OFFSET(0x1686C610)
#define MOLEMOLE_MONOANIMATIONPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1686C5C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAnimationPluginBase_TypeDefinitionIndex = 49593;

	class MonoAnimationPluginBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_F6C10DB4374245F7(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_F6C10DB4374245F7_OFFSET))(this, a1);
		}

		::UnityEngine::Animation* Method_5_A47A1AF85D5655BE()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_A47A1AF85D5655BE_OFFSET))(this);
		}

		::UnityEngine::Animation* Method_5_8652DE0774915A40()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE_METHOD_5_8652DE0774915A40_OFFSET))(this);
		}
	};
}
