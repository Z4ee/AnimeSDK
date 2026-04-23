#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/Struct_2_02BD084C1EA35FFC.h"
#include "unitysdk/Struct_2_59F35947304F45AC.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/Struct_2_FF88F3A376A07684.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_343;
class Class_0_16E4307DCC419505_470;
class Class_1_812813014E8C3777;
class Class_1_A2D8E5AB4B623162;
class Class_2_1DB6C02CA182EEBA;
class Class_2_7AA0468CE6C1F3D7_1;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class BaseModifierInstance; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SubModifierData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7ADA3164ACBF978E_METHOD_1_052DC76F62B88326_OFFSET UNITYSDK_OFFSET(0xD9F21E0)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_0B415C587E53E248_OFFSET UNITYSDK_OFFSET(0xD9F29E0)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_218EA524F9D827BE_OFFSET UNITYSDK_OFFSET(0xD9ED8D0)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_21A72E7EEEAA708C_OFFSET UNITYSDK_OFFSET(0xD9F2270)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_2281EBC2DE9D3ACF_OFFSET UNITYSDK_OFFSET(0xD9EFA80)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_24FA83C23CECB055_OFFSET UNITYSDK_OFFSET(0xD9F2720)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_273028B0F7845277_OFFSET UNITYSDK_OFFSET(0xD9EDE70)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_37456EBB4D4D4C3B_OFFSET UNITYSDK_OFFSET(0xD9ED090)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_45D1DD20F4F05B91_OFFSET UNITYSDK_OFFSET(0xD9F1870)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_4DCF086ABDAD87EE_OFFSET UNITYSDK_OFFSET(0xD9F15A0)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_4F2FE4DBB043D1D0_OFFSET UNITYSDK_OFFSET(0xD9F2030)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_5B2D85749B8490DE_OFFSET UNITYSDK_OFFSET(0xD9F2F70)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_5FEF0A050089D966_OFFSET UNITYSDK_OFFSET(0xD9F0100)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_68E17A89ED92ADE0_OFFSET UNITYSDK_OFFSET(0xD9F1080)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_70822DF50FE652DA_OFFSET UNITYSDK_OFFSET(0xD9EF240)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_73DD48D58191807C_OFFSET UNITYSDK_OFFSET(0xD9F2170)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_7E28760B9A84CAE8_OFFSET UNITYSDK_OFFSET(0xD9F1F70)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_8365BD20CC2FBCA1_OFFSET UNITYSDK_OFFSET(0xD9EF110)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_8F0FAF1028B746E0_OFFSET UNITYSDK_OFFSET(0xD9F13C0)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_90F4FD0CB01F698E_OFFSET UNITYSDK_OFFSET(0xD9EFEA0)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_94D7074EF9F1BF2D_OFFSET UNITYSDK_OFFSET(0xD9F1B50)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_9DFD89E108B81FDF_OFFSET UNITYSDK_OFFSET(0xD9F2390)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_A0CC09F4682C8A01_OFFSET UNITYSDK_OFFSET(0xD9F1C30)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_A743D0D08C3E2A5A_OFFSET UNITYSDK_OFFSET(0xD9EE830)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_AB47C03EEFF683ED_OFFSET UNITYSDK_OFFSET(0xD9F3370)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_B440A8C6FB80A6B9_OFFSET UNITYSDK_OFFSET(0xD9EDCC0)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_B8EA2A5C6D882870_OFFSET UNITYSDK_OFFSET(0xD9EEDC0)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_B96234752CDF7603_OFFSET UNITYSDK_OFFSET(0xD9F0B40)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_C20000A6B9D5D55E_OFFSET UNITYSDK_OFFSET(0xD9EDFA0)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_C4FCB5828604ABF8_OFFSET UNITYSDK_OFFSET(0xD9EE130)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_C79E67500ED07B51_OFFSET UNITYSDK_OFFSET(0xD9EEB30)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_C7DCAC1DCF1A0CB6_OFFSET UNITYSDK_OFFSET(0xD9F2410)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_C9F2580A20EE9B7E_OFFSET UNITYSDK_OFFSET(0xD9EE730)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_E378C2C916C37AD8_1_OFFSET UNITYSDK_OFFSET(0xD9F2120)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_E378C2C916C37AD8_OFFSET UNITYSDK_OFFSET(0xD9F2340)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_EDF3DE0B139DA9BE_OFFSET UNITYSDK_OFFSET(0xD9F2B70)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_F5C3E19175081515_OFFSET UNITYSDK_OFFSET(0xD9F1920)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_FA1515D5C433B4C0_1_OFFSET UNITYSDK_OFFSET(0xD9F06F0)
#define CLASS_1_7ADA3164ACBF978E_METHOD_1_FA1515D5C433B4C0_OFFSET UNITYSDK_OFFSET(0xD9F02B0)
#define CLASS_1_7ADA3164ACBF978E__CCTOR_OFFSET UNITYSDK_OFFSET(0xD9F3430)

