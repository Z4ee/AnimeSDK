#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Tween_1.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Graphic; }

#define MOLEMOLE_TWEENALPHA_BEGIN_OFFSET UNITYSDK_OFFSET(0x191C19F0)
#define MOLEMOLE_TWEENALPHA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x191C1570)
#define MOLEMOLE_TWEENALPHA_METHOD_7_50C397B5C3CE86EA_OFFSET UNITYSDK_OFFSET(0x191C1C30)
#define MOLEMOLE_TWEENALPHA_METHOD_7_7AA82CF1473452F1_OFFSET UNITYSDK_OFFSET(0x191C1910)
#define MOLEMOLE_TWEENALPHA_METHOD_7_CD2EC0D03CAA1ECD_OFFSET UNITYSDK_OFFSET(0x191C15F0)
#define MOLEMOLE_TWEENALPHA_METHOD_7_DE49A82407E8E3A4_OFFSET UNITYSDK_OFFSET(0x191C17C0)
#define MOLEMOLE_TWEENALPHA_METHOD_7_F46FD0FF6D95C209_OFFSET UNITYSDK_OFFSET(0x191C13E0)
#define MOLEMOLE_TWEENALPHA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x191C1580)
#define MOLEMOLE_TWEENALPHA_START_OFFSET UNITYSDK_OFFSET(0x191C1240)
#define MOLEMOLE_TWEENALPHA__CTOR_OFFSET UNITYSDK_OFFSET(0x191C1B70)
#define MOLEMOLE_TWEENALPHA___BASE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x191C1B90)
#define MOLEMOLE_TWEENALPHA___BASE_START_OFFSET UNITYSDK_OFFSET(0x191C1BA0)

namespace MoleMole
{
	inline static constexpr unsigned int TweenAlpha_TypeDefinitionIndex = 78031;

	class TweenAlpha : public ::MoleMole::Tween_1<::System::Single>
	{
	public:
		::System::Boolean includeChildren; // 0x88
		::System::Boolean Field_7_2; // 0x89
		::System::Single Field_7_1; // 0x8C
		::UnityEngine::Transform* Field_7_0; // 0x90
		::Il2CppArray<::UnityEngine::UI::Graphic*>* Field_7_7; // 0x98
		::UnityEngine::CanvasGroup* Field_7_6; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_START_OFFSET))(this);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_7AA82CF1473452F1(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_METHOD_7_7AA82CF1473452F1_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::TweenAlpha* Begin(::UnityEngine::GameObject* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::MoleMole::TweenAlpha*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_BEGIN_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void __base_set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA___BASE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA___BASE_START_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_7_CD2EC0D03CAA1ECD()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_METHOD_7_CD2EC0D03CAA1ECD_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::UI::Graphic*>* Method_7_50C397B5C3CE86EA()
		{
			return ((::Il2CppArray<::UnityEngine::UI::Graphic*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_METHOD_7_50C397B5C3CE86EA_OFFSET))(this);
		}

		::System::Void Method_7_DE49A82407E8E3A4(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_METHOD_7_DE49A82407E8E3A4_OFFSET))(this, a1, a2);
		}

		::UnityEngine::CanvasGroup* Method_7_F46FD0FF6D95C209()
		{
			return ((::UnityEngine::CanvasGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_METHOD_7_F46FD0FF6D95C209_OFFSET))(this);
		}
	};
}
