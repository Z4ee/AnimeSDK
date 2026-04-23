#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CrowdAnimator { class SkinnedMeshData; }
namespace System { class String; }

#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D7D90)
#define RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE___C__DISPLAYCLASS18_0__GETSKINNEDMESHDATABYNAME_B__0_OFFSET UNITYSDK_OFFSET(0xA0D7E10)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdPrototype___c__DisplayClass18_0_TypeDefinitionIndex = 67856;

	class CrowdPrototype___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::String* transformName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkinnedMeshDataByName_b__0(::RPG::Client::CrowdAnimator::SkinnedMeshData* smd)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CrowdAnimator::SkinnedMeshData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDPROTOTYPE___C__DISPLAYCLASS18_0__GETSKINNEDMESHDATABYNAME_B__0_OFFSET))(this, smd);
		}
	};
}
