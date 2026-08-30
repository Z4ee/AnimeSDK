#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FloatingSpiritBlock; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_METHOD_3_83054DEDC4FE60A2_OFFSET UNITYSDK_OFFSET(0x1D85EC70)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_METHOD_3_AC3925C480356C78_OFFSET UNITYSDK_OFFSET(0x1D85ECB0)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85ECA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFloatingSpiritPropSpawnerParam_TypeDefinitionIndex = 18365;

	class FiveDimFloatingSpiritPropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean IsFollowBeat; // 0x10
		::RPG::GameCore::FiveDimOrthoDirection InitDirection; // 0x14
		::System::Boolean InitMoveRight; // 0x18
		::System::Boolean InitMoveUp; // 0x19
		::System::Boolean EnableOverrideMoveSpeed; // 0x1A
		::System::Single MoveSpeedOverride; // 0x1C
		::RPG::MVector3 Position1; // 0x20
		::RPG::MVector3 Position2; // 0x2C
		::System::UInt16 BeatCount; // 0x38
		::System::UInt16 StartIndex; // 0x3A
		::System::Boolean StartMoveBackward; // 0x3C
		::System::Boolean BindLevelVarBlock; // 0x3D
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x40
		::Il2CppArray<::RPG::GameCore::FloatingSpiritBlock*>* LevelVarBlockIndex; // 0x48
		::System::Boolean HasAttachEntity; // 0x50
		::System::UInt32 AttachEntityID; // 0x54
		::System::String* AttachPointName; // 0x58
		::RPG::MVector3 AttachRotationOffset; // 0x60
		::RPG::MVector3 AttachPositionOffset; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_83054DEDC4FE60A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_METHOD_3_83054DEDC4FE60A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC3925C480356C78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_METHOD_3_AC3925C480356C78_OFFSET))(a1, a2);
		}
	};
}
