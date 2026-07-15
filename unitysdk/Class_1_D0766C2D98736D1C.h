#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_D70A30D666F20D90;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_D0766C2D98736D1C_GET_FILTERSTREAMINGBLOCK_OFFSET UNITYSDK_OFFSET(0x17D73B80)
#define CLASS_1_D0766C2D98736D1C_GET_FILTERSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0x17D73B60)
#define CLASS_1_D0766C2D98736D1C_SET_FILTERSTREAMINGBLOCK_OFFSET UNITYSDK_OFFSET(0x17D73B90)
#define CLASS_1_D0766C2D98736D1C_SET_FILTERSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0x17D73B70)
#define CLASS_1_D0766C2D98736D1C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D73BA0)

inline static constexpr unsigned int Class_1_D0766C2D98736D1C_TypeDefinitionIndex = 70592;

class Class_1_D0766C2D98736D1C : public ::System::Object
{
public:
	::RPG::Client::OpenWorld::Volume* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* _FilterStreamingBlock_k__BackingField; // 0x18
	::Class_1_D70A30D666F20D90* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* _FilterStreamingItem_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0766C2D98736D1C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_FilterStreamingItem()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0766C2D98736D1C_GET_FILTERSTREAMINGITEM_OFFSET))(this);
	}

	::System::Void set_FilterStreamingItem(::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_D0766C2D98736D1C_SET_FILTERSTREAMINGITEM_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* get_FilterStreamingBlock()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0766C2D98736D1C_GET_FILTERSTREAMINGBLOCK_OFFSET))(this);
	}

	::System::Void set_FilterStreamingBlock(::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>*))((::PBYTE)hIl2Cpp + CLASS_1_D0766C2D98736D1C_SET_FILTERSTREAMINGBLOCK_OFFSET))(this, a1);
	}
};
