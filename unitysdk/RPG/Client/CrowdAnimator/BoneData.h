#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CROWDANIMATOR_BONEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB7150F0)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int BoneData_TypeDefinitionIndex = 68824;

	class BoneData : public ::System::Object
	{
	public:
		::System::String* boneTransformName; // 0x10
		::System::Int32 boneIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_BONEDATA__CTOR_OFFSET))(this);
		}
	};
}
