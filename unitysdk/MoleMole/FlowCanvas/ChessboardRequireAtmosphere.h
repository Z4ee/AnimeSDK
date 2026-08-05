#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREQUIREATMOSPHERE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DA9660)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDREQUIREATMOSPHERE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA9780)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardRequireAtmosphere_TypeDefinitionIndex = 90235;

	class ChessboardRequireAtmosphere : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_3<::System::String*, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREQUIREATMOSPHERE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* atmosphereKey, ::System::Boolean changeVideo, ::System::Boolean skipIdenticalKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDREQUIREATMOSPHERE_INVOKE_OFFSET))(this, atmosphereKey, changeVideo, skipIdenticalKey);
		}
	};
}
