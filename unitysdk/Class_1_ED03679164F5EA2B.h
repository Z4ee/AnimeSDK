#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1FD1CECAB456A68E.h"
#include "unitysdk/Enum_3_41BDD9D588006A51.h"
#include "unitysdk/Enum_3_B6A163368DEBFA20.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_242;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIInLevelRoleHudSmallWidgetChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_ED03679164F5EA2B_METHOD_1_0A50B8D0FB7E316B_OFFSET UNITYSDK_OFFSET(0x13F05D10)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_16E8C6F2D3C81A91_OFFSET UNITYSDK_OFFSET(0x13F06FC0)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0x13F05EA0)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_20E31190F7F967C8_OFFSET UNITYSDK_OFFSET(0x13F08790)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_24D644216796A3C3_OFFSET UNITYSDK_OFFSET(0x13F078D0)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0x13F07AB0)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_29DDD820C87F1ECA_OFFSET UNITYSDK_OFFSET(0x13F06D60)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_44CF173E15D7C5C0_OFFSET UNITYSDK_OFFSET(0x13F069A0)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_561DCA7A026E0E56_OFFSET UNITYSDK_OFFSET(0x13F08A80)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_5E4FBE94ADC15CB3_OFFSET UNITYSDK_OFFSET(0x13F07250)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_657546073F49B10C_OFFSET UNITYSDK_OFFSET(0x13F07810)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x13F082F0)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x13F074E0)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_8E09123A7B75854B_OFFSET UNITYSDK_OFFSET(0x13F05D70)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_8F8F2CA92B98D223_OFFSET UNITYSDK_OFFSET(0x13F06B20)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_96E6D8283CC009AF_OFFSET UNITYSDK_OFFSET(0x13F07A30)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_9AB816929FD5A562_OFFSET UNITYSDK_OFFSET(0x13F07390)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_A1A4291936B6DD96_OFFSET UNITYSDK_OFFSET(0x13F08010)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_BBAAB2F4E809F692_OFFSET UNITYSDK_OFFSET(0x13F087E0)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13F07A70)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x13F058C0)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_EDC9559BF212EFB3_OFFSET UNITYSDK_OFFSET(0x13F08440)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13F05D00)
#define CLASS_1_ED03679164F5EA2B_METHOD_1_FBF96257B45B12EC_OFFSET UNITYSDK_OFFSET(0x13F06C70)
#define CLASS_1_ED03679164F5EA2B__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F05C50)
#define CLASS_1_ED03679164F5EA2B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13F05A80)
#define CLASS_1_ED03679164F5EA2B__CTOR_OFFSET UNITYSDK_OFFSET(0x13F056F0)

inline static constexpr unsigned int Class_1_ED03679164F5EA2B_TypeDefinitionIndex = 73295;

class Class_1_ED03679164F5EA2B : public ::System::Object
{
public:
	static ::Il2CppArray<::Enum_3_B6A163368DEBFA20>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Enum_3_B6A163368DEBFA20>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED03679164F5EA2B_TypeDefinitionIndex)->GetStaticField(0x3E400);
	}
	::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_B6A163368DEBFA20, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* Field_1_7; // 0x18
	::System::Func_3<::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_242*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::Enum_3_B6A163368DEBFA20, ::System::Boolean>* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*>* Field_1_4; // 0x30
	::System::Boolean Field_1_3; // 0x38
	::System::Boolean Field_1_6; // 0x39
	::System::Boolean Field_1_8; // 0x3A
	::System::Boolean Field_1_9; // 0x3B

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*>* a1, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*>*, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController* a1, ::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController* a2, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*, ::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_0A50B8D0FB7E316B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_0A50B8D0FB7E316B_OFFSET))(this);
	}

	::System::Void Method_1_8E09123A7B75854B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_8E09123A7B75854B_OFFSET))(this, a1);
	}

	::System::Void Method_1_44CF173E15D7C5C0(::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_44CF173E15D7C5C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A7F9F3B13A09C96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_1A7F9F3B13A09C96_OFFSET))(this, a1);
	}

	::System::Void Method_1_29DDD820C87F1ECA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_29DDD820C87F1ECA_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_16E8C6F2D3C81A91(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_16E8C6F2D3C81A91_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E4FBE94ADC15CB3(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_5E4FBE94ADC15CB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9AB816929FD5A562(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_9AB816929FD5A562_OFFSET))(this, a1);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_657546073F49B10C(::Enum_3_B6A163368DEBFA20 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B6A163368DEBFA20, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_657546073F49B10C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_24D644216796A3C3(::Enum_3_41BDD9D588006A51 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_41BDD9D588006A51, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_24D644216796A3C3_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*>* Method_1_96E6D8283CC009AF()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_96E6D8283CC009AF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Enum_3_B6A163368DEBFA20 Method_1_8F8F2CA92B98D223(::MoleMole::Battle::Entity* a1)
	{
		return ((::Enum_3_B6A163368DEBFA20(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_8F8F2CA92B98D223_OFFSET))(this, a1);
	}

	::System::Void Method_1_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_2839AE123F8ECAA7_OFFSET))(this);
	}

	::System::Boolean Method_1_FBF96257B45B12EC(::Enum_3_B6A163368DEBFA20 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_B6A163368DEBFA20))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_FBF96257B45B12EC_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1A4291936B6DD96(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_A1A4291936B6DD96_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Int32 Method_1_EDC9559BF212EFB3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_EDC9559BF212EFB3_OFFSET))(this);
	}

	::System::Void Method_1_20E31190F7F967C8(::System::Func_3<::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_242*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_242*>*))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_20E31190F7F967C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBAAB2F4E809F692(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_BBAAB2F4E809F692_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_561DCA7A026E0E56(::Enum_3_1FD1CECAB456A68E a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_1FD1CECAB456A68E, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_561DCA7A026E0E56_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED03679164F5EA2B_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}
};
