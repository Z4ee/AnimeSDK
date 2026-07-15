#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NPCPedestrianGPUAssetConfig; }
namespace RPG::Client { class NPCPedestrianGPUAssetConfig_Asset; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18EAF320)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18EAF430)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18EAF3C0)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18EAF4B0)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18EAF420)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18EAF3D0)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18EAF310)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAEFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCPedestrianGPUAssetConfig__FindAllIdentities_d__4_TypeDefinitionIndex = 66164;

	class NPCPedestrianGPUAssetConfig__FindAllIdentities_d__4 : public ::System::Object
	{
	public:
		::RPG::Client::NPCPedestrianGPUAssetConfig* __4__this; // 0x10
		::System::String* __2__current; // 0x18
		::Il2CppArray<::RPG::Client::NPCPedestrianGPUAssetConfig_Asset*>* __7__wrap1; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Int32 __7__wrap2; // 0x2C
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__FINDALLIDENTITIES_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
