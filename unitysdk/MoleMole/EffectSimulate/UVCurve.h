#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EvaluateAnimationCurve_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x1497D220)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_31FC867766176C3A_OFFSET UNITYSDK_OFFSET(0x1497BDD0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_358636A0F7882E47_1_OFFSET UNITYSDK_OFFSET(0x1497D640)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_358636A0F7882E47_OFFSET UNITYSDK_OFFSET(0x1497D4A0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_48B6F20F4C113255_OFFSET UNITYSDK_OFFSET(0x1497CAC0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_6FD64B3DB3CCB573_OFFSET UNITYSDK_OFFSET(0x1497C1A0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1497D630)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_A0F1D07FA5BAF2AE_OFFSET UNITYSDK_OFFSET(0x1497C2D0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_B56234B03748E3AC_OFFSET UNITYSDK_OFFSET(0x1497CA20)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1497D570)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1497D5B0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x1497D5F0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1497D530)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x1497C980)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_FFDB41E6BD9C64A5_OFFSET UNITYSDK_OFFSET(0x1497C3A0)
#define MOLEMOLE_EFFECTSIMULATE_UVCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1497BCF0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int UVCurve_TypeDefinitionIndex = 46891;

	class UVCurve : public ::MoleMole::EffectSimulate::EvaluateAnimationCurve_1<::UnityEngine::Vector4>
	{
	public:
		// static const ::System::String* TILING_TITLE_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* TILING_XY_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* OFFSET_TITLE_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* OFFSET_XY_HOR_GROUP_NAME; // 0x0
		// static const ::System::Single FIRST_LABEL_ITEM_WIDTH; // 0x0
		// static const ::System::Single SECOND_LABEL_ITEM_WIDTH; // 0x0
		::System::Boolean tilingSameOnVec; // 0x90
		::System::Boolean xUseCurve; // 0x91
		::UnityEngine::AnimationCurve* xCurve; // 0x98
		::System::Boolean yUseCurve; // 0xA0
		::UnityEngine::AnimationCurve* yCurve; // 0xA8
		::System::Boolean offsetSameOnVec; // 0xB0
		::System::Boolean zUseCurve; // 0xB1
		::UnityEngine::AnimationCurve* zCurve; // 0xB8
		::System::Boolean wUseCurve; // 0xC0
		::UnityEngine::AnimationCurve* wCurve; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_4_31FC867766176C3A(::System::Single a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_31FC867766176C3A_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_4_A0F1D07FA5BAF2AE(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_A0F1D07FA5BAF2AE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_FFDB41E6BD9C64A5(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_FFDB41E6BD9C64A5_OFFSET))(this, a1);
		}

		::System::Void Method_4_48B6F20F4C113255(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_48B6F20F4C113255_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_4_B56234B03748E3AC(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_B56234B03748E3AC_OFFSET))(this, a1);
		}

		::System::Void Method_4_CEE72EAC18ECC163(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_1DE6433C25680F9D_OFFSET))(this);
		}

		::System::String* Method_4_358636A0F7882E47()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_358636A0F7882E47_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Single Method_4_6FD64B3DB3CCB573(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::UnityEngine::AnimationCurve* a6, ::System::Int32 a7)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_6FD64B3DB3CCB573_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Method_4_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_4_358636A0F7882E47_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_UVCURVE_METHOD_4_358636A0F7882E47_1_OFFSET))(this);
		}
	};
}
