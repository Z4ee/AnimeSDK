#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLUGINS_MESHLODSIMPLIFIER_MESHLODCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6FA20)

namespace Plugins::MeshLodSimplifier
{
	inline static constexpr unsigned int MeshLodCreator_TypeDefinitionIndex = 94690;

	class MeshLodCreator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean lockUVEdge; // 0x18
		::System::String* savePath; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* lodInfos; // 0x28
		::System::Single culledPercent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_MESHLODSIMPLIFIER_MESHLODCREATOR__CTOR_OFFSET))(this);
		}
	};
}
