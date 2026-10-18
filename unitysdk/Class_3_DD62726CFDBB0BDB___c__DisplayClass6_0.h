#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_650;
class Class_1_D501FC103C8A2714;
class Class_3_DD62726CFDBB0BDB;
namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitViewModel; }
namespace Sofa { class BaseSofaWindow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB803530)
#define CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xB803540)
#define CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xB803620)

inline static constexpr unsigned int Class_3_DD62726CFDBB0BDB___c__DisplayClass6_0_TypeDefinitionIndex = 52937;

class Class_3_DD62726CFDBB0BDB___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_3_DD62726CFDBB0BDB* __4__this; // 0x10
	::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>* popWindowList; // 0x18
	::RPG::Client::LimaoNews::LimaoNewsPlanData* currentPlanData; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* __DoShowEntrancePage_b__0(::Class_1_D501FC103C8A2714* a1)
	{
		return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*(*)(::PVOID, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__0_OFFSET))(this, a1);
	}

	::System::Void __DoShowEntrancePage_b__1(::Class_1_D17272E82AE804C2_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_650*))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__1_OFFSET))(this, a1);
	}
};
