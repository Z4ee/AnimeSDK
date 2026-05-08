#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define NEWSBUBBLEPARAM_GETOTHERLANGUAGEDEFAULTFONTSIZE_OFFSET UNITYSDK_OFFSET(0xD463CA0)
#define NEWSBUBBLEPARAM_GETOTHERLANGUAGETHREELINEFONTSIZE_OFFSET UNITYSDK_OFFSET(0xD463BB0)
#define NEWSBUBBLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xD463D90)

inline static constexpr unsigned int NewsBubbleParam_TypeDefinitionIndex = 76061;

class NewsBubbleParam : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
{
public:
	::System::Single MoveDelay; // 0x58
	::System::Single MoveSpeed; // 0x5C
	::System::Single OpenDelay; // 0x60
	::System::Single OpenTime; // 0x64
	::System::Single CloseTime; // 0x68
	::System::Single IconCloseDelay; // 0x6C
	::UnityEngine::AnimationCurve* OpenCurve; // 0x70
	::UnityEngine::AnimationCurve* CloseCurve; // 0x78
	::System::Single Left; // 0x80
	::System::Single Right; // 0x84
	::System::Single BonusTimeDuration; // 0x88
	::System::Single SoundDelay; // 0x8C
	::UnityEngine::AnimationCurve* BGFadeCurve; // 0x90
	::System::Single Space; // 0x98
	::System::Single OffsetDuration; // 0x9C
	::System::Int32 LineOffset; // 0xA0
	::System::Int32 ThreeLineOffset; // 0xA4
	::System::Single bonusTimeStayDuration; // 0xA8
	::System::Int32 LanguageDefaultFontSize; // 0xAC
	::System::Int32 OtherLanguageDefaultFontSize; // 0xB0
	::System::Int32 OtherLanguageThreeLineFontSize; // 0xB4
	::System::Int32 OtherLanguageSizeCount; // 0xB8
	::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Int32>* SingleLanguageSizeCount; // 0xC0
	::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Int32>* SingleOtherLanguageDefaultFontSize; // 0xC8
	::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Int32>* SingleOtherLanguageThreeLineFontSize; // 0xD0
	::System::Single LanguageDefaultLineSpace; // 0xD8
	::System::Single LanguageLineSpace; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM__CTOR_OFFSET))(this);
	}

	::System::Int32 GetOtherLanguageThreeLineFontSize(::MoleMole::LanguageType type)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_GETOTHERLANGUAGETHREELINEFONTSIZE_OFFSET))(this, type);
	}

	::System::Int32 GetOtherLanguageDefaultFontSize(::MoleMole::LanguageType type)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_GETOTHERLANGUAGEDEFAULTFONTSIZE_OFFSET))(this, type);
	}
};
