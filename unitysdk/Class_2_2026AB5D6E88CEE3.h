#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_0_16E4307DCC419505_996;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityModelDispose; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityTeamFormationStateChange; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2026AB5D6E88CEE3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD18C750)
#define CLASS_2_2026AB5D6E88CEE3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD18CAE0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_0384E55B02D8BB77_OFFSET UNITYSDK_OFFSET(0xD18B5E0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_03D6E5EAD2D58C88_OFFSET UNITYSDK_OFFSET(0xD18BF80)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xD18B140)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_54397E477925FDBB_OFFSET UNITYSDK_OFFSET(0xD18B560)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xD18D110)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD18D0B0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_7D599D6C5F28E144_OFFSET UNITYSDK_OFFSET(0xD18C2A0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_1_OFFSET UNITYSDK_OFFSET(0xD18B4C0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_2_OFFSET UNITYSDK_OFFSET(0xD18B510)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0xD18B400)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0xD18C040)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_9D932E32C7F1DD76_OFFSET UNITYSDK_OFFSET(0xD18BD40)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xD18C490)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xD18C530)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0xD18C5D0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0xD18C670)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xD18C3C0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_B34831438167DBF5_OFFSET UNITYSDK_OFFSET(0xD18B450)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_BC888E5778ABFB15_OFFSET UNITYSDK_OFFSET(0xD18B830)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_C6E59C759625C00E_OFFSET UNITYSDK_OFFSET(0xD18B8B0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_DD8056A748804D2B_OFFSET UNITYSDK_OFFSET(0xD18C0B0)
#define CLASS_2_2026AB5D6E88CEE3__CTOR_OFFSET UNITYSDK_OFFSET(0xD18CE40)
#define CLASS_2_2026AB5D6E88CEE3__ONBIND_OFFSET UNITYSDK_OFFSET(0xD18B0D0)
#define CLASS_2_2026AB5D6E88CEE3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD18D170)
#define CLASS_2_2026AB5D6E88CEE3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD18D1D0)
#define CLASS_2_2026AB5D6E88CEE3___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD18D050)

inline static constexpr unsigned int Class_2_2026AB5D6E88CEE3_TypeDefinitionIndex = 66887;

class Class_2_2026AB5D6E88CEE3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_996*>* Field_2_1; // 0x68
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_996*>* Field_2_2; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_996*>*>* Field_2_3; // 0x78
	::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_996*>* Field_2_4; // 0x80
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_996*>*>* Field_2_5; // 0x88
	::RPG::GameCore::BattleInstance* Field_2_6; // 0x90
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_996*>* Field_2_7; // 0x98
	::System::Boolean Field_2_8; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_2_B34831438167DBF5(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_B34831438167DBF5_OFFSET))(this, a1);
	}

	::System::Void Method_2_89C03AF435ED2C78_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_1_OFFSET))(this);
	}

	::System::Void Method_2_89C03AF435ED2C78_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_2_OFFSET))(this);
	}

	::System::Void Method_2_54397E477925FDBB(::RPG::GameCore::EntityModelDispose* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityModelDispose*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_54397E477925FDBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC888E5778ABFB15(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_BC888E5778ABFB15_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6E59C759625C00E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_C6E59C759625C00E_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_996* Method_2_9D932E32C7F1DD76(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_996*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_9D932E32C7F1DD76_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_996* Method_2_03D6E5EAD2D58C88(::RPG::GameCore::TeamType a1)
	{
		return ((::Class_0_16E4307DCC419505_996*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_03D6E5EAD2D58C88_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D599D6C5F28E144(::Class_0_16E4307DCC419505_996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_996*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_7D599D6C5F28E144_OFFSET))(this, a1);
	}

	::System::Void Method_2_0384E55B02D8BB77(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_0384E55B02D8BB77_OFFSET))(this, a1);
	}

	::System::Void Method_2_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_93190E731E31C79A_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_996* Method_2_DD8056A748804D2B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_996*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_DD8056A748804D2B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
