#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DynamicMaterialLoader; }
namespace RPG::Client { class DynamicMaterialLoader_MaterialLoadItem; }
namespace System { class String; }

#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCDABFB0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCDAC100)
#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCDAC160)
#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCDAC110)
#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCDABFA0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0xCDABEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicMaterialLoader__CollectAllRefAssetPath_d__10_TypeDefinitionIndex = 68378;

	class DynamicMaterialLoader__CollectAllRefAssetPath_d__10 : public ::System::Object
	{
	public:
		::System::String* __2__current; // 0x10
		::RPG::Client::DynamicMaterialLoader* __4__this; // 0x18
		::Il2CppArray<::RPG::Client::DynamicMaterialLoader_MaterialLoadItem*>* _mats_5__3; // 0x20
		::System::Int32 _i_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Int32 _j_5__4; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER__COLLECTALLREFASSETPATH_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
