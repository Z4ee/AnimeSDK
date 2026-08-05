#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_FOUNDATIONCONST__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED8CF00)

namespace Foundation
{
	inline static constexpr unsigned int FoundationConst_TypeDefinitionIndex = 8075;

	class FoundationConst : public ::System::Object
	{
	public:
		// static const ::System::Int32 FileStreamMaxSize = 0xFD0000; // 0x0
		// static const ::System::Single DownloadTimeout; // 0x0
		// static const ::System::Int32 MaxTryCountDownload = 0x3; // 0x0
		// static const ::System::Int32 MaxTryCountPostData = 0x3; // 0x0
		// static const ::System::String* EditorBuildFolder; // 0x0
		// static const ::System::String* EditorSrcResPathAndroid; // 0x0
		// static const ::System::String* EditorSrcResPathIOS; // 0x0
		// static const ::System::String* EditorNetResPathAndroid; // 0x0
		// static const ::System::String* EditorNetResPathIOS; // 0x0
		// static const ::System::String* EditorPreloadPathAndroid; // 0x0
		// static const ::System::String* EditorPreloadPathIOS; // 0x0
		// static const ::System::String* NameCoroutineManager; // 0x0
		// static const ::System::String* NameGlobals; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FOUNDATIONCONST__CTOR_OFFSET))(this);
		}
	};
}
