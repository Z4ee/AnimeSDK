#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/FAnimBoneIDPathKV.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONINFO_DAMPINGIK__CTOR_OFFSET UNITYSDK_OFFSET(0xE55A240)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimationInfo_DampingIK_TypeDefinitionIndex = 57566;

	class NPCAccessoryAnimationInfo_DampingIK : public ::System::Object
	{
	public:
		::System::Boolean bUseLocalSpaceSimulate; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::FAnimBoneIDPathKV>* dampingBoneNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONINFO_DAMPINGIK__CTOR_OFFSET))(this);
		}
	};
}
