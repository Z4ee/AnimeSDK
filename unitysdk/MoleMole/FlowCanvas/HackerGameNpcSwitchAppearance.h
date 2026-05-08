#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_5.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCSWITCHAPPEARANCE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18410A90)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCSWITCHAPPEARANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18410F60)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcSwitchAppearance_TypeDefinitionIndex = 60215;

	class HackerGameNpcSwitchAppearance : public ::FlowCanvas::Nodes::CallableActionNode_5<::MoleMole::ChessEntity*, ::MoleMole::ChessEntityCollection*, ::System::Int32, ::System::String*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCSWITCHAPPEARANCE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* entity, ::MoleMole::ChessEntityCollection* playerEntityCollection, ::System::Int32 areaRange, ::System::String* inAreaKey, ::System::String* outAreaKey)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::MoleMole::ChessEntityCollection*, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCSWITCHAPPEARANCE_INVOKE_OFFSET))(this, entity, playerEntityCollection, areaRange, inAreaKey, outAreaKey);
		}
	};
}
