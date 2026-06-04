#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BANodeHash.h"

namespace UnityEngine::Rendering { class BAGraphAsset; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BADEFAULTGRAPH_GETGRAPH_OFFSET UNITYSDK_OFFSET(0x18E99D90)
#define BADEFAULTGRAPH_GET_OFFSET UNITYSDK_OFFSET(0x18E99C80)
#define BADEFAULTGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x18E99BD0)
#define BADEFAULTGRAPH_PLAYCLIPS_OFFSET UNITYSDK_OFFSET(0x18E99C90)
#define BADEFAULTGRAPH_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0x18E99CE0)
#define BADEFAULTGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x18E99B20)

inline static constexpr unsigned int BADefaultGraph_TypeDefinitionIndex = 35135;

class BADefaultGraph : public ::System::Object
{
public:
	static ::BADefaultGraph** StaticGet__Graph()
	{
		return (::BADefaultGraph**)Il2CppClass::FromTypeDefinitionIndex(BADefaultGraph_TypeDefinitionIndex)->GetStaticField(0x604D0);
	}
	::UnityEngine::Rendering::BANodeHash clipNode0; // 0x10
	::UnityEngine::Rendering::BANodeHash outputNode; // 0x18
	::UnityEngine::Rendering::BANodeHash clipNode1; // 0x20
	::UnityEngine::Rendering::BANodeHash blendNode; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADEFAULTGRAPH__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADEFAULTGRAPH_INIT_OFFSET))(this);
	}

	::UnityEngine::Rendering::BAGraphAsset* Get()
	{
		return ((::UnityEngine::Rendering::BAGraphAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADEFAULTGRAPH_GET_OFFSET))(this);
	}

	::System::Void PlayClips(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BADEFAULTGRAPH_PLAYCLIPS_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void PlayClip(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BADEFAULTGRAPH_PLAYCLIP_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::BADefaultGraph* GetGraph()
	{
		return ((::BADefaultGraph*(*)())((::PBYTE)hIl2Cpp + BADEFAULTGRAPH_GETGRAPH_OFFSET))();
	}
};
