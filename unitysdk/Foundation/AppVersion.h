#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System { class String; }

#define FOUNDATION_APPVERSION_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E9BAAD0)
#define FOUNDATION_APPVERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BAEB0)

namespace Foundation
{
	inline static constexpr unsigned int AppVersion_TypeDefinitionIndex = 8278;

	class AppVersion : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Int32 MajorVersion; // 0x58
		::System::Int32 MinorVersion; // 0x5C
		::System::Int32 HotUpdateVersion; // 0x60
		::System::Int32 BuildVersion; // 0x64
		::System::String* P4ChangeList; // 0x68
		::System::String* PkgSplit; // 0x70
		::System::Boolean AppStoreReview; // 0x78
		::System::String* PkgUseage; // 0x80
		::System::String* ProtocalHash; // 0x88
		::System::String* Version; // 0x90
		::System::String* ApplicationVersion; // 0x98
		::System::String* CDN_Url; // 0xA0
		::System::String* BranchName; // 0xA8
		::System::String* ChannelName; // 0xB0
		::System::String* DispatchVersion; // 0xB8
		::System::String* DispatchSeed; // 0xC0
		::System::String* Token; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_APPVERSION__CTOR_OFFSET))(this);
		}

		::System::Void OnValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_APPVERSION_ONVALUECHANGED_OFFSET))(this);
		}
	};
}
