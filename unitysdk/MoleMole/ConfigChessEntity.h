#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessEntityType.h"
#include "unitysdk/MoleMole/ConfigChessEntity_StateMachineParamsWrapper.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGCHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x17D31300)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigChessEntity_TypeDefinitionIndex = 48222;

	class ConfigChessEntity : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Share::GridDir, ::MoleMole::ConfigChessEntity_StateMachineParamsWrapper>* exitMoveState; // 0x10
		::MoleMole::ConfigChessEntity_StateMachineParamsWrapper baseStateParams; // 0x18
		::System::Collections::Generic::Dictionary_2<::Share::GridDir, ::MoleMole::ConfigChessEntity_StateMachineParamsWrapper>* enterMoveState; // 0x40
		::System::Int32 hollowEntityID; // 0x48
		::MoleMole::ChessEntityType entityType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCHESSENTITY__CTOR_OFFSET))(this);
		}
	};
}
