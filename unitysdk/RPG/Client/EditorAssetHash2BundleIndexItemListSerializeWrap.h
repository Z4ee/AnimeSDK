#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EditorAssetHash2BundleIndexItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EDITORASSETHASH2BUNDLEINDEXITEMLISTSERIALIZEWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x18931DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int EditorAssetHash2BundleIndexItemListSerializeWrap_TypeDefinitionIndex = 38485;

	class EditorAssetHash2BundleIndexItemListSerializeWrap : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* SortList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EDITORASSETHASH2BUNDLEINDEXITEMLISTSERIALIZEWRAP__CTOR_OFFSET))(this);
		}
	};
}
