#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDPublicVariableSet_1.h"

class Class_3_5F8DAA47ACDB7251;

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN_DOSET_OFFSET UNITYSDK_OFFSET(0x13693890)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x13693A60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN___BASE_DOSET_OFFSET UNITYSDK_OFFSET(0x13693AB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableSetBoolean_TypeDefinitionIndex = 83836;

	class LDPublicVariableSetBoolean : public ::MoleMole::FlowCanvas::Nodes::LDPublicVariableSet_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN__CTOR_OFFSET))(this);
		}

		::System::Void DoSet(::Class_3_5F8DAA47ACDB7251* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8DAA47ACDB7251*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN_DOSET_OFFSET))(this, ctx);
		}

		::System::Void __base_DoSet(::Class_3_5F8DAA47ACDB7251* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8DAA47ACDB7251*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN___BASE_DOSET_OFFSET))(this, P0);
		}
	};
}
