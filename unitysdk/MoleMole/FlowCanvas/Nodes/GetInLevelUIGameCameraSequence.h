#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDGetNapCameraSequence.h"

namespace MoleMole::Utils { class NapCameraSequence; }

#define MOLEMOLE_FLOWCANVAS_NODES_GETINLEVELUIGAMECAMERASEQUENCE_INVOKE_OFFSET UNITYSDK_OFFSET(0x11609320)
#define MOLEMOLE_FLOWCANVAS_NODES_GETINLEVELUIGAMECAMERASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x11609380)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetInLevelUIGameCameraSequence_TypeDefinitionIndex = 57923;

	class GetInLevelUIGameCameraSequence : public ::MoleMole::FlowCanvas::Nodes::LDGetNapCameraSequence
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GETINLEVELUIGAMECAMERASEQUENCE__CTOR_OFFSET))(this);
		}

		::MoleMole::Utils::NapCameraSequence* Invoke()
		{
			return ((::MoleMole::Utils::NapCameraSequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GETINLEVELUIGAMECAMERASEQUENCE_INVOKE_OFFSET))(this);
		}
	};
}
