#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/BoxGroupAttribute.h"

namespace System { class String; }
namespace UnityEngine { class GUILayoutOption; }

#define SIRENIX_ODININSPECTOR_BOXGROUPNAPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1AA520)
#define SIRENIX_ODININSPECTOR_BOXGROUPNAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A9F40)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int BoxGroupNapAttribute_TypeDefinitionIndex = 7896;

	class BoxGroupNapAttribute : public ::Sirenix::OdinInspector::BoxGroupAttribute
	{
	public:
		::Il2CppArray<::UnityEngine::GUILayoutOption*>* Options; // 0x40
		::System::Single SpaceBefore; // 0x48
		::System::Single SpaceAfter; // 0x4C

		::System::Void _ctor(::System::String* group, ::System::Boolean showLabel, ::System::Boolean centerLabel, ::System::Single order, ::System::Single spaceBefore, ::System::Single spaceAfter, ::System::Single width, ::System::Single minWidth, ::System::Single maxWidth, ::System::Single height, ::System::Single minHeight, ::System::Single maxHeight, ::System::Boolean expandWidth, ::System::Boolean expandHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BOXGROUPNAPATTRIBUTE__CTOR_OFFSET))(this, group, showLabel, centerLabel, order, spaceBefore, spaceAfter, width, minWidth, maxWidth, height, minHeight, maxHeight, expandWidth, expandHeight);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BOXGROUPNAPATTRIBUTE__CTOR_1_OFFSET))(this);
		}
	};
}
