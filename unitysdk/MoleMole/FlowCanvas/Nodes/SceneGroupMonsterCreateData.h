#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_SCENEGROUPMONSTERCREATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B17DB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int SceneGroupMonsterCreateData_TypeDefinitionIndex = 75612;

	class SceneGroupMonsterCreateData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* groupList; // 0x10
		::System::Int32 randomNum; // 0x18
		::System::Single createInterval; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SCENEGROUPMONSTERCREATEDATA__CTOR_OFFSET))(this);
		}
	};
}
