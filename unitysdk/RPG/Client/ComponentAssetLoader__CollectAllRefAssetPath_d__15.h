#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_ComponentLoadAssetInfo.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComponentAssetLoader; }
namespace System { class String; }

#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA0BFCB0)
#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA0BFE30)
#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA0BFE90)
#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA0BFE40)
#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0BFC90)
#define RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BFA10)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader__CollectAllRefAssetPath_d__15_TypeDefinitionIndex = 63069;

	class ComponentAssetLoader__CollectAllRefAssetPath_d__15 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _paths_5__5; // 0x10
		::System::String* __2__current; // 0x18
		::RPG::Client::ComponentAssetLoader* __4__this; // 0x20
		::Il2CppArray<::RPG::Client::ComponentAssetLoader_ComponentLoadAssetInfo>* _states_5__3; // 0x28
		::System::Int32 _j_5__4; // 0x30
		::System::Int32 _k_5__6; // 0x34
		::System::Int32 _i_5__2; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER__COLLECTALLREFASSETPATH_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
