#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JetBrains/Annotations/ImplicitUseKindFlags.h"
#include "unitysdk/JetBrains/Annotations/ImplicitUseTargetFlags.h"
#include "unitysdk/System/Attribute.h"

#define JETBRAINS_ANNOTATIONS_USEDIMPLICITLYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x189E9B70)
#define JETBRAINS_ANNOTATIONS_USEDIMPLICITLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189E9B60)

namespace JetBrains::Annotations
{
	inline static constexpr unsigned int UsedImplicitlyAttribute_TypeDefinitionIndex = 3820;

	class UsedImplicitlyAttribute : public ::System::Attribute
	{
	public:
		::JetBrains::Annotations::ImplicitUseTargetFlags _TargetFlags_k__BackingField; // 0x10
		::JetBrains::Annotations::ImplicitUseKindFlags _UseKindFlags_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JETBRAINS_ANNOTATIONS_USEDIMPLICITLYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags)
		{
			return ((::System::Void(*)(::PVOID, ::JetBrains::Annotations::ImplicitUseKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags))((::PBYTE)hIl2Cpp + JETBRAINS_ANNOTATIONS_USEDIMPLICITLYATTRIBUTE__CTOR_1_OFFSET))(this, useKindFlags, targetFlags);
		}
	};
}
