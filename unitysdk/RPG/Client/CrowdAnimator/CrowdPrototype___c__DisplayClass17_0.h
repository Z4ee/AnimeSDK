#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CrowdAnimator { class BoneData; }
namespace System { class String; }

#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D7C90)
#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE___C__DISPLAYCLASS17_0__GETBONEBYTRANSFORM_B__0_OFFSET UNITYSDK_OFFSET(0xA0D7DC0)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdPrototype___c__DisplayClass17_0_TypeDefinitionIndex = 67855;

	class CrowdPrototype___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::String* boneTransformName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBoneByTransform_b__0(::RPG::Client::CrowdAnimator::BoneData* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CrowdAnimator::BoneData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE___C__DISPLAYCLASS17_0__GETBONEBYTRANSFORM_B__0_OFFSET))(this, b);
		}
	};
}
