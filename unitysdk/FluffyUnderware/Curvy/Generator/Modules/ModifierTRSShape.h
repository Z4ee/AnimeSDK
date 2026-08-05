#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/TRSModuleBase.h"

namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestParameter; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERTRSSHAPE_GET_PATHISCLOSED_OFFSET UNITYSDK_OFFSET(0x1F7A89B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERTRSSHAPE_ONSLOTDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1F7A8B00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERTRSSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A8C20)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ModifierTRSShape_TypeDefinitionIndex = 39688;

	class ModifierTRSShape : public ::FluffyUnderware::Curvy::Generator::TRSModuleBase
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InShape; // 0xE0
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutShape; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERTRSSHAPE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_PathIsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERTRSSHAPE_GET_PATHISCLOSED_OFFSET))(this);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* OnSlotDataRequest(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* requestedBy, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* requestedSlot, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>* requests)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERTRSSHAPE_ONSLOTDATAREQUEST_OFFSET))(this, requestedBy, requestedSlot, requests);
		}
	};
}
