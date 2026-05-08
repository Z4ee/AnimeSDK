#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"

namespace FluffyUnderware::Curvy::Generator { class CGGameObjectProperties; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_GET_GAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1B03EFC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_GET_SUPPORTSIPE_OFFSET UNITYSDK_OFFSET(0x1B03EFD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_ONTEMPLATECREATED_OFFSET UNITYSDK_OFFSET(0x1B03F2F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B03F030)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_RESET_OFFSET UNITYSDK_OFFSET(0x1B03EFE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_WARNABOUTINVALIDINPUTS_OFFSET UNITYSDK_OFFSET(0x1B03F340)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B03F500)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int InputGameObject_TypeDefinitionIndex = 37415;

	class InputGameObject : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutGameObject; // 0xB8
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*>* m_GameObjects; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*>* get_GameObjects()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_GET_GAMEOBJECTS_OFFSET))(this);
		}

		::System::Boolean get_SupportsIPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_GET_SUPPORTSIPE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_REFRESH_OFFSET))(this);
		}

		::System::Void OnTemplateCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_ONTEMPLATECREATED_OFFSET))(this);
		}

		::System::Void WarnAboutInvalidInputs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT_WARNABOUTINVALIDINPUTS_OFFSET))(this);
		}
	};
}
