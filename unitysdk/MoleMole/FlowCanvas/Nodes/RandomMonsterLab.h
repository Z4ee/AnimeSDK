#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/GetSetDataStructBaset_2.h"

namespace MoleMole::FlowCanvas::Nodes { class RandomGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_RANDOMMONSTERLAB_GETVALUE_OFFSET UNITYSDK_OFFSET(0x125CAFD0)
#define MOLEMOLE_FLOWCANVAS_NODES_RANDOMMONSTERLAB_SETVALUE_OFFSET UNITYSDK_OFFSET(0x125CB0C0)
#define MOLEMOLE_FLOWCANVAS_NODES_RANDOMMONSTERLAB__CTOR_OFFSET UNITYSDK_OFFSET(0x125CB1A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int RandomMonsterLab_TypeDefinitionIndex = 62146;

	class RandomMonsterLab : public ::MoleMole::FlowCanvas::Nodes::GetSetDataStructBaset_2<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::RandomGroupInfo*>*, ::System::String*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::RandomGroupInfo*>*>* root; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_RANDOMMONSTERLAB__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::RandomGroupInfo*>* GetValue(::System::String* key)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::RandomGroupInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_RANDOMMONSTERLAB_GETVALUE_OFFSET))(this, key);
		}

		::System::Boolean SetValue(::System::String* key, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::RandomGroupInfo*>* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::RandomGroupInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_RANDOMMONSTERLAB_SETVALUE_OFFSET))(this, key, value);
		}
	};
}
