#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_COMPONENTASSETLOADERBASE_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0x1A289AB0)
#define RPG_CLIENT_COMPONENTASSETLOADERBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A289B40)
#define RPG_CLIENT_COMPONENTASSETLOADERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A287650)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoaderBase_TypeDefinitionIndex = 68371;

	class ComponentAssetLoaderBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_AutoLoadInEditor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ComponentAssetLoaderBase_TypeDefinitionIndex)->GetStaticField(0x11B30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADERBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADERBASE__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADERBASE_COLLECTALLREFASSETPATH_OFFSET))(this);
		}
	};
}
