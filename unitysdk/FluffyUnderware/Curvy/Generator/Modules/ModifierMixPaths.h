#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"

namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestParameter; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGPath; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_GET_MIX_OFFSET UNITYSDK_OFFSET(0x1F40FC60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_GET_PATHISCLOSED_OFFSET UNITYSDK_OFFSET(0x1F40FCD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_MIXPATH_OFFSET UNITYSDK_OFFSET(0x1F410170)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F40FF20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_ONSLOTDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1F40FFB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_RESET_OFFSET UNITYSDK_OFFSET(0x1F40FF60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_SET_MIX_OFFSET UNITYSDK_OFFSET(0x1F40FC70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F410910)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ModifierMixPaths_TypeDefinitionIndex = 39576;

	class ModifierMixPaths : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		// static const ::System::Int32 MixMinValue = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MixMaxValue = 0x1; // 0x0
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InPathA; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InPathB; // 0xC0
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutPath; // 0xC8
		::System::Single m_Mix; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS__CTOR_OFFSET))(this);
		}

		::System::Single get_Mix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_GET_MIX_OFFSET))(this);
		}

		::System::Void set_Mix(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_SET_MIX_OFFSET))(this, value);
		}

		::System::Boolean get_PathIsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_GET_PATHISCLOSED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_RESET_OFFSET))(this);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* OnSlotDataRequest(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* requestedBy, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* requestedSlot, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>* requests)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_ONSLOTDATAREQUEST_OFFSET))(this, requestedBy, requestedSlot, requests);
		}

		static ::FluffyUnderware::Curvy::Generator::CGPath* MixPath(::FluffyUnderware::Curvy::Generator::CGPath* pathA, ::FluffyUnderware::Curvy::Generator::CGPath* pathB, ::System::Single mix, ::System::Collections::Generic::List_1<::System::String*>* warningsContainer)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGPath*(*)(::FluffyUnderware::Curvy::Generator::CGPath*, ::FluffyUnderware::Curvy::Generator::CGPath*, ::System::Single, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXPATHS_MIXPATH_OFFSET))(pathA, pathB, mix, warningsContainer);
		}
	};
}
