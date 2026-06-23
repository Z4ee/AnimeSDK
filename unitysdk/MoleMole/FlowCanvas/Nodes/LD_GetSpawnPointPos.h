#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSPAWNPOINTPOS_INVOKE_OFFSET UNITYSDK_OFFSET(0x19126010)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSPAWNPOINTPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x191262A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetSpawnPointPos_TypeDefinitionIndex = 73819;

	class LD_GetSpawnPointPos : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::UnityEngine::Vector3, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSPAWNPOINTPOS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::System::String* spawnPointName)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSPAWNPOINTPOS_INVOKE_OFFSET))(this, spawnPointName);
		}
	};
}
