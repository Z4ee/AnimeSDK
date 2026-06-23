#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GUIStyle; }

#define MOLEMOLE_CONFIG_BASEOBJECTUISPECIALNUM_GET_TOOLBARBUTTONGUISTYLE_OFFSET UNITYSDK_OFFSET(0x17038D70)
#define MOLEMOLE_CONFIG_BASEOBJECTUISPECIALNUM_TOGGLEBUTTONDRAWER_OFFSET UNITYSDK_OFFSET(0x17038F70)
#define MOLEMOLE_CONFIG_BASEOBJECTUISPECIALNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x17039000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseObjectUISpecialNum_TypeDefinitionIndex = 80637;

	class BaseObjectUISpecialNum : public ::System::Object
	{
	public:
		static ::UnityEngine::GUIStyle** StaticGet__toolbarButtonGUIStyle()
		{
			return (::UnityEngine::GUIStyle**)Il2CppClass::FromTypeDefinitionIndex(BaseObjectUISpecialNum_TypeDefinitionIndex)->GetStaticField(0x372E0);
		}
		::System::String* OverrideSpecialName; // 0x10
		::System::Boolean IsUseOverride; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEOBJECTUISPECIALNUM__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::GUIStyle* get_toolbarButtonGUIStyle()
		{
			return ((::UnityEngine::GUIStyle*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEOBJECTUISPECIALNUM_GET_TOOLBARBUTTONGUISTYLE_OFFSET))();
		}

		static ::System::Boolean ToggleButtonDrawer(::System::Boolean value)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEOBJECTUISPECIALNUM_TOGGLEBUTTONDRAWER_OFFSET))(value);
		}
	};
}
