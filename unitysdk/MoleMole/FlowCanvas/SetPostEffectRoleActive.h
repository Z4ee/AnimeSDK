#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_SETPOSTEFFECTROLEACTIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13834330)
#define MOLEMOLE_FLOWCANVAS_SETPOSTEFFECTROLEACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x13834380)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int SetPostEffectRoleActive_TypeDefinitionIndex = 65923;

	class SetPostEffectRoleActive : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SETPOSTEFFECTROLEACTIVE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SETPOSTEFFECTROLEACTIVE_INVOKE_OFFSET))(this, isActive);
		}
	};
}
