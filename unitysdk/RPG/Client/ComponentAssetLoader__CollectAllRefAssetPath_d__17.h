#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_ComponentLoadAssetInfo.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComponentAssetLoader; }
namespace System { class String; }

#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB6FE6F0)
#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB6FE840)
#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB6FE8A0)
#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB6FE850)
#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6FE6E0)
#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0xB6FE3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader__CollectAllRefAssetPath_d__17_TypeDefinitionIndex = 63984;

	class ComponentAssetLoader__CollectAllRefAssetPath_d__17 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _paths_5__5; // 0x10
		::Il2CppArray<::RPG::Client::ComponentAssetLoader_ComponentLoadAssetInfo>* _states_5__3; // 0x18
		::RPG::Client::ComponentAssetLoader* __4__this; // 0x20
		::System::String* __2__current; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 _j_5__4; // 0x34
		::System::Int32 _k_5__6; // 0x38
		::System::Int32 _i_5__2; // 0x3C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
