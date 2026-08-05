#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_208CC9941471731A_661;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOGENETALCOUNTDOWN_HASTIMESWITCHING_OFFSET UNITYSDK_OFFSET(0x18073A10)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_METHOD_5_FA67A5A26F4AE823_OFFSET UNITYSDK_OFFSET(0x180726B0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18073F30)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_RESET_OFFSET UNITYSDK_OFFSET(0x18072310)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEFORCE_OFFSET UNITYSDK_OFFSET(0x180725D0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEICONFORCE_OFFSET UNITYSDK_OFFSET(0x180729D0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEICON_OFFSET UNITYSDK_OFFSET(0x180732D0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIME_OFFSET UNITYSDK_OFFSET(0x180731D0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_WILLCHANGETIMEICON_OFFSET UNITYSDK_OFFSET(0x18072EA0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x18074190)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGenetalCountDown_TypeDefinitionIndex = 84171;

	class MonoGenetalCountDown : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* hourTex; // 0x18
		::UnityEngine::UI::Text* minuteTex; // 0x20
		::UnityEngine::GameObject* dayTimeIcon; // 0x28
		::UnityEngine::GameObject* nightTimeIcon; // 0x30
		::System::Int32 Field_5_7; // 0x38
		::System::Int32 Field_5_6; // 0x3C
		::System::String* Field_5_5; // 0x40
		::System::String* Field_5_4; // 0x48
		::System::Int32 Field_5_11; // 0x50
		::System::Int32 Field_5_10; // 0x54
		::System::Boolean Field_5_9; // 0x58
		::UnityEngine::Animation* ChangeTimeAnimation; // 0x60
		::System::Boolean CanChangeTimeText; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_RESET_OFFSET))(this);
		}

		::System::Void SetTimeForce(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEFORCE_OFFSET))(this, a1);
		}

		::System::Boolean WillChangeTimeIcon(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_WILLCHANGETIMEICON_OFFSET))(this, a1);
		}

		::System::Void SetTime(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIME_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasTimeSwitching(::Class_2_208CC9941471731A_661*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_661*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_HASTIMESWITCHING_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetTimeIconForce(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEICONFORCE_OFFSET))(this, a1, a2);
		}

		::System::Void SetTimeIcon(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEICON_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_FA67A5A26F4AE823(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_METHOD_5_FA67A5A26F4AE823_OFFSET))(this, a1, a2, a3);
		}
	};
}
