#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDPublicVariableSet_1.h"

class Class_3_5F8DAA47ACDB7251;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING_DOSET_OFFSET UNITYSDK_OFFSET(0x1710B9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1710BB90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING___BASE_DOSET_OFFSET UNITYSDK_OFFSET(0x1710BBE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableSetString_TypeDefinitionIndex = 84418;

	class LDPublicVariableSetString : public ::MoleMole::FlowCanvas::Nodes::LDPublicVariableSet_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING__CTOR_OFFSET))(this);
		}

		::System::Void DoSet(::Class_3_5F8DAA47ACDB7251* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8DAA47ACDB7251*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING_DOSET_OFFSET))(this, ctx);
		}

		::System::Void __base_DoSet(::Class_3_5F8DAA47ACDB7251* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8DAA47ACDB7251*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING___BASE_DOSET_OFFSET))(this, P0);
		}
	};
}
