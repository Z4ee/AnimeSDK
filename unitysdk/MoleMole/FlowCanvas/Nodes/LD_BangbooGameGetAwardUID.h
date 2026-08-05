#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETAWARDUID_INVOKE_OFFSET UNITYSDK_OFFSET(0x19080500)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETAWARDUID__CTOR_OFFSET UNITYSDK_OFFSET(0x190805B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BangbooGameGetAwardUID_TypeDefinitionIndex = 73555;

	class LD_BangbooGameGetAwardUID : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETAWARDUID__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* Invoke(::System::Int32 awardCount, ::System::Int32 awardRank)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMEGETAWARDUID_INVOKE_OFFSET))(this, awardCount, awardRank);
		}
	};
}
