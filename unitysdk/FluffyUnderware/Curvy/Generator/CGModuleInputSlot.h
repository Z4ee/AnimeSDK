#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModuleSlot.h"

namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestParameter; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class InputSlotInfo; }
namespace FluffyUnderware::Curvy::Generator { class OutputSlotInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_AREINPUTANDOUTPUTSLOTSCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1B7C71F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_CANLINKTO_OFFSET UNITYSDK_OFFSET(0x1B7C6EF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_GET_INPUTINFO_OFFSET UNITYSDK_OFFSET(0x1B7C57E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_GET_ISONREQUEST_OFFSET UNITYSDK_OFFSET(0x1B7C5840)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_LINKTO_OFFSET UNITYSDK_OFFSET(0x1B7C5DB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_LOADLINKEDSLOTS_OFFSET UNITYSDK_OFFSET(0x1B7C5910)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_SOURCESLOT_OFFSET UNITYSDK_OFFSET(0x1B7C6BD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_UNLINKFROM_OFFSET UNITYSDK_OFFSET(0x1B7C6680)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C7270)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModuleInputSlot_TypeDefinitionIndex = 37326;

	class CGModuleInputSlot : public ::FluffyUnderware::Curvy::Generator::CGModuleSlot
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::InputSlotInfo* get_InputInfo()
		{
			return ((::FluffyUnderware::Curvy::Generator::InputSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_GET_INPUTINFO_OFFSET))(this);
		}

		::System::Boolean get_IsOnRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_GET_ISONREQUEST_OFFSET))(this);
		}

		::System::Void LoadLinkedSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_LOADLINKEDSLOTS_OFFSET))(this);
		}

		::System::Void LinkTo(::FluffyUnderware::Curvy::Generator::CGModuleSlot* outputSlot)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_LINKTO_OFFSET))(this, outputSlot);
		}

		::System::Void UnlinkFrom(::FluffyUnderware::Curvy::Generator::CGModuleSlot* outputSlot)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_UNLINKFROM_OFFSET))(this, outputSlot);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* SourceSlot(::System::Int32 index)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_SOURCESLOT_OFFSET))(this, index);
		}

		::System::Boolean CanLinkTo(::FluffyUnderware::Curvy::Generator::CGModuleSlot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_CANLINKTO_OFFSET))(this, other);
		}

		static ::System::Boolean AreInputAndOutputSlotsCompatible(::FluffyUnderware::Curvy::Generator::InputSlotInfo* inputSlotInfo, ::System::Boolean inputSlotModuleIsOnRequest, ::FluffyUnderware::Curvy::Generator::OutputSlotInfo* outputSlotInfo, ::System::Boolean outputSlotModuleIsOnRequest)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::InputSlotInfo*, ::System::Boolean, ::FluffyUnderware::Curvy::Generator::OutputSlotInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_AREINPUTANDOUTPUTSLOTSCOMPATIBLE_OFFSET))(inputSlotInfo, inputSlotModuleIsOnRequest, outputSlotInfo, outputSlotModuleIsOnRequest);
		}
	};
}
