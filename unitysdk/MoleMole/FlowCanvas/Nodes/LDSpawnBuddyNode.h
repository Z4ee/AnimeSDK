#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18A40A70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE_TRYSETENTITYAICOMPONENTACTIVETAG_OFFSET UNITYSDK_OFFSET(0x18A412E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A421F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__ONBUDDYREADY_OFFSET UNITYSDK_OFFSET(0x18A40D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__REGISTERPORTS_B__14_0_OFFSET UNITYSDK_OFFSET(0x18A42280)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__REGISTERPORTS_B__14_1_OFFSET UNITYSDK_OFFSET(0x18A42290)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__REGISTERPORTS_B__14_2_OFFSET UNITYSDK_OFFSET(0x18A42B90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__REGISTERPORTS_B__14_3_OFFSET UNITYSDK_OFFSET(0x18A42A10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__SETBUDDYPOS_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x18A41430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__SETBUDDYPOS_NEW_OFFSET UNITYSDK_OFFSET(0x18A40DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__SETBUDDYPOS_OFFSET UNITYSDK_OFFSET(0x18A40D80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__SPAWNONANCHOR_OFFSET UNITYSDK_OFFSET(0x18A417D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__SYNMODELTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18A41230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__TRYCALLOUTPUT_OFFSET UNITYSDK_OFFSET(0x18A40CC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSpawnBuddyNode_TypeDefinitionIndex = 47550;

	class LDSpawnBuddyNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::String* BuddyAIActiveStateTag; // 0x0
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsSpawnOnAnchor; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* buddyID; // 0xB0
		::System::Collections::Generic::HashSet_1<::System::Int32>* alreadySearchedSet; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* anchorPosPrefixInput; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Single>* radiusInput; // 0xC8
		::FlowCanvas::FlowOutput* _output; // 0xD0
		::MoleMole::Battle::Entity* _CreatedBuddy; // 0xD8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* _spawnPosExtractXYZ; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Boolean>* banMuteBeSelectedZone; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Single>* minimumInput; // 0xF0
		::System::String* ZoneTag; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Single>* angleRangeInput; // 0x100
		::UnityEngine::Vector3 _curExtractPosV3; // 0x108
		::System::Boolean IsEnableAI; // 0x114
		::System::Boolean isOutputCalled; // 0x115
		::System::Boolean lastChooseLeft; // 0x116
		::System::Single facdeDirDuration; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _TryCallOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__TRYCALLOUTPUT_OFFSET))(this);
		}

		::System::Void _OnBuddyReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__ONBUDDYREADY_OFFSET))(this);
		}

		::System::Void _SetBuddyPos(::UnityEngine::Vector3 waitSetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__SETBUDDYPOS_OFFSET))(this, waitSetPos);
		}

		::System::Void _SetBuddyPos_New(::UnityEngine::Vector3 waitSetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__SETBUDDYPOS_NEW_OFFSET))(this, waitSetPos);
		}

		::System::Collections::IEnumerator* _SynModelTransform(::MoleMole::Battle::Entity* localAvatar, ::UnityEngine::Vector3 waitSetPos)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__SYNMODELTRANSFORM_OFFSET))(this, localAvatar, waitSetPos);
		}

		static ::System::Boolean TrySetEntityAIComponentActiveTag(::MoleMole::Battle::Entity* entity, ::System::String* tag, ::System::Boolean value)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE_TRYSETENTITYAICOMPONENTACTIVETAG_OFFSET))(entity, tag, value);
		}

		::System::Void _SetBuddyPos_Deprecated(::UnityEngine::Vector3 waitSetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__SETBUDDYPOS_DEPRECATED_OFFSET))(this, waitSetPos);
		}

		::System::Void _SpawnOnAnchor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__SPAWNONANCHOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__14_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__REGISTERPORTS_B__14_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__14_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__REGISTERPORTS_B__14_1_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__14_3(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__REGISTERPORTS_B__14_3_OFFSET))(this, entity);
		}

		::System::Void _RegisterPorts_b__14_2(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE__REGISTERPORTS_B__14_2_OFFSET))(this, flow);
		}
	};
}
