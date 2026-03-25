#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CROWDANIMATOR_SKINNEDMESHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9432A80)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int SkinnedMeshData_TypeDefinitionIndex = 60443;

	class SkinnedMeshData : public ::System::Object
	{
	public:
		::System::String* transformName; // 0x10
		::Il2CppArray<::System::Int32>* boneIndices; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_SKINNEDMESHDATA__CTOR_OFFSET))(this);
		}
	};
}
