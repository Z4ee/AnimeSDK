#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSTREAMING_NAPSTREAMINGSCENEMD5_CHECKISDEPENDEQUAL_OFFSET UNITYSDK_OFFSET(0xF07A090)
#define NAPSTREAMING_NAPSTREAMINGSCENEMD5__CTOR_OFFSET UNITYSDK_OFFSET(0xF07A2B0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingSceneMD5_TypeDefinitionIndex = 61499;

	class NapStreamingSceneMD5 : public ::System::Object
	{
	public:
		::System::String* scenePath; // 0x10
		::System::String* md5; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* dependMd5s; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSCENEMD5__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckIsDependEqual(::System::Collections::Generic::List_1<::System::String*>* newDepends)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSCENEMD5_CHECKISDEPENDEQUAL_OFFSET))(this, newDepends);
		}
	};
}
