#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOINLEVELFOLLOWLIGHTTONORMALTEX_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1176B8C0)
#define MOLEMOLE_MONOINLEVELFOLLOWLIGHTTONORMALTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1176BAB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInlevelFollowLightToNormalTex_TypeDefinitionIndex = 53943;

	class MonoInlevelFollowLightToNormalTex : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELFOLLOWLIGHTTONORMALTEX__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELFOLLOWLIGHTTONORMALTEX_LATEUPDATE_OFFSET))(this);
		}
	};
}
