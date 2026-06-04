#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarVoiceArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D46045852BC4CAE1_GET_VOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0xA675F40)
#define CLASS_1_D46045852BC4CAE1_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xA675DB0)
#define CLASS_1_D46045852BC4CAE1_METHOD_1_398902E7B0B3A4F9_OFFSET UNITYSDK_OFFSET(0xA675800)
#define CLASS_1_D46045852BC4CAE1_METHOD_1_C5C68BA275A46F4B_OFFSET UNITYSDK_OFFSET(0xA675EA0)
#define CLASS_1_D46045852BC4CAE1_SET_VOICEENTRYLIST_OFFSET UNITYSDK_OFFSET(0xA675F50)
#define CLASS_1_D46045852BC4CAE1__CTOR_OFFSET UNITYSDK_OFFSET(0xA6757F0)

inline static constexpr unsigned int Class_1_D46045852BC4CAE1_TypeDefinitionIndex = 58409;

class Class_1_D46045852BC4CAE1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* _VoiceEntryList_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D46045852BC4CAE1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46045852BC4CAE1_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::RPG::Client::AvatarVoiceArchiveEntry* Method_1_C5C68BA275A46F4B(::System::UInt32 a1)
	{
		return ((::RPG::Client::AvatarVoiceArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D46045852BC4CAE1_METHOD_1_C5C68BA275A46F4B_OFFSET))(this, a1);
	}

	::System::Void Method_1_398902E7B0B3A4F9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D46045852BC4CAE1_METHOD_1_398902E7B0B3A4F9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* get_VoiceEntryList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D46045852BC4CAE1_GET_VOICEENTRYLIST_OFFSET))(this);
	}

	::System::Void set_VoiceEntryList(::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarVoiceArchiveEntry*>*))((::PBYTE)hIl2Cpp + CLASS_1_D46045852BC4CAE1_SET_VOICEENTRYLIST_OFFSET))(this, a1);
	}
};
