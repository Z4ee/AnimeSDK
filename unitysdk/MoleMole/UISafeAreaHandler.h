#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UISAFEAREAHANDLER_GETSAFEAREARECT_OFFSET UNITYSDK_OFFSET(0x1302A3B0)
#define MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_0CEE9868CF9CA474_OFFSET UNITYSDK_OFFSET(0x1302AE10)
#define MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_32ACF43E680D75A6_OFFSET UNITYSDK_OFFSET(0x1302A820)
#define MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_4B72F72501001F72_OFFSET UNITYSDK_OFFSET(0x1302BD50)
#define MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1302BF90)
#define MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1302BF50)
#define MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1302BFA0)
#define MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_FAADEE08E4E52BA5_OFFSET UNITYSDK_OFFSET(0x1302AF80)
#define MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_FC924E2ADB89532B_OFFSET UNITYSDK_OFFSET(0x1302AF30)
#define MOLEMOLE_UISAFEAREAHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1302A180)
#define MOLEMOLE_UISAFEAREAHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1302A220)
#define MOLEMOLE_UISAFEAREAHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1302AD30)
#define MOLEMOLE_UISAFEAREAHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1302AD80)

namespace MoleMole
{
	inline static constexpr unsigned int UISafeAreaHandler_TypeDefinitionIndex = 61714;

	class UISafeAreaHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C extraPaddingType; // 0x18
		::UnityEngine::Canvas* Field_6_1; // 0x20
		::System::Boolean Field_6_2; // 0x28
		::System::Boolean Field_6_3; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_UPDATE_OFFSET))(this);
		}

		static ::UnityEngine::Rect GetSafeAreaRect(::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C a1, ::UnityEngine::Canvas* a2)
		{
			return ((::UnityEngine::Rect(*)(::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_GETSAFEAREARECT_OFFSET))(a1, a2);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER___BASE_ONENABLE_OFFSET))(this);
		}

		static ::UnityEngine::Rect Method_6_32ACF43E680D75A6(::MoleMole::UISafeAreaHandler* a1, ::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C a2)
		{
			return ((::UnityEngine::Rect(*)(::MoleMole::UISafeAreaHandler*, ::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_32ACF43E680D75A6_OFFSET))(a1, a2);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> Method_6_FC924E2ADB89532B()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_FC924E2ADB89532B_OFFSET))(this);
		}

		::System::Void Method_6_FAADEE08E4E52BA5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_FAADEE08E4E52BA5_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_6_0CEE9868CF9CA474(::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_0CEE9868CF9CA474_OFFSET))(a1);
		}

		::UnityEngine::Canvas* Method_6_4B72F72501001F72()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_4B72F72501001F72_OFFSET))(this);
		}

		::System::Void Method_6_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISAFEAREAHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
