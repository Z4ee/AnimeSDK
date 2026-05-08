#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PRELOADVIEWGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE6690)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadViewGroupConfig_TypeDefinitionIndex = 59555;

	class PreloadViewGroupConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* assetPaths; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* prefabPaths; // 0x18
		::System::Int32 groupId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADVIEWGROUPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
