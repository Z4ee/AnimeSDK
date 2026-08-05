#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMECREATEFAKEBUDDYBYUID_INVOKE_OFFSET UNITYSDK_OFFSET(0x1684F480)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMECREATEFAKEBUDDYBYUID__CTOR_OFFSET UNITYSDK_OFFSET(0x1684F500)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BangbooGameCreateFakeBuddyByUID_TypeDefinitionIndex = 81485;

	class LD_BangbooGameCreateFakeBuddyByUID : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::MoleMole::EntityHandle, ::System::UInt32, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMECREATEFAKEBUDDYBYUID__CTOR_OFFSET))(this);
		}

		::MoleMole::EntityHandle Invoke(::System::UInt32 uid, ::System::String* spawnPointName)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BANGBOOGAMECREATEFAKEBUDDYBYUID_INVOKE_OFFSET))(this, uid, spawnPointName);
		}
	};
}
