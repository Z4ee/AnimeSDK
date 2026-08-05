#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

namespace System { class String; }

#define MOLEMOLE_EOUSGAMESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13A7AB90)
#define MOLEMOLE_EOUSGAMESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13A7A940)
#define MOLEMOLE_EOUSGAMESUBSYSTEM_SETHACKSKILLACTIVE_OFFSET UNITYSDK_OFFSET(0x13A7AA00)
#define MOLEMOLE_EOUSGAMESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7ABE0)
#define MOLEMOLE_EOUSGAMESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13A7AC00)
#define MOLEMOLE_EOUSGAMESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13A7AC90)

namespace MoleMole
{
	inline static constexpr unsigned int EousGameSubSystem_TypeDefinitionIndex = 66453;

	class EousGameSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::EousGameSubSystem*>
	{
	public:
		// static const ::System::String* HackSkillTag; // 0x0
		// static const ::System::Int32 HackSkillPriority = 0x63; // 0x0
		::System::Boolean _hackSkillActive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetHackSkillActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM_SETHACKSKILLACTIVE_OFFSET))(this, active);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
