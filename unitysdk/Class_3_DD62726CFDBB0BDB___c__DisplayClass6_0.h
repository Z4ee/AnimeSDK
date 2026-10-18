#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1294FEF8E985635C;
class Class_1_D17272E82AE804C2_650;
class Class_3_DD62726CFDBB0BDB;
namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitViewModel; }
namespace Sofa { class BaseSofaWindow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB7FCEE0)
#define CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xB7FCEF0)
#define CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xB7FCFD0)

inline static constexpr unsigned int Class_3_DD62726CFDBB0BDB___c__DisplayClass6_0_TypeDefinitionIndex = 52937;

class Class_3_DD62726CFDBB0BDB___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>* popWindowList; // 0x10
	::Class_3_DD62726CFDBB0BDB* __4__this; // 0x18
	::RPG::Client::LimaoNews::LimaoNewsPlanData* currentPlanData; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* __DoShowEntrancePage_b__0(::Class_1_1294FEF8E985635C* a1)
	{
		return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*(*)(::PVOID, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__0_OFFSET))(this, a1);
	}

	::System::Void __DoShowEntrancePage_b__1(::Class_1_D17272E82AE804C2_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_650*))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__1_OFFSET))(this, a1);
	}
};
