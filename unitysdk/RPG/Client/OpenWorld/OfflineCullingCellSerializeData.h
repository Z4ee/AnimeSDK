#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client::OpenWorld { class OfflineCullingCellSubData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSERIALIZEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA1CD0)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OfflineCullingCellSerializeData_TypeDefinitionIndex = 60468;

	class OfflineCullingCellSerializeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::OfflineCullingCellSubData*>* CellSubData; // 0x10
		::System::Single CellSize; // 0x18
		::UnityEngine::Bounds CellBound; // 0x1C
		::System::Boolean UseCompression; // 0x34
		::System::Int64 Index; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* LightVisibilityData; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSERIALIZEDATA__CTOR_OFFSET))(this);
		}
	};
}
