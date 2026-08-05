#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_ReadMonsterFromCardData_CardMonsterInfo.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19DB9D80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA_START_F_OFFSET UNITYSDK_OFFSET(0x19DB9FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBA5D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x19DBA680)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_1_OFFSET UNITYSDK_OFFSET(0x19DBA6B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_2_OFFSET UNITYSDK_OFFSET(0x19DBA6C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_3_OFFSET UNITYSDK_OFFSET(0x19DBA6D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_4_OFFSET UNITYSDK_OFFSET(0x19DBA6E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_5_OFFSET UNITYSDK_OFFSET(0x19DBA6F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReadMonsterFromCardData_TypeDefinitionIndex = 46063;

	class LD_ReadMonsterFromCardData : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::String*>* targetBattleStage; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueOutput_1<::System::Int32>* changeToBadassBattleField; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* waveMonsterHandle; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>*>* waveMonsters; // 0xC8
		::System::String* targetBattleStageHandle; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Int32>* cardIdNode; // 0xD8
		::FlowCanvas::ValueOutput_1<::System::String*>* playerSpawnPosNode; // 0xE0
		::System::String* playerSpawnPos; // 0xE8
		::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType performType; // 0xF0
		::System::Int32 changeToBadassBattleFieldHandler; // 0xF4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start_f(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA_START_F_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__12_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_0_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* _RegisterPorts_b__12_1()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_1_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__12_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_2_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__12_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_3_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__12_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_4_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType _RegisterPorts_b__12_5()
		{
			return ((::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READMONSTERFROMCARDDATA__REGISTERPORTS_B__12_5_OFFSET))(this);
		}
	};
}
