#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_777;
namespace RPG::GameCore { class EntityLodDetail; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NPCMONOLOD_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x9E91D80)
#define RPG_CLIENT_NPCMONOLOD_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9E91C20)
#define RPG_CLIENT_NPCMONOLOD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9E91920)
#define RPG_CLIENT_NPCMONOLOD_REGISTERLODLISTENER_OFFSET UNITYSDK_OFFSET(0x9E91C60)
#define RPG_CLIENT_NPCMONOLOD_UNREGISTERLODLISTENER_OFFSET UNITYSDK_OFFSET(0x9E91D10)
#define RPG_CLIENT_NPCMONOLOD_UPDATELOD_OFFSET UNITYSDK_OFFSET(0x9E91990)
#define RPG_CLIENT_NPCMONOLOD__CTOR_OFFSET UNITYSDK_OFFSET(0x9E91D90)

namespace RPG::Client
{
	inline static constexpr unsigned int NpcMonoLod_TypeDefinitionIndex = 56053;

	class NpcMonoLod : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::System::Int32 Field_5_1; // 0x1C
		::RPG::GameCore::EntityLodDetail* Field_5_2; // 0x20
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_777*>* Field_5_3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdateLod(::System::Int32 a1, ::RPG::GameCore::EntityLodDetail* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_UPDATELOD_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterLodListener(::Class_0_16E4307DCC419505_777* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_777*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_REGISTERLODLISTENER_OFFSET))(this, a1);
		}

		::System::Void UnregisterLodListener(::Class_0_16E4307DCC419505_777* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_777*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_UNREGISTERLODLISTENER_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_GET_INITIALIZED_OFFSET))(this);
		}
	};
}
