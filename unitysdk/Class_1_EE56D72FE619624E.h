#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Buff/GameplayEffectModifier.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_26;
class Class_0_16E4307DCC419505_43;
class Class_1_446FF0195498B714;
class Class_1_7B7FC057D30D5C12;
class Class_1_93212FB481F8D4AB;
class Class_1_C4FBE3F5FE19D120;
namespace Foundation { class IEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EE56D72FE619624E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBADCC0)
#define CLASS_1_EE56D72FE619624E_METHOD_1_51F5BE1BAA34B4E9_OFFSET UNITYSDK_OFFSET(0x1EBAF600)
#define CLASS_1_EE56D72FE619624E_METHOD_1_542D51928BA3FAC2_OFFSET UNITYSDK_OFFSET(0x1EBAE0D0)
#define CLASS_1_EE56D72FE619624E_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1EBAF5A0)
#define CLASS_1_EE56D72FE619624E_METHOD_1_716F9CA40F2688B9_OFFSET UNITYSDK_OFFSET(0x1EBAE680)
#define CLASS_1_EE56D72FE619624E_METHOD_1_8EECC2D161DCD937_OFFSET UNITYSDK_OFFSET(0x1EBAE750)
#define CLASS_1_EE56D72FE619624E_METHOD_1_918EFF8F684B378F_OFFSET UNITYSDK_OFFSET(0x1EBAE1D0)
#define CLASS_1_EE56D72FE619624E_METHOD_1_B0921AAB3A13303F_OFFSET UNITYSDK_OFFSET(0x1EBADFF0)
#define CLASS_1_EE56D72FE619624E_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x1EBADA80)
#define CLASS_1_EE56D72FE619624E_METHOD_1_B675FAC9A7FFB240_OFFSET UNITYSDK_OFFSET(0x1EBA7E60)
#define CLASS_1_EE56D72FE619624E_METHOD_1_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x1EBAECB0)
#define CLASS_1_EE56D72FE619624E_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x1EBAD930)
#define CLASS_1_EE56D72FE619624E_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x1EBAD800)
#define CLASS_1_EE56D72FE619624E_METHOD_1_FEA18E165DBB5C62_OFFSET UNITYSDK_OFFSET(0x1EBAF390)
#define CLASS_1_EE56D72FE619624E__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAD6F0)

inline static constexpr unsigned int Class_1_EE56D72FE619624E_TypeDefinitionIndex = 19595;

class Class_1_EE56D72FE619624E : public ::System::Object
{
public:
	::System::Action_2<::System::Single, ::System::Single>* Field_1_10; // 0x10
	::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* Field_1_4; // 0x18
	::Class_1_7B7FC057D30D5C12* Field_1_2; // 0x20
	::Foundation::IEntity* Field_1_1; // 0x28
	::System::Action* Field_1_11; // 0x30
	::System::Collections::Generic::List_1<::Class_1_93212FB481F8D4AB*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::Class_1_C4FBE3F5FE19D120*>* Field_1_6; // 0x40
	::Class_0_16E4307DCC419505_26* Field_1_7; // 0x48
	::Class_0_16E4307DCC419505_43* Field_1_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_DISPOSE_OFFSET))(this);
	}

	static ::Class_1_EE56D72FE619624E* Method_1_B0921AAB3A13303F(::Class_1_7B7FC057D30D5C12* a1, ::Foundation::IEntity* a2, ::Class_0_16E4307DCC419505_26* a3, ::Class_0_16E4307DCC419505_43* a4)
	{
		return ((::Class_1_EE56D72FE619624E*(*)(::Class_1_7B7FC057D30D5C12*, ::Foundation::IEntity*, ::Class_0_16E4307DCC419505_26*, ::Class_0_16E4307DCC419505_43*))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_B0921AAB3A13303F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_918EFF8F684B378F(::Class_1_7B7FC057D30D5C12* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4FBE3F5FE19D120*>* a2)
	{
		return ((::System::Single(*)(::Class_1_7B7FC057D30D5C12*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4FBE3F5FE19D120*>*))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_918EFF8F684B378F_OFFSET))(a1, a2);
	}

	::System::Void Method_1_716F9CA40F2688B9(::Class_1_7B7FC057D30D5C12* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_716F9CA40F2688B9_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_B675FAC9A7FFB240(::Foundation::IEntity* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4FBE3F5FE19D120*>* a2, ::Class_0_16E4307DCC419505_26* a3)
	{
		return ((::System::Void(*)(::Foundation::IEntity*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C4FBE3F5FE19D120*>*, ::Class_0_16E4307DCC419505_26*))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_B675FAC9A7FFB240_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_51F5BE1BAA34B4E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_51F5BE1BAA34B4E9_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_8EECC2D161DCD937()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_8EECC2D161DCD937_OFFSET))(this);
	}

	::System::Void Method_1_FEA18E165DBB5C62(::Class_1_446FF0195498B714* a1, ::Foundation::Buff::GameplayEffectModifier a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_446FF0195498B714*, ::Foundation::Buff::GameplayEffectModifier))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_FEA18E165DBB5C62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_542D51928BA3FAC2(::Class_1_7B7FC057D30D5C12* a1, ::Foundation::IEntity* a2, ::Class_0_16E4307DCC419505_26* a3, ::Class_0_16E4307DCC419505_43* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B7FC057D30D5C12*, ::Foundation::IEntity*, ::Class_0_16E4307DCC419505_26*, ::Class_0_16E4307DCC419505_43*))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_542D51928BA3FAC2_OFFSET))(this, a1, a2, a3, a4);
	}
};
