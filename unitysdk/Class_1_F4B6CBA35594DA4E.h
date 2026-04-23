#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarStoryArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4B6CBA35594DA4E_GET_STORYENTRYLIST_OFFSET UNITYSDK_OFFSET(0x11E67F40)
#define CLASS_1_F4B6CBA35594DA4E_METHOD_1_71D7FBD389114852_OFFSET UNITYSDK_OFFSET(0x11E677F0)
#define CLASS_1_F4B6CBA35594DA4E_METHOD_1_7A90C21412384C40_OFFSET UNITYSDK_OFFSET(0x11E67EB0)
#define CLASS_1_F4B6CBA35594DA4E_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x11E67DD0)
#define CLASS_1_F4B6CBA35594DA4E_SET_STORYENTRYLIST_OFFSET UNITYSDK_OFFSET(0x11E67F50)
#define CLASS_1_F4B6CBA35594DA4E__CTOR_OFFSET UNITYSDK_OFFSET(0x11E677E0)

inline static constexpr unsigned int Class_1_F4B6CBA35594DA4E_TypeDefinitionIndex = 57595;

class Class_1_F4B6CBA35594DA4E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* _StoryEntryList_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4B6CBA35594DA4E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4B6CBA35594DA4E_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::RPG::Client::AvatarStoryArchiveEntry* Method_1_7A90C21412384C40(::System::UInt32 a1)
	{
		return ((::RPG::Client::AvatarStoryArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4B6CBA35594DA4E_METHOD_1_7A90C21412384C40_OFFSET))(this, a1);
	}

	::System::Void Method_1_71D7FBD389114852(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4B6CBA35594DA4E_METHOD_1_71D7FBD389114852_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* get_StoryEntryList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4B6CBA35594DA4E_GET_STORYENTRYLIST_OFFSET))(this);
	}

	::System::Void set_StoryEntryList(::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>*))((::PBYTE)hIl2Cpp + CLASS_1_F4B6CBA35594DA4E_SET_STORYENTRYLIST_OFFSET))(this, value);
	}
};
