#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_LoadBufferInstancer; }
namespace HoudiniEngineUnity { class HEU_LoadBufferMesh; }
namespace HoudiniEngineUnity { class HEU_LoadBufferVolume; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B15E950)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ThreadedTaskLoadGeo_HEU_LoadObject_TypeDefinitionIndex = 39320;

	class HEU_ThreadedTaskLoadGeo_HEU_LoadObject : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>* _meshBuffers; // 0x10
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>* _terrainBuffers; // 0x18
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>* _instancerBuffers; // 0x20
		::System::Int32 _displayNodeID; // 0x28
		::System::Int32 _objectNodeID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADOBJECT__CTOR_OFFSET))(this);
		}
	};
}
