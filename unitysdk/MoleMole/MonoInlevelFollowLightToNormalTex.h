#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOINLEVELFOLLOWLIGHTTONORMALTEX_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x129BFEE0)
#define MOLEMOLE_MONOINLEVELFOLLOWLIGHTTONORMALTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x129C00D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInlevelFollowLightToNormalTex_TypeDefinitionIndex = 83933;

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
