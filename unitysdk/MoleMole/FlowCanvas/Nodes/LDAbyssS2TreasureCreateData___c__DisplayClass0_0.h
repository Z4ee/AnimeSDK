#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class S2TreasureCreateData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATA___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18206F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATA___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x18206F50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbyssS2TreasureCreateData___c__DisplayClass0_0_TypeDefinitionIndex = 56931;

	class LDAbyssS2TreasureCreateData___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* valueInput_monsterId; // 0x10
		::FlowCanvas::ValueInput_1<::System::String*>* valueInput_monsterName; // 0x18
		::FlowCanvas::ValueInput_1<::System::Int32>* valueInput_AIID; // 0x20
		::FlowCanvas::ValueInput_1<::System::Single>* valueInput_createInterval; // 0x28
		::FlowCanvas::ValueInput_1<::System::String*>* valueInput_anchorName; // 0x30
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* valueInput_anchorOffset; // 0x38
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*>* valueInput_tags; // 0x40
		::FlowCanvas::ValueInput_1<::System::Int32>* valueInput_areaIndex; // 0x48
		::FlowCanvas::ValueInput_1<::System::Int32>* valueInput_treasureIndexInArea; // 0x50
		::FlowCanvas::ValueInput_1<::System::Int32>* valueInput_TreasureID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATA___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::S2TreasureCreateData* _RegisterPorts_b__0()
		{
			return ((::MoleMole::FlowCanvas::Nodes::S2TreasureCreateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATA___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
