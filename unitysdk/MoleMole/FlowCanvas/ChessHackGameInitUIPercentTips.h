#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSHACKGAMEINITUIPERCENTTIPS_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A7E9F0)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKGAMEINITUIPERCENTTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7EB40)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessHackGameInitUIPercentTips_TypeDefinitionIndex = 85284;

	class ChessHackGameInitUIPercentTips : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Collections::Generic::List_1<::System::Single>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKGAMEINITUIPERCENTTIPS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Single>* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKGAMEINITUIPERCENTTIPS_INVOKE_OFFSET))(this, a);
		}
	};
}
