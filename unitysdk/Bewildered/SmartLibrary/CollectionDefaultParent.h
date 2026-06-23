#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Bewildered/SmartLibrary/UniqueID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEWILDERED_SMARTLIBRARY_COLLECTIONDEFAULTPARENT_GET_COLLECTIONIDS_OFFSET UNITYSDK_OFFSET(0x1E88CDC0)
#define BEWILDERED_SMARTLIBRARY_COLLECTIONDEFAULTPARENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88CDD0)

namespace Bewildered::SmartLibrary
{
	inline static constexpr unsigned int CollectionDefaultParent_TypeDefinitionIndex = 90480;

	class CollectionDefaultParent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::Bewildered::SmartLibrary::UniqueID>* _collectionIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEWILDERED_SMARTLIBRARY_COLLECTIONDEFAULTPARENT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Bewildered::SmartLibrary::UniqueID>* get_CollectionIds()
		{
			return ((::System::Collections::Generic::List_1<::Bewildered::SmartLibrary::UniqueID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEWILDERED_SMARTLIBRARY_COLLECTIONDEFAULTPARENT_GET_COLLECTIONIDS_OFFSET))(this);
		}
	};
}
