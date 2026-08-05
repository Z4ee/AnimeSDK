#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_GETANIMATIONID_OFFSET UNITYSDK_OFFSET(0x12D27AF0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_SPLITANIMATIONINFO_OFFSET UNITYSDK_OFFSET(0x12D27B60)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_SPLITMONTAGEINFOBYID_OFFSET UNITYSDK_OFFSET(0x12D27F60)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_TRYPARSEANIMATIONIDBYNAME_OFFSET UNITYSDK_OFFSET(0x12D27CF0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_TRYPARSEANIMATIONID_OFFSET UNITYSDK_OFFSET(0x12D27C40)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_TRYPARSEMONTAGEIDBYNAME_OFFSET UNITYSDK_OFFSET(0x12D27E20)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D28040)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationDefine_TypeDefinitionIndex = 57745;

	class NPCCPUAnimationDefine : public ::System::Object
	{
	public:
		// static const ::System::Int32 INVALID_ANIMATION_CLIP_ID = 0x0; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetAnimationId(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::System::Int32 number)
		{
			return ((::System::Int32(*)(::ENPCAvatarGender, ::ENPCAvatarSize, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_GETANIMATIONID_OFFSET))(gender, size, number);
		}

		static ::System::Void SplitAnimationInfo(::System::Int32 AnimationId, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size, ::System::Int32& number)
		{
			return ((::System::Void(*)(::System::Int32, ::ENPCAvatarGender&, ::ENPCAvatarSize&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_SPLITANIMATIONINFO_OFFSET))(AnimationId, gender, size, number);
		}

		static ::System::Boolean TryParseAnimationId(::System::String* clipName, ::System::Int32& number)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_TRYPARSEANIMATIONID_OFFSET))(clipName, number);
		}

		static ::System::Boolean TryParseAnimationIdByName(::System::String* animationName, ::System::Int32& animationId)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_TRYPARSEANIMATIONIDBYNAME_OFFSET))(animationName, animationId);
		}

		static ::System::Boolean TryParseMontageIdByName(::System::String* montageName, ::System::UInt32& montageId)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_TRYPARSEMONTAGEIDBYNAME_OFFSET))(montageName, montageId);
		}

		static ::System::Void SplitMontageInfoById(::System::UInt32 montageId, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size, ::System::Int32& number)
		{
			return ((::System::Void(*)(::System::UInt32, ::ENPCAvatarGender&, ::ENPCAvatarSize&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONDEFINE_SPLITMONTAGEINFOBYID_OFFSET))(montageId, gender, size, number);
		}
	};
}
