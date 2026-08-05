#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_BANDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A999CA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int BandData_TypeDefinitionIndex = 70814;

	class BandData : public ::System::Object
	{
	public:
		::System::String* anchor; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_BANDDATA__CTOR_OFFSET))(this);
		}
	};
}
