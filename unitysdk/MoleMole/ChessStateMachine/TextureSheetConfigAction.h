#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"

class Class_1_43BD383C98B4C0C5_24;

#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x144C9820)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_RUN_OFFSET UNITYSDK_OFFSET(0x144C8EB0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x144C99D0)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x144C9A70)
#define MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x144C99E0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TextureSheetConfigAction_TypeDefinitionIndex = 85446;

	class TextureSheetConfigAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::System::Int32 BaseScreenIndex; // 0x28
		::System::Int32 ConfigID; // 0x2C
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x30
		::System::Boolean SpecialScreenBaseIndex; // 0x34
		::System::Boolean RandomPlay; // 0x35
		::System::Boolean DisableSync; // 0x36
		::System::Boolean SendIconToServer; // 0x37

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_24* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_24* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_RUN_OFFSET))(this, P0);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TEXTURESHEETCONFIGACTION___BASE_FORCESTOP_OFFSET))(this);
		}
	};
}
