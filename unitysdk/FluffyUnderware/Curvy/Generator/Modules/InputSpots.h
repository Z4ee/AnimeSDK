#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGSpot.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS_GET_SPOTS_OFFSET UNITYSDK_OFFSET(0x1B736190)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B7361E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B736260)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS_RESET_OFFSET UNITYSDK_OFFSET(0x1B736210)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS_SET_SPOTS_OFFSET UNITYSDK_OFFSET(0x1B7361A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B736360)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int InputSpots_TypeDefinitionIndex = 37421;

	class InputSpots : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutSpots; // 0xB8
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpot>* m_Spots; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpot>* get_Spots()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpot>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS_GET_SPOTS_OFFSET))(this);
		}

		::System::Void set_Spots(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpot>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpot>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS_SET_SPOTS_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTSPOTS_REFRESH_OFFSET))(this);
		}
	};
}
