#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_ShelfToolData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_SHELF__CTOR_OFFSET UNITYSDK_OFFSET(0x17F57D80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Shelf_TypeDefinitionIndex = 37699;

	class HEU_Shelf : public ::System::Object
	{
	public:
		::System::String* _shelfName; // 0x10
		::System::String* _shelfPath; // 0x18
		::System::Boolean _defaultShelf; // 0x20
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>* _tools; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELF__CTOR_OFFSET))(this);
		}
	};
}
