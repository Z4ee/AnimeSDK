#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_WAVEMONSTERINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16853380)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int WaveMonsterInfoData_TypeDefinitionIndex = 79766;

	class WaveMonsterInfoData : public ::System::Object
	{
	public:
		::System::String* anchor; // 0x10
		::System::Single interval; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_WAVEMONSTERINFODATA__CTOR_OFFSET))(this);
		}
	};
}
