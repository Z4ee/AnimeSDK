#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3ACFABBD8F118E93;
class Class_1_4F9417780723166C;
class Class_1_661077F66F5DB866;
namespace MoleMole { class UIHollowCardOptionsBasePopWindowController; }
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DA168A4F45285E88_METHOD_1_0F1C76BBE3CCC7BC_OFFSET UNITYSDK_OFFSET(0x8C21B90)
#define CLASS_1_DA168A4F45285E88_METHOD_1_149B6906A72F839E_OFFSET UNITYSDK_OFFSET(0x8C21CE0)
#define CLASS_1_DA168A4F45285E88_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8C220B0)
#define CLASS_1_DA168A4F45285E88_METHOD_1_D87FCBA763FC9132_OFFSET UNITYSDK_OFFSET(0x8C21DA0)
#define CLASS_1_DA168A4F45285E88__CTOR_OFFSET UNITYSDK_OFFSET(0x8C21B80)

inline static constexpr unsigned int Class_1_DA168A4F45285E88_TypeDefinitionIndex = 87126;

class Class_1_DA168A4F45285E88 : public ::System::Object
{
public:
	::MoleMole::UIHollowCardOptionsDialogContext* Field_1_0; // 0x10
	::System::Action_2<::Class_1_661077F66F5DB866*, ::Class_1_3ACFABBD8F118E93*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA168A4F45285E88__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0F1C76BBE3CCC7BC(::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4F9417780723166C*>*))((::PBYTE)hIl2Cpp + CLASS_1_DA168A4F45285E88_METHOD_1_0F1C76BBE3CCC7BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_149B6906A72F839E(::System::Action_2<::Class_1_661077F66F5DB866*, ::Class_1_3ACFABBD8F118E93*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_661077F66F5DB866*, ::Class_1_3ACFABBD8F118E93*>*))((::PBYTE)hIl2Cpp + CLASS_1_DA168A4F45285E88_METHOD_1_149B6906A72F839E_OFFSET))(this, a1);
	}

	::MoleMole::UIHollowCardOptionsBasePopWindowController* Method_1_D87FCBA763FC9132()
	{
		return ((::MoleMole::UIHollowCardOptionsBasePopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA168A4F45285E88_METHOD_1_D87FCBA763FC9132_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA168A4F45285E88_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
