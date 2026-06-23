#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Buff/GameplayEffectModifier.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_25;
class Class_0_16E4307DCC419505_41;
class Class_1_7B7FC057D30D5C12;
class Class_1_93212FB481F8D4AB;
class Class_1_C4FBE3F5FE19D120;
class Class_1_CED4C4BADCBE81C2;
namespace Foundation { class IEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EE56D72FE619624E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D28E2C0)
#define CLASS_1_EE56D72FE619624E_METHOD_1_2C33F923CB98F4FC_OFFSET UNITYSDK_OFFSET(0x1D28E610)
#define CLASS_1_EE56D72FE619624E_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x1D28E080)
#define CLASS_1_EE56D72FE619624E_METHOD_1_51F5BE1BAA34B4E9_OFFSET UNITYSDK_OFFSET(0x1D290060)
#define CLASS_1_EE56D72FE619624E_METHOD_1_542D51928BA3FAC2_OFFSET UNITYSDK_OFFSET(0x1D28FAC0)
#define CLASS_1_EE56D72FE619624E_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1D28FA60)
#define CLASS_1_EE56D72FE619624E_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x1D28F450)
#define CLASS_1_EE56D72FE619624E_METHOD_1_716F9CA40F2688B9_OFFSET UNITYSDK_OFFSET(0x1D2902E0)
#define CLASS_1_EE56D72FE619624E_METHOD_1_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x1D28DF30)
#define CLASS_1_EE56D72FE619624E_METHOD_1_B0921AAB3A13303F_OFFSET UNITYSDK_OFFSET(0x1D28FD50)
#define CLASS_1_EE56D72FE619624E_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x1D28DDF0)
#define CLASS_1_EE56D72FE619624E_METHOD_1_FEA18E165DBB5C62_OFFSET UNITYSDK_OFFSET(0x1D28F090)
#define CLASS_1_EE56D72FE619624E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28DCE0)

inline static constexpr unsigned int Class_1_EE56D72FE619624E_TypeDefinitionIndex = 19248;

class Class_1_EE56D72FE619624E : public ::System::Object
{
public:
	::System::Action_2<::System::Single, ::System::Single>* Field_1_8; // 0x10
	::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Class_1_C4FBE3F5FE19D120*>* Field_1_4; // 0x20
	::System::Action* Field_1_7; // 0x28
	::Class_0_16E4307DCC419505_41* Field_1_2; // 0x30
	::System::Collections::Generic::List_1<::Class_1_93212FB481F8D4AB*>* Field_1_5; // 0x38
	::Foundation::IEntity* Field_1_1; // 0x40
	::Class_0_16E4307DCC419505_25* Field_1_3; // 0x48
	::Class_1_7B7FC057D30D5C12* Field_1_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_2C33F923CB98F4FC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_2C33F923CB98F4FC_OFFSET))(this);
	}

	::System::Void Method_1_FEA18E165DBB5C62(::Class_1_CED4C4BADCBE81C2* a1, ::Foundation::Buff::GameplayEffectModifier a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CED4C4BADCBE81C2*, ::Foundation::Buff::GameplayEffectModifier))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_FEA18E165DBB5C62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_1_542D51928BA3FAC2(::Class_1_7B7FC057D30D5C12* a1, ::Foundation::IEntity* a2, ::Class_0_16E4307DCC419505_25* a3, ::Class_0_16E4307DCC419505_41* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B7FC057D30D5C12*, ::Foundation::IEntity*, ::Class_0_16E4307DCC419505_25*, ::Class_0_16E4307DCC419505_41*))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_542D51928BA3FAC2_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_1_EE56D72FE619624E* Method_1_B0921AAB3A13303F(::Class_1_7B7FC057D30D5C12* a1, ::Foundation::IEntity* a2, ::Class_0_16E4307DCC419505_25* a3, ::Class_0_16E4307DCC419505_41* a4)
	{
		return ((::Class_1_EE56D72FE619624E*(*)(::Class_1_7B7FC057D30D5C12*, ::Foundation::IEntity*, ::Class_0_16E4307DCC419505_25*, ::Class_0_16E4307DCC419505_41*))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_B0921AAB3A13303F_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_51F5BE1BAA34B4E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_51F5BE1BAA34B4E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_1_716F9CA40F2688B9(::Class_1_7B7FC057D30D5C12* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE56D72FE619624E_METHOD_1_716F9CA40F2688B9_OFFSET))(this, a1, a2, a3);
	}
};
