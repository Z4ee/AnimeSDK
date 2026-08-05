#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"

class Class_1_43BD383C98B4C0C5_31;

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1BD43B50)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_RUN_OFFSET UNITYSDK_OFFSET(0x12CAB330)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD43D00)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1BD43DA0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x1BD43D10)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigAction_TypeDefinitionIndex = 89796;

	class TextureSheetConfigAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x28
		::System::Int32 BaseScreenIndex; // 0x2C
		::System::Boolean RandomPlay; // 0x30
		::System::Boolean SpecialScreenBaseIndex; // 0x31
		::System::Boolean DisableSync; // 0x32
		::System::Boolean SendIconToServer; // 0x33
		::System::Int32 ConfigID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_31* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_31* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_RUN_OFFSET))(this, P0);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_FORCESTOP_OFFSET))(this);
		}
	};
}
