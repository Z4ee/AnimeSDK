#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCAnimatorRuntimeInstanceAnimClipData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYABILITYRUNTIMEDATA_CREATEBUFFER_OFFSET UNITYSDK_OFFSET(0x11932480)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYABILITYRUNTIMEDATA_INITENTITY_OFFSET UNITYSDK_OFFSET(0x11932540)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYABILITYRUNTIMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x11932390)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYABILITYRUNTIMEDATA_RELEASE_OFFSET UNITYSDK_OFFSET(0x119325B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYABILITYRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11932630)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAbilityRuntimeData_TypeDefinitionIndex = 40253;

	class NPCAccessoryAbilityRuntimeData : public ::System::Object
	{
	public:
		::Unity::Collections::NativeArray_1<::System::Boolean> bIsUsing; // 0x10
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData> animatorBufferData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYABILITYRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYABILITYRUNTIMEDATA_INIT_OFFSET))(this, size);
		}

		::System::Void CreateBuffer(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYABILITYRUNTIMEDATA_CREATEBUFFER_OFFSET))(this, size);
		}

		::System::Void InitEntity(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYABILITYRUNTIMEDATA_INITENTITY_OFFSET))(this, idx);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYABILITYRUNTIMEDATA_RELEASE_OFFSET))(this);
		}
	};
}
