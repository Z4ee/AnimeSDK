#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_FORCESTARTTOOLTIP_OFFSET UNITYSDK_OFFSET(0x1B52C9F0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_LOOPMOTIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1B52C520)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_MOTIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1B52C5A0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_SOURCESTARTEXITTIME_OFFSET UNITYSDK_OFFSET(0x1B52C850)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_SOURCETRANSITIONDURATION_OFFSET UNITYSDK_OFFSET(0x1B52C830)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_STARTMOTIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1B52C4A0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x1B52CA80)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1B52CA40)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1B52CA00)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_6990AE4D09B03418_OFFSET UNITYSDK_OFFSET(0x1B52D220)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_8EA91B93B34817EA_OFFSET UNITYSDK_OFFSET(0x1B52C870)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_97817351D067D82C_OFFSET UNITYSDK_OFFSET(0x1B52CAD0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x1B52CC40)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x1B52C910)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1B52C9B0)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1B52D270)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B52C970)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_SET_SOURCESTARTEXITTIME_OFFSET UNITYSDK_OFFSET(0x1B52C860)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_SET_SOURCETRANSITIONDURATION_OFFSET UNITYSDK_OFFSET(0x1B52C840)
#define RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52D2C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AniamtorControlConfig_TypeDefinitionIndex = 48310;

	class AniamtorControlConfig : public ::System::Object
	{
	public:
		::System::Boolean ShowMotionConflictedInfo; // 0x10
		::System::String* CharacterUniqueName; // 0x18
		::System::Single NormalizedTransitionDuration; // 0x20
		::System::Single NormalizedTimeStart; // 0x24
		::System::Boolean ForceStart; // 0x28
		::System::Boolean FastStartWhenNotForceStart; // 0x29
		::System::Boolean DisableAnimEvent; // 0x2A
		::System::UInt32 MotionID; // 0x2C
		::System::String* AvatarID; // 0x30
		::System::String* LayerName; // 0x38
		::System::Boolean ShowLayer; // 0x40
		::System::String* TargetAvatarID; // 0x48
		::System::String* StartMotion; // 0x50
		::System::Single OverrideStartMotionExitNormalizedTime; // 0x58
		::System::Boolean OverrideMotionConfig; // 0x5C
		::System::Single StartMotionSpeed; // 0x60
		::System::Single LoopMotionSpeed; // 0x64
		::System::Boolean HasStartExitTime; // 0x68
		::System::Boolean OverrideMotionTransitionInfo; // 0x69
		::System::Single StartExitTime; // 0x6C
		::System::Single TransitionDuration; // 0x70
		::System::Single _SourceTransitionDuration_k__BackingField; // 0x74
		::System::Single _SourceStartExitTime_k__BackingField; // 0x78
		::System::Single _StartMotionClipLength; // 0x7C
		::System::Single _LoopMotionClipLength; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG__CTOR_OFFSET))(this);
		}

		::System::Single get_StartMotionLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_STARTMOTIONLENGTH_OFFSET))(this);
		}

		::System::Single get_LoopMotionLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_LOOPMOTIONLENGTH_OFFSET))(this);
		}

		::System::Single get_MotionLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_MOTIONLENGTH_OFFSET))(this);
		}

		::System::Single get_SourceTransitionDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_SOURCETRANSITIONDURATION_OFFSET))(this);
		}

		::System::Void set_SourceTransitionDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_SET_SOURCETRANSITIONDURATION_OFFSET))(this, a1);
		}

		::System::Single get_SourceStartExitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_SOURCESTARTEXITTIME_OFFSET))(this);
		}

		::System::Void set_SourceStartExitTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_SET_SOURCESTARTEXITTIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_1_8EA91B93B34817EA()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_8EA91B93B34817EA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_1_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_C446CE6A5E1982BC_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::String* get_ForceStartToolTip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_GET_FORCESTARTTOOLTIP_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_1_0C10C7E7E3750739()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_0C10C7E7E3750739_OFFSET))(this);
		}

		::System::UInt32 Method_1_6990AE4D09B03418(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_6990AE4D09B03418_OFFSET))(this, a1);
		}

		::System::String* Method_1_97817351D067D82C()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_97817351D067D82C_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_1_98060E4D16CBDFE4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIAMTORCONTROLCONFIG_METHOD_1_98060E4D16CBDFE4_OFFSET))(this);
		}
	};
}
