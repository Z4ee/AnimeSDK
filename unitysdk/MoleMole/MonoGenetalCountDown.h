#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_208CC9941471731A_645;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOGENETALCOUNTDOWN_HASTIMESWITCHING_OFFSET UNITYSDK_OFFSET(0x16404720)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_METHOD_5_FA67A5A26F4AE823_OFFSET UNITYSDK_OFFSET(0x164033C0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16404C40)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_RESET_OFFSET UNITYSDK_OFFSET(0x16403020)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEFORCE_OFFSET UNITYSDK_OFFSET(0x164032E0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEICONFORCE_OFFSET UNITYSDK_OFFSET(0x164036E0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEICON_OFFSET UNITYSDK_OFFSET(0x16403FE0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIME_OFFSET UNITYSDK_OFFSET(0x16403EE0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_WILLCHANGETIMEICON_OFFSET UNITYSDK_OFFSET(0x16403BB0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x16404EA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGenetalCountDown_TypeDefinitionIndex = 76996;

	class MonoGenetalCountDown : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* hourTex; // 0x18
		::UnityEngine::UI::Text* minuteTex; // 0x20
		::UnityEngine::GameObject* dayTimeIcon; // 0x28
		::UnityEngine::GameObject* nightTimeIcon; // 0x30
		::System::Int32 Field_5_4; // 0x38
		::System::Int32 Field_5_5; // 0x3C
		::System::String* Field_5_6; // 0x40
		::System::String* Field_5_7; // 0x48
		::System::Int32 Field_5_8; // 0x50
		::System::Int32 Field_5_9; // 0x54
		::System::Boolean Field_5_10; // 0x58
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

		::System::Boolean HasTimeSwitching(::Class_2_208CC9941471731A_645*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_645*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_HASTIMESWITCHING_OFFSET))(this, a1);
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
