#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class VirtualBone; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F143910)
#define ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY___C__DISPLAYCLASS6_0__FINDBONE_B__0_OFFSET UNITYSDK_OFFSET(0x1F143920)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VirtualBoneHierarchy___c__DisplayClass6_0_TypeDefinitionIndex = 38853;

	class VirtualBoneHierarchy___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindBone_b__0(::RootMotion::FinalIK::VirtualBone* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::VirtualBone*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALBONEHIERARCHY___C__DISPLAYCLASS6_0__FINDBONE_B__0_OFFSET))(this, b);
		}
	};
}
