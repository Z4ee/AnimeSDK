#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_0_16E4307DCC419505_1205;
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

#define CLASS_2_2026AB5D6E88CEE3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xEBDBD30)
#define CLASS_2_2026AB5D6E88CEE3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xEBDC110)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_0384E55B02D8BB77_OFFSET UNITYSDK_OFFSET(0xEBDA650)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_03D6E5EAD2D58C88_OFFSET UNITYSDK_OFFSET(0xEBDB310)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_185F640B532E227F_OFFSET UNITYSDK_OFFSET(0xEBDA250)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xEBD9DF0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_42A121C686C73935_OFFSET UNITYSDK_OFFSET(0xEBDA9C0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_54397E477925FDBB_OFFSET UNITYSDK_OFFSET(0xEBDA5D0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_7D599D6C5F28E144_OFFSET UNITYSDK_OFFSET(0xEBDB630)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_1_OFFSET UNITYSDK_OFFSET(0xEBDA190)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_2_OFFSET UNITYSDK_OFFSET(0xEBDA1F0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0xEBDA0B0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_972E73016B8D4493_OFFSET UNITYSDK_OFFSET(0xEBDB060)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xEBDBB20)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_9C2A65574448D201_OFFSET UNITYSDK_OFFSET(0xEBDB3D0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_B34831438167DBF5_OFFSET UNITYSDK_OFFSET(0xEBDA110)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_DD8056A748804D2B_OFFSET UNITYSDK_OFFSET(0xEBDB440)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xEBDB8C0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xEBDB980)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0xEBDBA50)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0xEBDBC20)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xEBDB7B0)
#define CLASS_2_2026AB5D6E88CEE3_METHOD_2_F7D05FE4D0BD2F30_OFFSET UNITYSDK_OFFSET(0xEBDA940)
#define CLASS_2_2026AB5D6E88CEE3__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDC4B0)
#define CLASS_2_2026AB5D6E88CEE3__ONBIND_OFFSET UNITYSDK_OFFSET(0xEBD9D70)

inline static constexpr unsigned int Class_2_2026AB5D6E88CEE3_TypeDefinitionIndex = 71561;

class Class_2_2026AB5D6E88CEE3 : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1205*>*>* EKELCLBIMAK; // 0x68
	::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_1205*>* KEBDMMHEMLL; // 0x70
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1205*>* IDNGHFBGLHC; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_1205*>*>* PIBNONMPLCP; // 0x80
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1205*>* DKOPKAEFPBN; // 0x88
	::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_1205*>* FKIMKNJBBDN; // 0x90
	::UnityEngine::Transform* CEDHIMICDCH; // 0x98
	::System::Boolean KJDACHFDOAH; // 0xA0
	::System::Boolean IDBHEIBEGBA; // 0xA1

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

	::System::Void Method_2_185F640B532E227F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_185F640B532E227F_OFFSET))(this, a1);
	}

	::System::Void Method_2_54397E477925FDBB(::RPG::GameCore::EntityModelDispose* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityModelDispose*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_54397E477925FDBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7D05FE4D0BD2F30(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_F7D05FE4D0BD2F30_OFFSET))(this, a1);
	}

	::System::Void Method_2_42A121C686C73935(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_42A121C686C73935_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1205* Method_2_972E73016B8D4493(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_1205*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_972E73016B8D4493_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1205* Method_2_03D6E5EAD2D58C88(::RPG::GameCore::TeamType a1)
	{
		return ((::Class_0_16E4307DCC419505_1205*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_03D6E5EAD2D58C88_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D599D6C5F28E144(::Class_0_16E4307DCC419505_1205* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1205*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_7D599D6C5F28E144_OFFSET))(this, a1);
	}

	::System::Void Method_2_0384E55B02D8BB77(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_0384E55B02D8BB77_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C2A65574448D201()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_9C2A65574448D201_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1205* Method_2_DD8056A748804D2B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_1205*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_DD8056A748804D2B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2026AB5D6E88CEE3_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
