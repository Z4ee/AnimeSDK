#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1022;
namespace RPG::GameCore { class EntityLodDetail; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NPCMONOLOD_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xD9DA420)
#define RPG_CLIENT_NPCMONOLOD_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD9DA190)
#define RPG_CLIENT_NPCMONOLOD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD9D9CC0)
#define RPG_CLIENT_NPCMONOLOD_REGISTERLODLISTENER_OFFSET UNITYSDK_OFFSET(0xD9DA1D0)
#define RPG_CLIENT_NPCMONOLOD_UNREGISTERLODLISTENER_OFFSET UNITYSDK_OFFSET(0xD9DA3B0)
#define RPG_CLIENT_NPCMONOLOD_UPDATELOD_OFFSET UNITYSDK_OFFSET(0xD9D9D30)
#define RPG_CLIENT_NPCMONOLOD__CTOR_OFFSET UNITYSDK_OFFSET(0xD9DA430)

namespace RPG::Client
{
	inline static constexpr unsigned int NpcMonoLod_TypeDefinitionIndex = 68599;

	class NpcMonoLod : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean CGDHNDBBDCH; // 0x18
		::System::Int32 PLOOECPBOEJ; // 0x1C
		::RPG::GameCore::EntityLodDetail* PAEMLLPLDPB; // 0x20
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1022*>* PMBNNOOFAOM; // 0x28

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

		::System::Void RegisterLodListener(::Class_0_16E4307DCC419505_1022* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1022*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_REGISTERLODLISTENER_OFFSET))(this, a1);
		}

		::System::Void UnregisterLodListener(::Class_0_16E4307DCC419505_1022* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1022*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMONOLOD_UNREGISTERLODLISTENER_OFFSET))(this, a1);
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
