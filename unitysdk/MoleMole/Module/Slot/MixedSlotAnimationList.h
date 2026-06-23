#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Module::Slot { class MixedSlotAnimation; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MODULE_SLOT_MIXEDSLOTANIMATIONLIST_SETUP_OFFSET UNITYSDK_OFFSET(0x13F0A750)
#define MOLEMOLE_MODULE_SLOT_MIXEDSLOTANIMATIONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x13F0A950)

namespace MoleMole::Module::Slot
{
	inline static constexpr unsigned int MixedSlotAnimationList_TypeDefinitionIndex = 75229;

	class MixedSlotAnimationList : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot1Config; // 0x18
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot2Config; // 0x20
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot3Config; // 0x28
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot4Config; // 0x30
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot5Config; // 0x38
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot6Config; // 0x40
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot7Config; // 0x48
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot8Config; // 0x50
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot9Config; // 0x58
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot10Config; // 0x60
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot11Config; // 0x68
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot12Config; // 0x70
		::MoleMole::Module::Slot::MixedSlotAnimation* Slot13Config; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::Module::Slot::MixedSlotAnimation*>* Field_5_13; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_SLOT_MIXEDSLOTANIMATIONLIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Module::Slot::MixedSlotAnimation*>* Setup()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Module::Slot::MixedSlotAnimation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_SLOT_MIXEDSLOTANIMATIONLIST_SETUP_OFFSET))(this);
		}
	};
}
