#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonDataCompatibility_SourceType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_UNITY_SKELETONDATACOMPATIBILITY_VERSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E64B7A0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonDataCompatibility_VersionInfo_TypeDefinitionIndex = 43813;

	class SkeletonDataCompatibility_VersionInfo : public ::System::Object
	{
	public:
		::System::String* rawVersion; // 0x10
		::Il2CppArray<::System::Int32>* version; // 0x18
		::Spine::Unity::SkeletonDataCompatibility_SourceType sourceType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATACOMPATIBILITY_VERSIONINFO__CTOR_OFFSET))(this);
		}
	};
}
