#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F4D64A4B97E38F9;
class Class_1_D17272E82AE804C2_627;
class Class_3_DD62726CFDBB0BDB;
namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitViewModel; }
namespace Sofa { class BaseSofaWindow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x195D33D0)
#define CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x195D33E0)
#define CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x195D34C0)

inline static constexpr unsigned int Class_3_DD62726CFDBB0BDB___c__DisplayClass6_0_TypeDefinitionIndex = 53211;

class Class_3_DD62726CFDBB0BDB___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_3_DD62726CFDBB0BDB* __4__this; // 0x10
	::RPG::Client::LimaoNews::LimaoNewsPlanData* currentPlanData; // 0x18
	::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>* popWindowList; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* __DoShowEntrancePage_b__0(::Class_1_5F4D64A4B97E38F9* a1)
	{
		return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__0_OFFSET))(this, a1);
	}

	::System::Void __DoShowEntrancePage_b__1(::Class_1_D17272E82AE804C2_627* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_627*))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__1_OFFSET))(this, a1);
	}
};
