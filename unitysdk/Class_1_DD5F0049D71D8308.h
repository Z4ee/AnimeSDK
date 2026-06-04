#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarStoryArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DD5F0049D71D8308_GET_STORYENTRYLIST_OFFSET UNITYSDK_OFFSET(0xB9E5860)
#define CLASS_1_DD5F0049D71D8308_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xB9E56D0)
#define CLASS_1_DD5F0049D71D8308_METHOD_1_398902E7B0B3A4F9_OFFSET UNITYSDK_OFFSET(0xB9E5120)
#define CLASS_1_DD5F0049D71D8308_METHOD_1_AB244AE76EE652AA_OFFSET UNITYSDK_OFFSET(0xB9E57C0)
#define CLASS_1_DD5F0049D71D8308_SET_STORYENTRYLIST_OFFSET UNITYSDK_OFFSET(0xB9E5870)
#define CLASS_1_DD5F0049D71D8308__CTOR_OFFSET UNITYSDK_OFFSET(0xB9E5110)

inline static constexpr unsigned int Class_1_DD5F0049D71D8308_TypeDefinitionIndex = 58407;

class Class_1_DD5F0049D71D8308 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* _StoryEntryList_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD5F0049D71D8308__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD5F0049D71D8308_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::RPG::Client::AvatarStoryArchiveEntry* Method_1_AB244AE76EE652AA(::System::UInt32 a1)
	{
		return ((::RPG::Client::AvatarStoryArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD5F0049D71D8308_METHOD_1_AB244AE76EE652AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_398902E7B0B3A4F9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD5F0049D71D8308_METHOD_1_398902E7B0B3A4F9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* get_StoryEntryList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD5F0049D71D8308_GET_STORYENTRYLIST_OFFSET))(this);
	}

	::System::Void set_StoryEntryList(::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarStoryArchiveEntry*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD5F0049D71D8308_SET_STORYENTRYLIST_OFFSET))(this, a1);
	}
};
