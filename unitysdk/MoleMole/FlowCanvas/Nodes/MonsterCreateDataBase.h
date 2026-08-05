#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERCREATEDATABASE_HIDEMONSTERID_OFFSET UNITYSDK_OFFSET(0x16853200)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERCREATEDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x168531B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterCreateDataBase_TypeDefinitionIndex = 85994;

	class MonsterCreateDataBase : public ::System::Object
	{
	public:
		::System::String* monsterName; // 0x10
		::System::Int32 monsterId; // 0x18
		::System::Int32 monsterMappingID; // 0x1C
		::System::Int32 AIID; // 0x20
		::System::String* anchorName; // 0x28
		::UnityEngine::Vector3 anchorOffset; // 0x30
		::System::Single createInterval; // 0x3C
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* tags; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERCREATEDATABASE__CTOR_OFFSET))(this);
		}

		::System::Boolean HideMonsterID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERCREATEDATABASE_HIDEMONSTERID_OFFSET))(this);
		}
	};
}
