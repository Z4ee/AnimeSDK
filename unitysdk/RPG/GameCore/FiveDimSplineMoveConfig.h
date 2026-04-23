#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveControlMode.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveLoopType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimSplineMovePoint; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSPLINEMOVECONFIG_METHOD_2_3088575CE4BB3233_OFFSET UNITYSDK_OFFSET(0x1891ECB0)
#define RPG_GAMECORE_FIVEDIMSPLINEMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1891F190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSplineMoveConfig_TypeDefinitionIndex = 17632;

	class FiveDimSplineMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimSplineMoveControlMode ControlMode; // 0x10
		::System::UInt32 CurveID; // 0x14
		::System::Boolean FollowRotation; // 0x18
		::System::Boolean InitShowLineTrace; // 0x19
		::System::String* LineTraceEffectPath; // 0x20
		::RPG::MVector3 LineTraceOffset; // 0x28
		::System::Boolean PauseOnInvisible; // 0x34
		::System::Boolean StartOnInit; // 0x35
		::System::String* StartOnPoint; // 0x38
		::RPG::GameCore::FiveDimSplineMoveDirection StartDirection; // 0x40
		::RPG::GameCore::FiveDimSplineMoveLoopType LoopType; // 0x44
		::RPG::GameCore::LittleGameEvent* OnMoveStart; // 0x48
		::RPG::GameCore::LittleGameEvent* OnMoveStop; // 0x50
		::RPG::GameCore::LittleGameEvent* OnMoveReverse; // 0x58
		::Il2CppArray<::RPG::GameCore::FiveDimSplineMovePoint*>* PointConfigs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3088575CE4BB3233(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSplineMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSplineMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVECONFIG_METHOD_2_3088575CE4BB3233_OFFSET))(a1, a2);
		}
	};
}
