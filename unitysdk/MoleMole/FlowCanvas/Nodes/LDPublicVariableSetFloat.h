#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDPublicVariableSet_1.h"

class Class_3_5F8DAA47ACDB7251;

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT_DOSET_OFFSET UNITYSDK_OFFSET(0x16E4B9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x16E4BB90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT___BASE_DOSET_OFFSET UNITYSDK_OFFSET(0x16E4BBE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableSetFloat_TypeDefinitionIndex = 46658;

	class LDPublicVariableSetFloat : public ::MoleMole::FlowCanvas::Nodes::LDPublicVariableSet_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT__CTOR_OFFSET))(this);
		}

		::System::Void DoSet(::Class_3_5F8DAA47ACDB7251* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8DAA47ACDB7251*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT_DOSET_OFFSET))(this, ctx);
		}

		::System::Void __base_DoSet(::Class_3_5F8DAA47ACDB7251* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8DAA47ACDB7251*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT___BASE_DOSET_OFFSET))(this, P0);
		}
	};
}
