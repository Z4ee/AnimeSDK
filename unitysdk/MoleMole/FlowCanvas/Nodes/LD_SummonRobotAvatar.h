#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR_BEGIN_OFFSET UNITYSDK_OFFSET(0x19BE8820)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x19BEA000)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19BE8560)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR_TRYADDAVATARGUIDEITEM_OFFSET UNITYSDK_OFFSET(0x19BEA370)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEA450)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR__REGISTERPORTS_B__16_0_OFFSET UNITYSDK_OFFSET(0x19BEA490)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR__REGISTERPORTS_B__16_1_OFFSET UNITYSDK_OFFSET(0x19BEA4D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SummonRobotAvatar_TypeDefinitionIndex = 52387;

	class LD_SummonRobotAvatar : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* SummonRobotId; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* DestroyByOwner; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::Config::CampType>* SummonTeam; // 0xB8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* Offset; // 0xC0
		::FlowCanvas::FlowOutput* output; // 0xC8
		::FlowCanvas::ValueInput_1<::System::String*>* SummonedAIPath; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Int32>* SubMonsterID; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Single>* SummonAliveDuration; // 0xE0
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* SummonMaster; // 0xE8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutput; // 0xF0
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* BornPosByEntity; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* SummonTags; // 0x100
		::FlowCanvas::FlowOutput* finishOutput; // 0x108
		::MoleMole::Battle::Entity* createEntity; // 0x110
		::FlowCanvas::ValueInput_1<::System::String*>* BornPosSpawnPoint; // 0x118
		::FlowCanvas::ValueInput_1<::System::Boolean>* _notShowAvatarGuideItem; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR_BEGIN_OFFSET))(this, f);
		}

		::System::Void OnEntityReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR_ONENTITYREADY_OFFSET))(this, entity);
		}

		::System::Void TryAddAvatarGuideItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR_TRYADDAVATARGUIDEITEM_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__16_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR__REGISTERPORTS_B__16_0_OFFSET))(this, f);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__16_1()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMONROBOTAVATAR__REGISTERPORTS_B__16_1_OFFSET))(this);
		}
	};
}
