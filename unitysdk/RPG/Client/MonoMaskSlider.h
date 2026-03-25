#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoMaskSlider_AnimStyle.h"
#include "unitysdk/RPG/Client/MonoMaskSlider_FlashLoopAnimName.h"
#include "unitysdk/RPG/Client/MonoMaskSlider_SliderDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOMASKSLIDER_GETBLINGANIMATIONNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x9D1CC40)
#define RPG_CLIENT_MONOMASKSLIDER_GETRATIO_OFFSET UNITYSDK_OFFSET(0x9D1C8D0)
#define RPG_CLIENT_MONOMASKSLIDER_GET_LOOPANIMNAMESTR_OFFSET UNITYSDK_OFFSET(0x9D1C360)
#define RPG_CLIENT_MONOMASKSLIDER_METHOD_5_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x9D1D000)
#define RPG_CLIENT_MONOMASKSLIDER_METHOD_5_C457B99D85451047_OFFSET UNITYSDK_OFFSET(0x9D1CE00)
#define RPG_CLIENT_MONOMASKSLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D1D180)
#define RPG_CLIENT_MONOMASKSLIDER_SETREFSLIDER_OFFSET UNITYSDK_OFFSET(0x9D1C940)
#define RPG_CLIENT_MONOMASKSLIDER_STARTFLASHLOOP_OFFSET UNITYSDK_OFFSET(0x9D1CB30)
#define RPG_CLIENT_MONOMASKSLIDER_STARTFLASHSPREAD_OFFSET UNITYSDK_OFFSET(0x9D1C9A0)
#define RPG_CLIENT_MONOMASKSLIDER_STOPFLASHLOOPANIM_OFFSET UNITYSDK_OFFSET(0x9D1CEC0)
#define RPG_CLIENT_MONOMASKSLIDER_STOPFLASHSPREADANIM_OFFSET UNITYSDK_OFFSET(0x9D1CCF0)
#define RPG_CLIENT_MONOMASKSLIDER_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x9D1C540)
#define RPG_CLIENT_MONOMASKSLIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D1CFB0)
#define RPG_CLIENT_MONOMASKSLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D1D1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMaskSlider_TypeDefinitionIndex = 59483;

	class MonoMaskSlider : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_16; // 0x0
		::UnityEngine::RectTransform* maskRect; // 0x18
		::UnityEngine::RectTransform* fillRect; // 0x20
		::RPG::Client::MonoMaskSlider_AnimStyle animStlye; // 0x28
		::UnityEngine::Animation* LoopAnim; // 0x30
		::RPG::Client::MonoMaskSlider_FlashLoopAnimName LoopAnimName; // 0x38
		::System::Boolean LoopAnimEnable; // 0x3C
		::UnityEngine::Animation* SpreadAnim; // 0x40
		::System::Boolean SpreadAnimEnable; // 0x48
		::System::Action_1<::RPG::Client::MonoMaskSlider*>* OnCustomAnimUpdate; // 0x50
		::RPG::Client::MonoMaskSlider* Field_5_9; // 0x58
		::UnityEngine::Transform* _fullEffect; // 0x60
		::RPG::Client::MonoMaskSlider_SliderDirection dirction; // 0x68
		::System::Single sliderGrowTime; // 0x6C
		::System::Single minValue; // 0x70
		::System::Single value; // 0x74
		::System::Single maxValue; // 0x78
		::System::Action_2<::System::Single, ::System::Single>* onValueChanged; // 0x80
		::System::Boolean Field_5_18; // 0x88
		::System::Boolean Field_5_19; // 0x89
		::System::Collections::Generic::SortedList_2<::RPG::Client::MonoMaskSlider_FlashLoopAnimName, ::System::String*>* Field_5_20; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER__CTOR_OFFSET))(this);
		}

		::System::String* get_LoopAnimNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_GET_LOOPANIMNAMESTR_OFFSET))(this);
		}

		::System::Void UpdateValue(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_UPDATEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetRefSlider(::RPG::Client::MonoMaskSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMaskSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_SETREFSLIDER_OFFSET))(this, a1);
		}

		::System::Single GetRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_GETRATIO_OFFSET))(this);
		}

		::System::Void StartFlashSpread(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_STARTFLASHSPREAD_OFFSET))(this, a1);
		}

		::System::Void StartFlashLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_STARTFLASHLOOP_OFFSET))(this);
		}

		::System::Single GetBlingAnimationNormalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_GETBLINGANIMATIONNORMALIZEDTIME_OFFSET))(this);
		}

		::System::Void StopFlashSpreadAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_STOPFLASHSPREADANIM_OFFSET))(this);
		}

		::System::Void StopFlashLoopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_STOPFLASHLOOPANIM_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_C457B99D85451047(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_METHOD_5_C457B99D85451047_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_7C2C2820B36B9508()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_METHOD_5_7C2C2820B36B9508_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_ONDESTROY_OFFSET))(this);
		}
	};
}
