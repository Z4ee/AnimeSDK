#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_0_16E4307DCC419505_840;
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

#define CLASS_2_2026AB5D6E88CEE3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x118FB870)
#define CLASS_2_2026AB5D6E88CEE3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x118FBBD0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_0384E55B02D8BB77_OFFSET UNITYSDK_OFFSET(0x118FA760)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_03D6E5EAD2D58C88_OFFSET UNITYSDK_OFFSET(0x118FB030)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x118FA290)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_54397E477925FDBB_OFFSET UNITYSDK_OFFSET(0x118FA6E0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x118FC1C0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x118FC160)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x118FB0F0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_7D599D6C5F28E144_OFFSET UNITYSDK_OFFSET(0x118FB350)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_8425A1EF325AE4B2_OFFSET UNITYSDK_OFFSET(0x118FAE30)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_1_OFFSET UNITYSDK_OFFSET(0x118FA620)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_2_OFFSET UNITYSDK_OFFSET(0x118FA680)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x118FA540)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x118FB540)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x118FB650)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x118FB6F0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0x118FB790)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x118FB470)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_B34831438167DBF5_OFFSET UNITYSDK_OFFSET(0x118FA5A0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_BC888E5778ABFB15_OFFSET UNITYSDK_OFFSET(0x118FA9B0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_C6E59C759625C00E_OFFSET UNITYSDK_OFFSET(0x118FAA30)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_DD8056A748804D2B_OFFSET UNITYSDK_OFFSET(0x118FB160)
#define CLASS_2_2026AB5D6E88CEE3__CTOR_OFFSET UNITYSDK_OFFSET(0x118FBF00)
#define CLASS_2_2026AB5D6E88CEE3__ONBIND_OFFSET UNITYSDK_OFFSET(0x118FA210)
#define CLASS_2_2026AB5D6E88CEE3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x118FC220)
#define CLASS_2_2026AB5D6E88CEE3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x118FC280)
#define CLASS_2_2026AB5D6E88CEE3___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x118FC100)

inline static constexpr unsigned int Class_2_2026AB5D6E88CEE3_TypeDefinitionIndex = 58634;

class Class_2_2026AB5D6E88CEE3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_840*>* Field_2_7; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_840*>*>* Field_2_3; // 0x68
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_840*>* Field_2_5; // 0x70
	::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_840*>* Field_2_6; // 0x78
	::RPG::GameCore::BattleInstance* Field_2_1; // 0x80
	::UnityEngine::Transform* Field_2_0; // 0x88
	::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_840*>* Field_2_8; // 0x90
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_840*>*>* Field_2_4; // 0x98
	::System::Boolean Field_2_2; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
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

	::Class_0_16E4307DCC419505_840* Method_2_8425A1EF325AE4B2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_840*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_8425A1EF325AE4B2_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_840* Method_2_03D6E5EAD2D58C88(::RPG::GameCore::TeamType a1)
	{
		return ((::Class_0_16E4307DCC419505_840*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_03D6E5EAD2D58C88_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D599D6C5F28E144(::Class_0_16E4307DCC419505_840* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_840*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_7D599D6C5F28E144_OFFSET))(this, a1);
	}

	::System::Void Method_2_0384E55B02D8BB77(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_0384E55B02D8BB77_OFFSET))(this, a1);
	}

	::System::Void Method_2_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_630A3B9C63A23882_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_840* Method_2_DD8056A748804D2B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_840*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_DD8056A748804D2B_OFFSET))(this, a1);
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
