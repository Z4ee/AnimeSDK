#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_938;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_1CD5437D668B7AFD_Class_1_31B35383D25353CE;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A67AE8ECEC8D41D2_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x118144C0)
#define CLASS_2_A67AE8ECEC8D41D2_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x118145D0)
#define CLASS_2_A67AE8ECEC8D41D2_METHOD_2_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x118140C0)
#define CLASS_2_A67AE8ECEC8D41D2_METHOD_2_3762C61ECEB2D66F_OFFSET UNITYSDK_OFFSET(0x11813660)
#define CLASS_2_A67AE8ECEC8D41D2_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x118134D0)
#define CLASS_2_A67AE8ECEC8D41D2_METHOD_2_48838CDCB359D9A4_OFFSET UNITYSDK_OFFSET(0x11813CD0)
#define CLASS_2_A67AE8ECEC8D41D2_METHOD_2_51521C74BCE1597B_OFFSET UNITYSDK_OFFSET(0x11813ED0)
#define CLASS_2_A67AE8ECEC8D41D2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11814760)
#define CLASS_2_A67AE8ECEC8D41D2_METHOD_2_99DBC22FB543C50C_OFFSET UNITYSDK_OFFSET(0x118136B0)
#define CLASS_2_A67AE8ECEC8D41D2_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11814460)
#define CLASS_2_A67AE8ECEC8D41D2_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x118143C0)
#define CLASS_2_A67AE8ECEC8D41D2_METHOD_2_C431797E79A54492_OFFSET UNITYSDK_OFFSET(0x118142B0)
#define CLASS_2_A67AE8ECEC8D41D2_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0x11813600)
#define CLASS_2_A67AE8ECEC8D41D2__CTOR_OFFSET UNITYSDK_OFFSET(0x118146B0)
#define CLASS_2_A67AE8ECEC8D41D2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x118147C0)
#define CLASS_2_A67AE8ECEC8D41D2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11814820)

inline static constexpr unsigned int Class_2_A67AE8ECEC8D41D2_TypeDefinitionIndex = 66372;

class Class_2_A67AE8ECEC8D41D2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::BattleInstance* Field_2_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_938*>* Field_2_0; // 0x68
	::RPG::GameCore::TurnBasedGameMode* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_CD37BA088172EEF7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_METHOD_2_CD37BA088172EEF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_3762C61ECEB2D66F(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_METHOD_2_3762C61ECEB2D66F_OFFSET))(this, a1);
	}

	::System::Void Method_2_48838CDCB359D9A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_METHOD_2_48838CDCB359D9A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_51521C74BCE1597B(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_METHOD_2_51521C74BCE1597B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_METHOD_2_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_2_99DBC22FB543C50C(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_METHOD_2_99DBC22FB543C50C_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_938* Method_2_C431797E79A54492(::System::UInt32 a1, ::Class_2_1CD5437D668B7AFD_Class_1_31B35383D25353CE* a2)
	{
		return ((::Class_0_16E4307DCC419505_938*(*)(::PVOID, ::System::UInt32, ::Class_2_1CD5437D668B7AFD_Class_1_31B35383D25353CE*))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_METHOD_2_C431797E79A54492_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A67AE8ECEC8D41D2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
