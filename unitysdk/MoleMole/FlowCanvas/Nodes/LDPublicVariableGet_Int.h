#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDPublicVariableGet_1.h"

class Class_3_5F8DAA47ACDB7251;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_INT_DOGET_OFFSET UNITYSDK_OFFSET(0x17809350)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_INT__CTOR_OFFSET UNITYSDK_OFFSET(0x178093C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_INT___BASE_DOGET_OFFSET UNITYSDK_OFFSET(0x17809410)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableGet_Int_TypeDefinitionIndex = 61090;

	class LDPublicVariableGet_Int : public ::MoleMole::FlowCanvas::Nodes::LDPublicVariableGet_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_INT__CTOR_OFFSET))(this);
		}

		::System::Void DoGet(::Class_3_5F8DAA47ACDB7251* ctx, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8DAA47ACDB7251*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_INT_DOGET_OFFSET))(this, ctx, key);
		}

		::System::Void __base_DoGet(::Class_3_5F8DAA47ACDB7251* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8DAA47ACDB7251*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_INT___BASE_DOGET_OFFSET))(this, P0, P1);
		}
	};
}
