#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_56FF45D7B2C55655;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_7A49742D2EA44155_GET_FILTERSTREAMINGBLOCK_OFFSET UNITYSDK_OFFSET(0x12B27DF0)
#define CLASS_1_7A49742D2EA44155_GET_FILTERSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0x12B27DD0)
#define CLASS_1_7A49742D2EA44155_SET_FILTERSTREAMINGBLOCK_OFFSET UNITYSDK_OFFSET(0x12B27E00)
#define CLASS_1_7A49742D2EA44155_SET_FILTERSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0x12B27DE0)
#define CLASS_1_7A49742D2EA44155__CTOR_OFFSET UNITYSDK_OFFSET(0x12B27E10)

inline static constexpr unsigned int Class_1_7A49742D2EA44155_TypeDefinitionIndex = 68100;

class Class_1_7A49742D2EA44155 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* _FilterStreamingItem_k__BackingField; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* _FilterStreamingBlock_k__BackingField; // 0x18
	::RPG::Client::OpenWorld::Volume* Field_1_0; // 0x20
	::Class_1_56FF45D7B2C55655* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A49742D2EA44155__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_FilterStreamingItem()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A49742D2EA44155_GET_FILTERSTREAMINGITEM_OFFSET))(this);
	}

	::System::Void set_FilterStreamingItem(::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_7A49742D2EA44155_SET_FILTERSTREAMINGITEM_OFFSET))(this, value);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* get_FilterStreamingBlock()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A49742D2EA44155_GET_FILTERSTREAMINGBLOCK_OFFSET))(this);
	}

	::System::Void set_FilterStreamingBlock(::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>*))((::PBYTE)hIl2Cpp + CLASS_1_7A49742D2EA44155_SET_FILTERSTREAMINGBLOCK_OFFSET))(this, value);
	}
};
