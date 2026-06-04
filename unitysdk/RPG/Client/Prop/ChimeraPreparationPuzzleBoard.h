#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_0_16E4307DCC419505_1204;
class Class_1_9C1673530BBC4E15;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC52BBD0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC52B290)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0xC52BD60)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_3ED1B678614C2FAF_OFFSET UNITYSDK_OFFSET(0xC52BE20)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xC52B530)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xC52BE80)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_BCE5EEB8D293BC31_OFFSET UNITYSDK_OFFSET(0xC52B730)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC52B5F0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xC52BAB0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC52BEE0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC52C000)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC52BF30)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC52BF40)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xC52BFA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraPreparationPuzzleBoard_TypeDefinitionIndex = 72992;

	class ChimeraPreparationPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _StatePrefabs; // 0x48
		::System::String* _ExitPuzzleCustomStringEvent; // 0x50
		::System::String* _SkipTargetDataKey; // 0x58
		::Class_0_16E4307DCC419505_1204* Field_6_3; // 0x60
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

		::System::Void Method_6_5FBAD89A54D9F070()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_5FBAD89A54D9F070_OFFSET))(this);
		}

		::System::Void Method_6_2C8484BE9A26CCD5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_2C8484BE9A26CCD5_OFFSET))(this);
		}

		::System::Void Method_6_3ED1B678614C2FAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_3ED1B678614C2FAF_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraPreparationState Method_6_BCE5EEB8D293BC31()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_BCE5EEB8D293BC31_OFFSET))(this);
		}

		::System::Void Method_6_62593EE2FE331D20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_METHOD_6_62593EE2FE331D20_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
