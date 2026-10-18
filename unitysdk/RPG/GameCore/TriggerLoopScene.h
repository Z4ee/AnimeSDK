#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoopSceneMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LoopMoveObject; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERLOOPSCENE_METHOD_3_0284A79AB96D2C5B_OFFSET UNITYSDK_OFFSET(0x1DC26980)
#define RPG_GAMECORE_TRIGGERLOOPSCENE_METHOD_3_2B7F8C13164C4E38_OFFSET UNITYSDK_OFFSET(0x1DC26A00)
#define RPG_GAMECORE_TRIGGERLOOPSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC269D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerLoopScene_TypeDefinitionIndex = 20430;

	class TriggerLoopScene : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LoopSceneMode LoopMode; // 0x18
		::RPG::MVector3 PositionOffset; // 0x1C
		::System::String* ModelPath; // 0x28
		::RPG::MVector3 CameraPositionOffset; // 0x30
		::RPG::MVector3 CameraDirection; // 0x3C
		::RPG::MVector3 CameraRotationOffset; // 0x48
		::System::Single MoveSpeed; // 0x54
		::System::UInt32 SceneSize; // 0x58
		::System::Single SceneLength; // 0x5C
		::System::Single MaxRollbackLength; // 0x60
		::Il2CppArray<::RPG::GameCore::LoopMoveObject*>* MoveObjects; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLOOPSCENE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0284A79AB96D2C5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerLoopScene*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerLoopScene*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLOOPSCENE_METHOD_3_0284A79AB96D2C5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B7F8C13164C4E38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerLoopScene* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerLoopScene*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLOOPSCENE_METHOD_3_2B7F8C13164C4E38_OFFSET))(a1, a2);
		}
	};
}
