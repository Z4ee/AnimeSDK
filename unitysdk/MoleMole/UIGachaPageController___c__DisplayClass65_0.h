#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_601FA52CA5E757A0_1;
namespace MoleMole { class UIGachaPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB77B0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS65_0__OPENPERFORMPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x19DB77C0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS65_0__OPENPERFORMPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x19DB77F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass65_0_TypeDefinitionIndex = 64996;

	class UIGachaPageController___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* pointItems; // 0x10
		::System::Collections::Generic::List_1<::Class_3_601FA52CA5E757A0_1*>* dropItems; // 0x18
		::System::Action* onPlayEnd; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* itemResults; // 0x28
		::MoleMole::UIGachaPageController* __4__this; // 0x30
		::System::Int32 gachaID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenPerformPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS65_0__OPENPERFORMPAGE_B__0_OFFSET))(this);
		}

		::System::Void _OpenPerformPage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS65_0__OPENPERFORMPAGE_B__1_OFFSET))(this);
		}
	};
}
