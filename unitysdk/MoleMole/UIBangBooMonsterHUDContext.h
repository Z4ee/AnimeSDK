#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBANGBOOMONSTERHUDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15224F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooMonsterHUDContext_TypeDefinitionIndex = 54578;

	class UIBangBooMonsterHUDContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::GameObject* Target; // 0x28
		::System::Single Offset; // 0x30
		::System::UInt32 EntityID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMONSTERHUDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
