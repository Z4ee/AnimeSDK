#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_LoadBufferBase; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadObject; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B15DA70)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ThreadedTaskLoadGeo_HEU_LoadData_TypeDefinitionIndex = 39318;

	class HEU_ThreadedTaskLoadGeo_HEU_LoadData : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_SessionBase* _session; // 0x10
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadObject*>* _loadedObjects; // 0x18
		::System::Text::StringBuilder* _logStr; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_LoadBufferBase*>* _idBuffersMap; // 0x28
		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData_LoadStatus _loadStatus; // 0x30
		::System::Int32 _cookNodeID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASKLOADGEO_HEU_LOADDATA__CTOR_OFFSET))(this);
		}
	};
}
