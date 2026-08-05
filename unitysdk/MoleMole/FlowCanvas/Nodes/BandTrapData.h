#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class BandData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_BANDTRAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B82F620)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int BandTrapData_TypeDefinitionIndex = 75305;

	class BandTrapData : public ::System::Object
	{
	public:
		::System::String* anchor; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::BandData*>* bandList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_BANDTRAPDATA__CTOR_OFFSET))(this);
		}
	};
}
