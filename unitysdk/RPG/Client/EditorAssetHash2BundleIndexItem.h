#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_EDITORASSETHASH2BUNDLEINDEXITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF809D0)

namespace RPG::Client
{
	inline static constexpr unsigned int EditorAssetHash2BundleIndexItem_TypeDefinitionIndex = 40165;

	class EditorAssetHash2BundleIndexItem : public ::System::Object
	{
	public:
		::System::UInt64 AssetShortPathHash; // 0x10
		::System::Int32 BundleTableIndex; // 0x18
		::System::String* AssetShortName; // 0x20
		::System::String* BundleShortName; // 0x28
		::System::Int32 ArrayIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EDITORASSETHASH2BUNDLEINDEXITEM__CTOR_OFFSET))(this);
		}
	};
}
