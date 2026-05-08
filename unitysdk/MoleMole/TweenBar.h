#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TweenBar_Enum_3_185F70E2A0CB2E94.h"
#include "unitysdk/MoleMole/Tween_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class MonoMaskSlider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define MOLEMOLE_TWEENBAR_BEGIN_1_OFFSET UNITYSDK_OFFSET(0x1389A8E0)
#define MOLEMOLE_TWEENBAR_BEGIN_OFFSET UNITYSDK_OFFSET(0x1389A770)
#define MOLEMOLE_TWEENBAR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x13899E10)
#define MOLEMOLE_TWEENBAR_INITINFO_OFFSET UNITYSDK_OFFSET(0x1389A430)
#define MOLEMOLE_TWEENBAR_METHOD_7_09C1B2AAF50AED97_OFFSET UNITYSDK_OFFSET(0x1389A4F0)
#define MOLEMOLE_TWEENBAR_METHOD_7_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x13899E90)
#define MOLEMOLE_TWEENBAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1389A5C0)
#define MOLEMOLE_TWEENBAR_RESETSTART_OFFSET UNITYSDK_OFFSET(0x1389A680)
#define MOLEMOLE_TWEENBAR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x13899E20)
#define MOLEMOLE_TWEENBAR_START_OFFSET UNITYSDK_OFFSET(0x1389A3B0)
#define MOLEMOLE_TWEENBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1389AA10)
#define MOLEMOLE_TWEENBAR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1389AA40)
#define MOLEMOLE_TWEENBAR___BASE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1389AA30)
#define MOLEMOLE_TWEENBAR___BASE_START_OFFSET UNITYSDK_OFFSET(0x1389AAD0)

namespace MoleMole
{
	inline static constexpr unsigned int TweenBar_TypeDefinitionIndex = 80383;

	class TweenBar : public ::MoleMole::Tween_1<::System::Single>
	{
	public:
		::MoleMole::TweenBar_Enum_3_185F70E2A0CB2E94 barSliderType; // 0x88
		::MoleMole::MonoMaskSlider* monoMaskSlider; // 0x90
		::UnityEngine::UI::Slider* imageSlider; // 0x98
		::UnityEngine::UI::Image* imageBar; // 0xA0
		::System::Single Field_7_4; // 0xA8
		::System::Boolean Field_7_5; // 0xAC
		::UnityEngine::Vector2 Field_7_6; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR__CTOR_OFFSET))(this);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_START_OFFSET))(this);
		}

		::System::Void Method_7_09C1B2AAF50AED97(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_METHOD_7_09C1B2AAF50AED97_OFFSET))(this, a1, a2);
		}

		::System::Void InitInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_INITINFO_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_ONDISABLE_OFFSET))(this);
		}

		::System::Void ResetStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_RESETSTART_OFFSET))(this);
		}

		static ::MoleMole::TweenBar* Begin(::UnityEngine::GameObject* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::MoleMole::TweenBar*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_BEGIN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::MoleMole::TweenBar* Begin_1(::MoleMole::TweenBar* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::MoleMole::TweenBar*(*)(::MoleMole::TweenBar*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_BEGIN_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void __base_set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR___BASE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR___BASE_START_OFFSET))(this);
		}

		::System::Void Method_7_8C4AEC0BC1CA0CB4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_METHOD_7_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
		}
	};
}