inline static constexpr unsigned int Class_1_7ADA3164ACBF978E_TypeDefinitionIndex = 50225;

class Class_1_7ADA3164ACBF978E : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7ADA3164ACBF978E_TypeDefinitionIndex)->GetStaticField(0x6B4E0);
	}
	static ::RPG::GameCore::TurnBasedAbilityConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::TurnBasedAbilityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7ADA3164ACBF978E_TypeDefinitionIndex)->GetStaticField(0x6B4E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E__CCTOR_OFFSET))();
	}

	static ::Struct_2_59F35947304F45AC Method_1_37456EBB4D4D4C3B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::System::String* a4, ::RPG::GameCore::TurnBasedModifierConfig* a5, ::RPG::GameCore::FixPoint a6)
	{
		return ((::Struct_2_59F35947304F45AC(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_37456EBB4D4D4C3B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_273028B0F7845277(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_273028B0F7845277_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C20000A6B9D5D55E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_C20000A6B9D5D55E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C4FCB5828604ABF8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3, ::Class_2_1DB6C02CA182EEBA* a4, ::Class_2_1DB6C02CA182EEBA* a5, ::Il2CppArray<::RPG::GameCore::SubModifierData*>* a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::Class_2_1DB6C02CA182EEBA*, ::Class_2_1DB6C02CA182EEBA*, ::Il2CppArray<::RPG::GameCore::SubModifierData*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_C4FCB5828604ABF8_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_A743D0D08C3E2A5A(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SubModifierData* a2, ::System::Boolean a3, ::RPG::GameCore::TurnBasedModifierConfig* a4)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::SubModifierData*, ::System::Boolean, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_A743D0D08C3E2A5A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8365BD20CC2FBCA1(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_8365BD20CC2FBCA1_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::TurnBasedModifierInstance* Method_1_70822DF50FE652DA(::Struct_2_02BD084C1EA35FFC a1)
	{
		return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::Struct_2_02BD084C1EA35FFC))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_70822DF50FE652DA_OFFSET))(a1);
	}

	static ::System::Void Method_1_90F4FD0CB01F698E(::RPG::GameCore::BaseModifierInstance* a1, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BaseModifierInstance*, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_90F4FD0CB01F698E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5FEF0A050089D966(::RPG::GameCore::BaseModifierInstance* a1, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BaseModifierInstance*, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_5FEF0A050089D966_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_FA1515D5C433B4C0(::RPG::PoolList_1<::Class_1_812813014E8C3777*>* a1, ::Class_2_7AA0468CE6C1F3D7_1* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3)
	{
		return ((::System::Int32(*)(::RPG::PoolList_1<::Class_1_812813014E8C3777*>*, ::Class_2_7AA0468CE6C1F3D7_1*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_FA1515D5C433B4C0_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_FA1515D5C433B4C0_1(::RPG::PoolList_1<::Class_1_812813014E8C3777*>* a1, ::Class_2_7AA0468CE6C1F3D7_1* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3)
	{
		return ((::System::Int32(*)(::RPG::PoolList_1<::Class_1_812813014E8C3777*>*, ::Class_2_7AA0468CE6C1F3D7_1*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_FA1515D5C433B4C0_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_B96234752CDF7603(::RPG::PoolList_1<::Class_1_812813014E8C3777*>* a1, ::Class_2_7AA0468CE6C1F3D7_1* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3)
	{
		return ((::System::Int32(*)(::RPG::PoolList_1<::Class_1_812813014E8C3777*>*, ::Class_2_7AA0468CE6C1F3D7_1*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_B96234752CDF7603_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::FixPoint Method_1_68E17A89ED92ADE0(::RPG::PoolList_1<::Class_1_812813014E8C3777*>* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::PoolList_1<::Class_1_812813014E8C3777*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_68E17A89ED92ADE0_OFFSET))(a1, a2);
	}

	static ::RPG::PoolList_1<::Class_1_812813014E8C3777*>* Method_1_8F0FAF1028B746E0(::System::String* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedModifierConfig* a3)
	{
		return ((::RPG::PoolList_1<::Class_1_812813014E8C3777*>*(*)(::System::String*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_8F0FAF1028B746E0_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_4DCF086ABDAD87EE(::System::String* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_1_812813014E8C3777* a3, ::RPG::GameCore::TurnBasedModifierConfig* a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_812813014E8C3777*, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_4DCF086ABDAD87EE_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_7AA0468CE6C1F3D7_1* Method_1_2281EBC2DE9D3ACF(::Struct_2_02BD084C1EA35FFC a1, ::System::Boolean a2)
	{
		return ((::Class_2_7AA0468CE6C1F3D7_1*(*)(::Struct_2_02BD084C1EA35FFC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_2281EBC2DE9D3ACF_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Method_1_C79E67500ED07B51(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_C79E67500ED07B51_OFFSET))(a1, a2);
	}

	static ::Class_2_7AA0468CE6C1F3D7_1* Method_1_B8EA2A5C6D882870(::RPG::GameCore::SubModifierData* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* a3, ::System::Boolean a4)
	{
		return ((::Class_2_7AA0468CE6C1F3D7_1*(*)(::RPG::GameCore::SubModifierData*, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_B8EA2A5C6D882870_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_45D1DD20F4F05B91(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_45D1DD20F4F05B91_OFFSET))(a1);
	}

	static ::RPG::GameCore::TurnBasedModifierConfig* Method_1_C9F2580A20EE9B7E(::System::String* a1, ::Class_2_1DB6C02CA182EEBA* a2)
	{
		return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::System::String*, ::Class_2_1DB6C02CA182EEBA*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_C9F2580A20EE9B7E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F5C3E19175081515(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_343*>* a1, ::System::Boolean a2, ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_343*>*, ::System::Boolean, ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_F5C3E19175081515_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_1DB6C02CA182EEBA* Method_1_94D7074EF9F1BF2D(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::Class_2_1DB6C02CA182EEBA*(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_94D7074EF9F1BF2D_OFFSET))(a1);
	}

	static ::Struct_2_FF88F3A376A07684 Method_1_A0CC09F4682C8A01(::RPG::GameCore::EntityManager* a1, ::Class_1_A2D8E5AB4B623162* a2)
	{
		return ((::Struct_2_FF88F3A376A07684(*)(::RPG::GameCore::EntityManager*, ::Class_1_A2D8E5AB4B623162*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_A0CC09F4682C8A01_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_218EA524F9D827BE(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_218EA524F9D827BE_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_B440A8C6FB80A6B9(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::EnumStatusType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_B440A8C6FB80A6B9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_73DD48D58191807C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_73DD48D58191807C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_052DC76F62B88326(::Class_0_16E4307DCC419505_470* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_470*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_052DC76F62B88326_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_21A72E7EEEAA708C(::Class_0_16E4307DCC419505_470* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_470*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_21A72E7EEEAA708C_OFFSET))(a1);
	}

	static ::RPG::GameCore::ModifierBehaviorFlag Method_1_4F2FE4DBB043D1D0(::Class_0_16E4307DCC419505_470* a1)
	{
		return ((::RPG::GameCore::ModifierBehaviorFlag(*)(::Class_0_16E4307DCC419505_470*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_4F2FE4DBB043D1D0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E378C2C916C37AD8(::RPG::GameCore::ModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_E378C2C916C37AD8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E378C2C916C37AD8_1(::RPG::GameCore::ModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_E378C2C916C37AD8_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9DFD89E108B81FDF(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_9DFD89E108B81FDF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7E28760B9A84CAE8(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_7E28760B9A84CAE8_OFFSET))(a1);
	}

	static ::System::Void Method_1_C7DCAC1DCF1A0CB6(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_C7DCAC1DCF1A0CB6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_24FA83C23CECB055(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierConfig* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_24FA83C23CECB055_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0B415C587E53E248(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_0B415C587E53E248_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EDF3DE0B139DA9BE(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_EDF3DE0B139DA9BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B2D85749B8490DE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_5B2D85749B8490DE_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::System::Int32> Method_1_AB47C03EEFF683ED(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7ADA3164ACBF978E_METHOD_1_AB47C03EEFF683ED_OFFSET))(a1, a2);
	}
};
