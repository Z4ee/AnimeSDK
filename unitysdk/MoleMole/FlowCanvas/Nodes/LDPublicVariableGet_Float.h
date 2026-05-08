#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDPublicVariableGet_1.h"

class Class_3_5F8DAA47ACDB7251;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT_DOGET_OFFSET UNITYSDK_OFFSET(0x17809280)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x178092F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT___BASE_DOGET_OFFSET UNITYSDK_OFFSET(0x17809340)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableGet_Float_TypeDefinitionIndex = 40320;

	class LDPublicVariableGet_Float : public ::MoleMole::FlowCanvas::Nodes::LDPublicVariableGet_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT__CTOR_OFFSET))(this);
		}

		::System::Void DoGet(::Class_3_5F8DAA47ACDB7251* ctx, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8DAA47ACDB7251*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT_DOGET_OFFSET))(this, ctx, key);
		}

		::System::Void __base_DoGet(::Class_3_5F8DAA47ACDB7251* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8DAA47ACDB7251*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT___BASE_DOGET_OFFSET))(this, P0, P1);
		}
	};
}
