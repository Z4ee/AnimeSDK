#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
class Class_1_759123AB68473B83;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192E3C90)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CLICKBACKFLOWSURVEY_B__4_0_OFFSET UNITYSDK_OFFSET(0x192E3CE0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192E3CD0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__INITRETURNPAGEITEMLIST_B__16_0_OFFSET UNITYSDK_OFFSET(0x192E3CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnPageController___c_TypeDefinitionIndex = 73192;

	class UIActivityReturnPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_759123AB68473B83*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::Class_1_759123AB68473B83*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AA80);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__4_0()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AA88);
		}
		static ::MoleMole::UIActivityReturnPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityReturnPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ClickBackFlowSurvey_b__4_0(::Class_0_16E4307DCC419505_36* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CLICKBACKFLOWSURVEY_B__4_0_OFFSET))(this, rcvMessage);
		}

		::System::Int32 _InitReturnPageItemList_b__16_0(::Class_1_759123AB68473B83* a, ::Class_1_759123AB68473B83* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_759123AB68473B83*, ::Class_1_759123AB68473B83*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__INITRETURNPAGEITEMLIST_B__16_0_OFFSET))(this, a, b);
		}
	};
}
