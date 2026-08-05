#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x18373DE0)
#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_METHOD_6_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x18373E30)
#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x183741B0)
#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18374170)
#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x183741C0)
#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18374120)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelButtonClickAreaHandler_TypeDefinitionIndex = 62242;

	class UIInLevelButtonClickAreaHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::MoleMole::ConfigUICommon_Input_ButtonType _buttonTypeV2; // 0x18
		::UnityEngine::GameObject* _extraClickArea; // 0x20
		::System::Boolean Field_6_0; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_6_3BFE3B9EF8374F61()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_METHOD_6_3BFE3B9EF8374F61_OFFSET))(this);
		}
	};
}
