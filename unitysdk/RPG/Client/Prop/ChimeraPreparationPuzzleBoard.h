#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_0_16E4307DCC419505_1148;
class Class_1_9C1673530BBC4E15;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADE7730)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xADE6E40)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_4DF3E3302DC9026A_OFFSET UNITYSDK_OFFSET(0xADE7960)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0xADE78C0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xADE79D0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0xADE70F0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_BCE5EEB8D293BC31_OFFSET UNITYSDK_OFFSET(0xADE72C0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xADE7190)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xADE7610)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xADE7A30)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADE7B60)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xADE7A80)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xADE7A90)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xADE7AF0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraPreparationPuzzleBoard_TypeDefinitionIndex = 71970;

	class ChimeraPreparationPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _StatePrefabs; // 0x48
		::System::String* _ExitPuzzleCustomStringEvent; // 0x50
		::System::String* _SkipTargetDataKey; // 0x58
		::Class_0_16E4307DCC419505_1148* Field_6_3; // 0x60
		::Class_1_9C1673530BBC4E15* Field_6_4; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_6_87E0654B98D0D63C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_87E0654B98D0D63C_OFFSET))(this);
		}

		::System::Void Method_6_510C3C62CAC002C3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_510C3C62CAC002C3_OFFSET))(this);
		}

		::System::Void Method_6_4DF3E3302DC9026A(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_4DF3E3302DC9026A_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraPreparationState Method_6_BCE5EEB8D293BC31()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_BCE5EEB8D293BC31_OFFSET))(this);
		}

		::System::Void Method_6_62593EE2FE331D20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_62593EE2FE331D20_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
