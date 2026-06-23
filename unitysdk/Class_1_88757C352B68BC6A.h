#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A2C8292EF929042.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_613;
class Class_1_6A3A26AD0CB7F995;
class Class_1_C6F4A9AF6A59779C;
namespace MoleMole { class UIInLevelSkillButtonBranchBaseController; }
namespace MoleMole { class UIInLevelSkillButtonBranchInteractChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_88757C352B68BC6A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17AC7F30)
#define CLASS_1_88757C352B68BC6A_METHOD_1_0915110004B2F0C9_OFFSET UNITYSDK_OFFSET(0x17AC8D70)
#define CLASS_1_88757C352B68BC6A_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x17AC8D00)
#define CLASS_1_88757C352B68BC6A_METHOD_1_0FDA0C1B1D74464F_OFFSET UNITYSDK_OFFSET(0x17AC81B0)
#define CLASS_1_88757C352B68BC6A_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17AC8C40)
#define CLASS_1_88757C352B68BC6A_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17AC90C0)
#define CLASS_1_88757C352B68BC6A_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x17AC8780)
#define CLASS_1_88757C352B68BC6A_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x17AC88A0)
#define CLASS_1_88757C352B68BC6A_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x17AC9100)
#define CLASS_1_88757C352B68BC6A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17AC8440)
#define CLASS_1_88757C352B68BC6A_METHOD_1_8565446E8976A6E0_OFFSET UNITYSDK_OFFSET(0x17AC87D0)
#define CLASS_1_88757C352B68BC6A_METHOD_1_C5373F1C0C4425FC_OFFSET UNITYSDK_OFFSET(0x17AC85D0)
#define CLASS_1_88757C352B68BC6A_METHOD_1_D681E6F196C9651B_OFFSET UNITYSDK_OFFSET(0x17AC9160)
#define CLASS_1_88757C352B68BC6A_METHOD_1_DB4B43E60DCCA4C1_OFFSET UNITYSDK_OFFSET(0x17AC84A0)
#define CLASS_1_88757C352B68BC6A_METHOD_1_E157ACBF46DCD959_OFFSET UNITYSDK_OFFSET(0x17AC8900)
#define CLASS_1_88757C352B68BC6A_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x17AC9300)
#define CLASS_1_88757C352B68BC6A_METHOD_1_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x17AC9350)
#define CLASS_1_88757C352B68BC6A_METHOD_1_EE071CFA0B1969FE_OFFSET UNITYSDK_OFFSET(0x17AC9080)
#define CLASS_1_88757C352B68BC6A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AC81A0)
#define CLASS_1_88757C352B68BC6A__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC7C70)

inline static constexpr unsigned int Class_1_88757C352B68BC6A_TypeDefinitionIndex = 69661;

class Class_1_88757C352B68BC6A : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88757C352B68BC6A_TypeDefinitionIndex)->GetStaticField(0x10D40);
	}
	::MoleMole::UIInLevelSkillButtonBranchBaseController* Field_1_3; // 0x10
	::MoleMole::UIInLevelSkillButtonBranchBaseController* Field_1_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_4A2C8292EF929042, ::MoleMole::UIInLevelSkillButtonBranchBaseController*>* Field_1_4; // 0x20
	::UnityEngine::Transform* Field_1_2; // 0x28
	::MoleMole::EntityHandle Field_1_5; // 0x30
	::MoleMole::UIWindowController* Field_1_1; // 0x40
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_613*>* Field_1_8; // 0x48
	::MoleMole::UIInLevelSkillButtonBranchInteractChildWindowController* Field_1_7; // 0x50
	::System::Boolean Field_1_9; // 0x58

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_DISPOSE_OFFSET))(this);
	}

	::MoleMole::UIInLevelSkillButtonBranchBaseController* Method_1_0FDA0C1B1D74464F(::Class_0_16E4307DCC419505_613* a1)
	{
		return ((::MoleMole::UIInLevelSkillButtonBranchBaseController*(*)(::PVOID, ::Class_0_16E4307DCC419505_613*))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_0FDA0C1B1D74464F_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_DB4B43E60DCCA4C1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_DB4B43E60DCCA4C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_8565446E8976A6E0(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_8565446E8976A6E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_C5373F1C0C4425FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_C5373F1C0C4425FC_OFFSET))(this);
	}

	::MoleMole::UIInLevelSkillButtonBranchBaseController* Method_1_E157ACBF46DCD959(::Class_1_C6F4A9AF6A59779C* a1)
	{
		return ((::MoleMole::UIInLevelSkillButtonBranchBaseController*(*)(::PVOID, ::Class_1_C6F4A9AF6A59779C*))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_E157ACBF46DCD959_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_6A3A26AD0CB7F995* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A3A26AD0CB7F995*))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0915110004B2F0C9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_0915110004B2F0C9_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelSkillButtonBranchBaseController* Method_1_EE071CFA0B1969FE()
	{
		return ((::MoleMole::UIInLevelSkillButtonBranchBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_EE071CFA0B1969FE_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_1_D681E6F196C9651B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_D681E6F196C9651B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88757C352B68BC6A_METHOD_1_EADDF1782C977BCA_OFFSET))(this, a1);
	}
};
