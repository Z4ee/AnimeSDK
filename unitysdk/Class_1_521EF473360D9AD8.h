#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarVoiceArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_521EF473360D9AD8_GET_VOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0x11A38570)
#define CLASS_1_521EF473360D9AD8_METHOD_1_71D7FBD389114852_OFFSET UNITYSDK_OFFSET(0x11A37E20)
#define CLASS_1_521EF473360D9AD8_METHOD_1_DFC58511E94D90F1_OFFSET UNITYSDK_OFFSET(0x11A384E0)
#define CLASS_1_521EF473360D9AD8_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x11A38400)
#define CLASS_1_521EF473360D9AD8_SET_VOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0x11A38580)
#define CLASS_1_521EF473360D9AD8__CTOR_OFFSET UNITYSDK_OFFSET(0x11A37E10)

inline static constexpr unsigned int Class_1_521EF473360D9AD8_TypeDefinitionIndex = 57597;

class Class_1_521EF473360D9AD8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* _VoiceEntryList_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_521EF473360D9AD8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_521EF473360D9AD8_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::RPG::Client::AvatarVoiceArchiveEntry* Method_1_DFC58511E94D90F1(::System::UInt32 a1)
	{
		return ((::RPG::Client::AvatarVoiceArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_521EF473360D9AD8_METHOD_1_DFC58511E94D90F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_71D7FBD389114852(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_521EF473360D9AD8_METHOD_1_71D7FBD389114852_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* get_VoiceEntryList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_521EF473360D9AD8_GET_VOICEENTRYLIST_OFFSET))(this);
	}

	::System::Void set_VoiceEntryList(::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>*))((::PBYTE)hIl2Cpp + CLASS_1_521EF473360D9AD8_SET_VOICEENTRYLIST_OFFSET))(this, value);
	}
};
