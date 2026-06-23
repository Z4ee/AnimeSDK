#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/MonoComicEventBase.h"

namespace UnityEngine::Timeline { class LogicEventBase; }

#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x17D35520)
#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_JUMPTOFINALSTATE_OFFSET UNITYSDK_OFFSET(0x17D355E0)
#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_JUMPTOFINAL_OFFSET UNITYSDK_OFFSET(0x17D35630)
#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x17D35580)
#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D35670)
#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE___BASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x17D356C0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int RuntimeComicLogicEventBase_TypeDefinitionIndex = 51633;

	class RuntimeComicLogicEventBase : public ::MoleMole::Comic::MonoComicEventBase
	{
	public:
		::System::Single Field_6_0; // 0x50
		::System::Single Field_6_1; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::LogicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::LogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void JumpToFinalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_JUMPTOFINALSTATE_OFFSET))(this);
		}

		::System::Void JumpToFinal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_JUMPTOFINAL_OFFSET))(this);
		}

		::System::Void __base_ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE___BASE_RESETTODEFAULT_OFFSET))(this);
		}
	};
}
