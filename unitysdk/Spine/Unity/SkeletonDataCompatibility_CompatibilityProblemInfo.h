#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine::Unity { class SkeletonDataCompatibility_VersionInfo; }
namespace System { class String; }

#define SPINE_UNITY_SKELETONDATACOMPATIBILITY_COMPATIBILITYPROBLEMINFO_DESCRIPTIONSTRING_OFFSET UNITYSDK_OFFSET(0x1ACC0B60)
#define SPINE_UNITY_SKELETONDATACOMPATIBILITY_COMPATIBILITYPROBLEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC0F60)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonDataCompatibility_CompatibilityProblemInfo_TypeDefinitionIndex = 41388;

	class SkeletonDataCompatibility_CompatibilityProblemInfo : public ::System::Object
	{
	public:
		::Spine::Unity::SkeletonDataCompatibility_VersionInfo* actualVersion; // 0x10
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* compatibleVersions; // 0x18
		::System::String* explicitProblemDescription; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATACOMPATIBILITY_COMPATIBILITYPROBLEMINFO__CTOR_OFFSET))(this);
		}

		::System::String* DescriptionString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATACOMPATIBILITY_COMPATIBILITYPROBLEMINFO_DESCRIPTIONSTRING_OFFSET))(this);
		}
	};
}
