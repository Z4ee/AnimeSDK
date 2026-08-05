#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOSPAWNMONSTERCONFIG_EMPTY_OFFSET UNITYSDK_OFFSET(0x13AC4840)
#define MOLEMOLE_MONOSPAWNMONSTERCONFIG_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x13AC4950)
#define MOLEMOLE_MONOSPAWNMONSTERCONFIG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13AC4B90)
#define MOLEMOLE_MONOSPAWNMONSTERCONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13AC4A80)
#define MOLEMOLE_MONOSPAWNMONSTERCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AC4D70)
#define MOLEMOLE_MONOSPAWNMONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC4D10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSpawnMonsterConfig_TypeDefinitionIndex = 69892;

	class MonoSpawnMonsterConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoSpawnMonsterConfig*>** StaticGet_Field_5_5()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoSpawnMonsterConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSpawnMonsterConfig_TypeDefinitionIndex)->GetStaticField(0x46E60);
		}
		::MoleMole::FlowCanvas::Nodes::MonsterIDType idType; // 0x18
		::System::Int32 monsterId; // 0x1C
		::MoleMole::Config::CampType camp; // 0x20
		::System::Int32 aiId; // 0x24
		::System::String* monsterName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoSpawnMonsterConfig* GetComponentSafely(::System::Int32 a1)
		{
			return ((::MoleMole::MonoSpawnMonsterConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG_ONDISABLE_OFFSET))(this);
		}
	};
}
