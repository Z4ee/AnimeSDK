#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_RANDOMGROUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBCB70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int RandomGroupInfo_TypeDefinitionIndex = 58846;

	class RandomGroupInfo : public ::System::Object
	{
	public:
		::System::String* monsterName; // 0x10
		::System::Int32 monsterID; // 0x18
		::System::Single spawnWeight; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_RANDOMGROUPINFO__CTOR_OFFSET))(this);
		}
	};
}
