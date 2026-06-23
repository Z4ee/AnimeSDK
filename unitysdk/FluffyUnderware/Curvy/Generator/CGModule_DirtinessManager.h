#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace System { template <typename T> class Action_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_CHECKONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1E0D6640)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_FOREACHVALIDOUTPUTMODULE_OFFSET UNITYSDK_OFFSET(0x1E0D61D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1E0D60C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E0D6680)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1E0D6630)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_SETTREEDIRTYSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1E0D66F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1E0D60D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_UNSETDIRTYFLAG_OFFSET UNITYSDK_OFFSET(0x1E0D6620)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D6760)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D60B0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule_DirtinessManager_TypeDefinitionIndex = 38900;

	class CGModule_DirtinessManager : public ::System::Object
	{
	public:
		static ::System::Action_1<::FluffyUnderware::Curvy::Generator::CGModule*>** StaticGet_SetDirtyAction()
		{
			return (::System::Action_1<::FluffyUnderware::Curvy::Generator::CGModule*>**)Il2CppClass::FromTypeDefinitionIndex(CGModule_DirtinessManager_TypeDefinitionIndex)->GetStaticField(0x295E0);
		}
		static ::System::Action_1<::FluffyUnderware::Curvy::Generator::CGModule*>** StaticGet_SetTreeDirtyStateChangeAction()
		{
			return (::System::Action_1<::FluffyUnderware::Curvy::Generator::CGModule*>**)Il2CppClass::FromTypeDefinitionIndex(CGModule_DirtinessManager_TypeDefinitionIndex)->GetStaticField(0x295E8);
		}
		::FluffyUnderware::Curvy::Generator::CGModule* module; // 0x10
		::System::Boolean lastIsConfiguredState; // 0x18
		::System::Boolean isStateChangeDirty; // 0x19
		::System::Boolean isDirty; // 0x1A

		::System::Void _ctor(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER__CTOR_OFFSET))(this, module);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_SET_ISDIRTY_OFFSET))(this, value);
		}

		::System::Void UnsetDirtyFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_UNSETDIRTYFLAG_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_RESET_OFFSET))(this);
		}

		::System::Void CheckOnStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_CHECKONSTATECHANGED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetTreeDirtyStateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_SETTREEDIRTYSTATECHANGE_OFFSET))(this);
		}

		::System::Void ForEachValidOutputModule(::System::Action_1<::FluffyUnderware::Curvy::Generator::CGModule*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FluffyUnderware::Curvy::Generator::CGModule*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER_FOREACHVALIDOUTPUTMODULE_OFFSET))(this, action);
		}
	};
}
