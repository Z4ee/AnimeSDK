#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDPlayNapCameraSequence; }
namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x158140A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE___C__DISPLAYCLASS13_0__DO_B__0_OFFSET UNITYSDK_OFFSET(0x158149A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE___C__DISPLAYCLASS13_0__DO_B__1_OFFSET UNITYSDK_OFFSET(0x158149F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayNapCameraSequence___c__DisplayClass13_0_TypeDefinitionIndex = 42675;

	class LDPlayNapCameraSequence___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::Utils::INapCameraSequenceDataTableEntry* config; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDPlayNapCameraSequence* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _Do_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE___C__DISPLAYCLASS13_0__DO_B__0_OFFSET))(this);
		}

		::System::Void _Do_b__1(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYNAPCAMERASEQUENCE___C__DISPLAYCLASS13_0__DO_B__1_OFFSET))(this, context);
		}
	};
}
