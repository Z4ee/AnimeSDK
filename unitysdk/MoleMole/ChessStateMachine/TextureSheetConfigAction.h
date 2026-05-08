#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"

class Class_1_43BD383C98B4C0C5_20;

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1751FE10)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1751F4A0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1751FFC0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x17520060)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x1751FFD0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigAction_TypeDefinitionIndex = 80728;

	class TextureSheetConfigAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::Boolean RandomPlay; // 0x28
		::System::Boolean DisableSync; // 0x29
		::System::Boolean SendIconToServer; // 0x2A
		::System::Boolean SpecialScreenBaseIndex; // 0x2B
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x2C
		::System::Int32 ConfigID; // 0x30
		::System::Int32 BaseScreenIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_20* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_RUN_OFFSET))(this, P0);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_FORCESTOP_OFFSET))(this);
		}
	};
}
