#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Arcade::SnakeDemo { class DebugForSnake_Class_1_9BAA6FE939CB9BFB; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BFD14B0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BFD14A0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_METHOD_5_A8DD56714A34681F_OFFSET UNITYSDK_OFFSET(0x1BFD1600)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_METHOD_5_F86F3C934C617D7C_OFFSET UNITYSDK_OFFSET(0x1BFD1A40)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHDELAY_OFFSET UNITYSDK_OFFSET(0x1BFD1750)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHENTITYMSG_OFFSET UNITYSDK_OFFSET(0x1BFD17C0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHWORLDPASSTIME_OFFSET UNITYSDK_OFFSET(0x1BFD1500)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFD18B0)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int DebugForSnake_TypeDefinitionIndex = 85374;

	class DebugForSnake : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Arcade::SnakeDemo::DebugForSnake** StaticGet_Field_5_0()
		{
			return (::MoleMole::Arcade::SnakeDemo::DebugForSnake**)Il2CppClass::FromTypeDefinitionIndex(DebugForSnake_TypeDefinitionIndex)->GetStaticField(0x49F10);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* TeamValue; // 0x18
		::System::Single TeamRatio; // 0x20
		::System::Int32 HostTeamId; // 0x24
		::System::Collections::Generic::List_1<::MoleMole::Arcade::SnakeDemo::DebugForSnake_Class_1_9BAA6FE939CB9BFB*>* Field_5_4; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Arcade::SnakeDemo::DebugForSnake* get_Instance()
		{
			return ((::MoleMole::Arcade::SnakeDemo::DebugForSnake*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_AWAKE_OFFSET))(this);
		}

		::System::Void RefreshWorldPassTime(::System::UInt32 a1, ::System::Single a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHWORLDPASSTIME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RefreshDelay(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHDELAY_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshEntityMsg(::System::UInt32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHENTITYMSG_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_5_F86F3C934C617D7C(::MoleMole::Arcade::SnakeDemo::DebugForSnake* a1)
		{
			return ((::System::Void(*)(::MoleMole::Arcade::SnakeDemo::DebugForSnake*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_METHOD_5_F86F3C934C617D7C_OFFSET))(a1);
		}

		::MoleMole::Arcade::SnakeDemo::DebugForSnake_Class_1_9BAA6FE939CB9BFB* Method_5_A8DD56714A34681F(::System::UInt32 a1)
		{
			return ((::MoleMole::Arcade::SnakeDemo::DebugForSnake_Class_1_9BAA6FE939CB9BFB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_METHOD_5_A8DD56714A34681F_OFFSET))(this, a1);
		}
	};
}
