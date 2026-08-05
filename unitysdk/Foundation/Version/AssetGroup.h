#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace Foundation::Version { class AssetGroup_AssetSubGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VERSION_ASSETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x178A3D70)

namespace Foundation::Version
{
	inline static constexpr unsigned int AssetGroup_TypeDefinitionIndex = 47837;

	class AssetGroup : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::String* notes; // 0x58
		::System::Collections::Generic::List_1<::Foundation::Version::AssetGroup_AssetSubGroup*>* assetSubGroups; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VERSION_ASSETGROUP__CTOR_OFFSET))(this);
		}
	};
}
