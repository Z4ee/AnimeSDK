#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_SKELETONBINARY_VERTICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1479F6F0)

namespace Spine
{
	inline static constexpr unsigned int SkeletonBinary_Vertices_TypeDefinitionIndex = 37531;

	class SkeletonBinary_Vertices : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* vertices; // 0x10
		::Il2CppArray<::System::Int32>* bones; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_VERTICES__CTOR_OFFSET))(this);
		}
	};
}
