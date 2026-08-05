#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETSAFEZONEKEY_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A7FDA0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETSAFEZONEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7FEF0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSetSafeZoneKey_TypeDefinitionIndex = 62182;

	class HackerGameSetSafeZoneKey : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETSAFEZONEKEY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* safeZoneKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETSAFEZONEKEY_INVOKE_OFFSET))(this, safeZoneKey);
		}
	};
}
