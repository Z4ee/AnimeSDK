#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_0_16E4307DCC419505_1314;
class Class_1_9C1673530BBC4E15;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC366F0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC35BF0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_5A14B0184AC782C6_OFFSET UNITYSDK_OFFSET(0xDC36130)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xDC35EF0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xDC36A10)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_9C16634C6396BCD1_OFFSET UNITYSDK_OFFSET(0xDC369A0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xDC368E0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC35FB0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC36580)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDC36A70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraPreparationPuzzleBoard_TypeDefinitionIndex = 78003;

	class ChimeraPreparationPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _StatePrefabs; // 0x48
		::System::String* _ExitPuzzleCustomStringEvent; // 0x50
		::System::String* _SkipTargetDataKey; // 0x58
		::Class_0_16E4307DCC419505_1314* CBIGPGKJAEI; // 0x60
		::Class_1_9C1673530BBC4E15* IPLGCJPLIKH; // 0x68

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

		::System::Void Method_6_5FBAD89A54D9F070()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_5FBAD89A54D9F070_OFFSET))(this);
		}

		::System::Void Method_6_F944CC0CE8B3E57A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_F944CC0CE8B3E57A_OFFSET))(this);
		}

		::System::Void Method_6_9C16634C6396BCD1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_9C16634C6396BCD1_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraPreparationState Method_6_5A14B0184AC782C6()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_5A14B0184AC782C6_OFFSET))(this);
		}

		::System::Void Method_6_62593EE2FE331D20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_62593EE2FE331D20_OFFSET))(this);
		}
	};
}
