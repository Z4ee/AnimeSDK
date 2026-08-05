#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_BIGSCENETELESCOPEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167EBAF0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneTelescopePageContext_TypeDefinitionIndex = 56910;

	class BigSceneTelescopePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TelescopeConfigKey; // 0x28
		::System::Single FarClip; // 0x30
		::System::Int32 Fov; // 0x34
		::System::Single NeraClip; // 0x38
		::UnityEngine::Vector3 Position; // 0x3C
		::UnityEngine::Quaternion Rotation; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETELESCOPEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
