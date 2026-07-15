#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

namespace RPG::Client::Prop { class WaterLevelBoxman; }
namespace RPG::Client::Prop { class WaterLevelController; }
namespace RPG::Client::Prop { class WaterLevelGateController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_CANWATERLEVELCHANGE_OFFSET UNITYSDK_OFFSET(0x16126E50)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_CHANGEWATERLEVEL_OFFSET UNITYSDK_OFFSET(0x16126C90)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161299D0)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_DUMPSAVEDATA_OFFSET UNITYSDK_OFFSET(0x16129EB0)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x16128EE0)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_METHOD_6_1D77A561617C71A4_OFFSET UNITYSDK_OFFSET(0x16129420)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_ONCHANGEWATERLEVELEND_OFFSET UNITYSDK_OFFSET(0x16125C70)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x16129750)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x16129BE0)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_TRYSAVEDATATOSERVER_OFFSET UNITYSDK_OFFSET(0x16125170)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1612A030)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelPuzzleBoardPlus_TypeDefinitionIndex = 74963;

	class WaterLevelPuzzleBoardPlus : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Int32 WaterLevelIndex; // 0x48
		::UnityEngine::GameObject* WaterLevelBoxObject; // 0x50
		::Il2CppArray<::UnityEngine::GameObject*>* WaterLevelController; // 0x58
		::Il2CppArray<::UnityEngine::GameObject*>* WaterLevelGateController; // 0x60
		::System::String* WaterLevelControlLeftTextID; // 0x68
		::System::String* WaterLevelControlRightTextID; // 0x70
		::System::String* WaterLevelControllerInvalidWaterLevelIndexHintTextID; // 0x78
		::System::String* WaterLevelGateNotCloseErrorHintTextID; // 0x80
		::System::String* OpenGateTextID; // 0x88
		::System::String* CloseGateTextID; // 0x90
		::System::String* WaterLevelOpenGateErrorHintTextID; // 0x98
		::System::Int32 Field_6_11; // 0xA0
		::RPG::Client::Prop::WaterLevelBoxman* Field_6_12; // 0xA8
		::Il2CppArray<::RPG::Client::Prop::WaterLevelController*>* Field_6_13; // 0xB0
		::Il2CppArray<::RPG::Client::Prop::WaterLevelGateController*>* Field_6_14; // 0xB8
		::System::Text::StringBuilder* Field_6_15; // 0xC0
		::RPG::GameCore::PropComponent* Field_6_16; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_DISPOSE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Boolean CanWaterLevelChange(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_CANWATERLEVELCHANGE_OFFSET))(this, a1);
		}

		::System::Void ChangeWaterLevel(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_CHANGEWATERLEVEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnChangeWaterLevelEnd(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_ONCHANGEWATERLEVELEND_OFFSET))(this, a1, a2);
		}

		::System::String* DumpSaveData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_DUMPSAVEDATA_OFFSET))(this);
		}

		::System::Void TrySaveDataToServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_TRYSAVEDATATOSERVER_OFFSET))(this);
		}

		::System::Boolean Method_6_1D77A561617C71A4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARDPLUS_METHOD_6_1D77A561617C71A4_OFFSET))(this);
		}
	};
}
