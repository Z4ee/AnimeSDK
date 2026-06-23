#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

namespace MoleMole { class UIHollowChessPieceParticle; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPARTICLEPLAYANIMATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A392A70)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPARTICLEPLAYANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A392B20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPieceParticlePlayAnimation_TypeDefinitionIndex = 69262;

	class ChessboardPieceParticlePlayAnimation : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::MoleMole::UIHollowChessPieceParticle*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPARTICLEPLAYANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::UIHollowChessPieceParticle* particle, ::System::String* animation)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPARTICLEPLAYANIMATION_INVOKE_OFFSET))(this, particle, animation);
		}
	};
}
