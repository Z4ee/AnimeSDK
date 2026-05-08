#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_759123AB68473B83;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B85380)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CLICKBACKFLOWSURVEY_B__4_0_OFFSET UNITYSDK_OFFSET(0x15B853D0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B853C0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__INITRETURNPAGEITEMLIST_B__16_0_OFFSET UNITYSDK_OFFSET(0x15B853E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnPageController___c_TypeDefinitionIndex = 75099;

	class UIActivityReturnPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityReturnPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityReturnPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnPageController___c_TypeDefinitionIndex)->GetStaticField(0x48920);
		}
		static ::System::Comparison_1<::Class_1_759123AB68473B83*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::Class_1_759123AB68473B83*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnPageController___c_TypeDefinitionIndex)->GetStaticField(0x48928);
		}
		static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__4_0()
		{
			return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnPageController___c_TypeDefinitionIndex)->GetStaticField(0x48930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ClickBackFlowSurvey_b__4_0(::Class_0_16E4307DCC419505_11* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__CLICKBACKFLOWSURVEY_B__4_0_OFFSET))(this, rcvMessage);
		}

		::System::Int32 _InitReturnPageItemList_b__16_0(::Class_1_759123AB68473B83* a, ::Class_1_759123AB68473B83* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_759123AB68473B83*, ::Class_1_759123AB68473B83*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__INITRETURNPAGEITEMLIST_B__16_0_OFFSET))(this, a, b);
		}
	};
}
