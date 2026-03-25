#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EditorAssetHash2BundleIndexItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EDITORASSETHASH2BUNDLEINDEXITEMWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16559240)

namespace RPG::Client
{
	inline static constexpr unsigned int EditorAssetHash2BundleIndexItemWrap_TypeDefinitionIndex = 32015;

	class EditorAssetHash2BundleIndexItemWrap : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EditorAssetHash2BundleIndexItem*>* SortList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EDITORASSETHASH2BUNDLEINDEXITEMWRAP__CTOR_OFFSET))(this);
		}
	};
}
