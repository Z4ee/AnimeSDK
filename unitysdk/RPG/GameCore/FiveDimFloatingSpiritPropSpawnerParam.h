#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FloatingSpiritBlock; }

#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_METHOD_3_0B74495FBC9C4293_OFFSET UNITYSDK_OFFSET(0x171F2770)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_METHOD_3_611AD1FE4859374D_OFFSET UNITYSDK_OFFSET(0x171F2730)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x171F2760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFloatingSpiritPropSpawnerParam_TypeDefinitionIndex = 17050;

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

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_611AD1FE4859374D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_METHOD_3_611AD1FE4859374D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B74495FBC9C4293(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_METHOD_3_0B74495FBC9C4293_OFFSET))(a1, a2);
		}
	};
}
