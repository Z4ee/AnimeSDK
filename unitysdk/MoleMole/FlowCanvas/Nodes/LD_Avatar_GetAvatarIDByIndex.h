#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX_GETAVATARIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x1684F220)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1684F1D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1684F460)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Avatar_GetAvatarIDByIndex_TypeDefinitionIndex = 44337;

	class LD_Avatar_GetAvatarIDByIndex : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 checkIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX_INVOKE_OFFSET))(this, checkIndex);
		}

		static ::System::Int32 GetAvatarIDByIndex(::System::Int32 checkIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARIDBYINDEX_GETAVATARIDBYINDEX_OFFSET))(checkIndex);
		}
	};
}
