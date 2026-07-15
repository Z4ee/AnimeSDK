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

class Class_0_16E4307DCC419505_380;
class Class_0_16E4307DCC419505_513;
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

#define CLASS_1_47D19139AA44BF42_METHOD_1_052DC76F62B88326_OFFSET UNITYSDK_OFFSET(0x16F7BEB0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_08F9FA519AD6E154_OFFSET UNITYSDK_OFFSET(0x16F787C0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_0B415C587E53E248_OFFSET UNITYSDK_OFFSET(0x16F7C770)
#define CLASS_1_47D19139AA44BF42_METHOD_1_0CD7C02A03C2CB4B_OFFSET UNITYSDK_OFFSET(0x16F77980)
#define CLASS_1_47D19139AA44BF42_METHOD_1_0EB9855F782E8B95_OFFSET UNITYSDK_OFFSET(0x16F7A400)
#define CLASS_1_47D19139AA44BF42_METHOD_1_14073DA1D5FF940A_OFFSET UNITYSDK_OFFSET(0x16F7AB30)
#define CLASS_1_47D19139AA44BF42_METHOD_1_21A72E7EEEAA708C_OFFSET UNITYSDK_OFFSET(0x16F7BF40)
#define CLASS_1_47D19139AA44BF42_METHOD_1_2281EBC2DE9D3ACF_OFFSET UNITYSDK_OFFSET(0x16F79CA0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_24FA83C23CECB055_OFFSET UNITYSDK_OFFSET(0x16F7C4B0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_273028B0F7845277_OFFSET UNITYSDK_OFFSET(0x16F77E20)
#define CLASS_1_47D19139AA44BF42_METHOD_1_4BFF852F54E308B2_OFFSET UNITYSDK_OFFSET(0x16F7B4A0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_4DCF086ABDAD87EE_OFFSET UNITYSDK_OFFSET(0x16F7B2C0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_4F2FE4DBB043D1D0_OFFSET UNITYSDK_OFFSET(0x16F7BD00)
#define CLASS_1_47D19139AA44BF42_METHOD_1_4F6BC553FBB651A3_OFFSET UNITYSDK_OFFSET(0x16F78940)
#define CLASS_1_47D19139AA44BF42_METHOD_1_5A26A5915142E19A_OFFSET UNITYSDK_OFFSET(0x16F77D00)
#define CLASS_1_47D19139AA44BF42_METHOD_1_63E15215ACF74C4B_OFFSET UNITYSDK_OFFSET(0x16F7AE20)
#define CLASS_1_47D19139AA44BF42_METHOD_1_6A82C28070852ABC_OFFSET UNITYSDK_OFFSET(0x16F791B0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_73DD48D58191807C_OFFSET UNITYSDK_OFFSET(0x16F7BE40)
#define CLASS_1_47D19139AA44BF42_METHOD_1_7A8262CCFF2DC830_OFFSET UNITYSDK_OFFSET(0x16F7BC40)
#define CLASS_1_47D19139AA44BF42_METHOD_1_80B80BDA3D851C52_1_OFFSET UNITYSDK_OFFSET(0x16F7A880)
#define CLASS_1_47D19139AA44BF42_METHOD_1_80B80BDA3D851C52_OFFSET UNITYSDK_OFFSET(0x16F7A5D0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_8EEB62BC1A870680_OFFSET UNITYSDK_OFFSET(0x16F7A130)
#define CLASS_1_47D19139AA44BF42_METHOD_1_90DB115EF15092B2_OFFSET UNITYSDK_OFFSET(0x16F78C50)
#define CLASS_1_47D19139AA44BF42_METHOD_1_93A4200C68599550_OFFSET UNITYSDK_OFFSET(0x16F7B5C0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_94D7074EF9F1BF2D_OFFSET UNITYSDK_OFFSET(0x16F7B820)
#define CLASS_1_47D19139AA44BF42_METHOD_1_977A60B39D0814F5_OFFSET UNITYSDK_OFFSET(0x16F77F60)
#define CLASS_1_47D19139AA44BF42_METHOD_1_A0CC09F4682C8A01_OFFSET UNITYSDK_OFFSET(0x16F7B900)
#define CLASS_1_47D19139AA44BF42_METHOD_1_A1639E55C181FF3F_OFFSET UNITYSDK_OFFSET(0x16F7CD20)
#define CLASS_1_47D19139AA44BF42_METHOD_1_A977BF99CA321764_OFFSET UNITYSDK_OFFSET(0x16F7D200)
#define CLASS_1_47D19139AA44BF42_METHOD_1_C19123481629108C_OFFSET UNITYSDK_OFFSET(0x16F77060)
#define CLASS_1_47D19139AA44BF42_METHOD_1_C7DCAC1DCF1A0CB6_OFFSET UNITYSDK_OFFSET(0x16F7C0E0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_CFC26D12F77E15D5_OFFSET UNITYSDK_OFFSET(0x16F7C060)
#define CLASS_1_47D19139AA44BF42_METHOD_1_DD3D0D2472E8DB9D_OFFSET UNITYSDK_OFFSET(0x16F78F10)
#define CLASS_1_47D19139AA44BF42_METHOD_1_E1CDAFF472D8D3C6_OFFSET UNITYSDK_OFFSET(0x16F79330)
#define CLASS_1_47D19139AA44BF42_METHOD_1_E378C2C916C37AD8_1_OFFSET UNITYSDK_OFFSET(0x16F7BDF0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_E378C2C916C37AD8_OFFSET UNITYSDK_OFFSET(0x16F7C010)
#define CLASS_1_47D19139AA44BF42_METHOD_1_EDF3DE0B139DA9BE_OFFSET UNITYSDK_OFFSET(0x16F7C920)
#define CLASS_1_47D19139AA44BF42_METHOD_1_F26F570DF84325A1_OFFSET UNITYSDK_OFFSET(0x16F780E0)
#define CLASS_1_47D19139AA44BF42_METHOD_1_F33861C175975EC1_OFFSET UNITYSDK_OFFSET(0x16F7B080)
#define CLASS_1_47D19139AA44BF42__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F7D2D0)

inline static constexpr unsigned int Class_1_47D19139AA44BF42_TypeDefinitionIndex = 51976;

class Class_1_47D19139AA44BF42 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_47D19139AA44BF42_TypeDefinitionIndex)->GetStaticField(0x67B20);
	}
	static ::RPG::GameCore::TurnBasedAbilityConfig** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::TurnBasedAbilityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_47D19139AA44BF42_TypeDefinitionIndex)->GetStaticField(0x67B28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42__CCTOR_OFFSET))();
	}

	static ::Struct_2_59F35947304F45AC Method_1_C19123481629108C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::System::String* a4, ::RPG::GameCore::TurnBasedModifierConfig* a5, ::RPG::GameCore::FixPoint a6)
	{
		return ((::Struct_2_59F35947304F45AC(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_C19123481629108C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_273028B0F7845277(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_273028B0F7845277_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_977A60B39D0814F5(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_977A60B39D0814F5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F26F570DF84325A1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3, ::Class_2_1DB6C02CA182EEBA* a4, ::Class_2_1DB6C02CA182EEBA* a5, ::Il2CppArray<::RPG::GameCore::SubModifierData*>* a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::Class_2_1DB6C02CA182EEBA*, ::Class_2_1DB6C02CA182EEBA*, ::Il2CppArray<::RPG::GameCore::SubModifierData*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_F26F570DF84325A1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_4F6BC553FBB651A3(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SubModifierData* a2, ::System::Boolean a3, ::RPG::GameCore::TurnBasedModifierConfig* a4)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::SubModifierData*, ::System::Boolean, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_4F6BC553FBB651A3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_6A82C28070852ABC(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_6A82C28070852ABC_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::TurnBasedModifierInstance* Method_1_E1CDAFF472D8D3C6(::Struct_2_02BD084C1EA35FFC a1)
	{
		return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::Struct_2_02BD084C1EA35FFC))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_E1CDAFF472D8D3C6_OFFSET))(a1);
	}

	static ::System::Void Method_1_8EEB62BC1A870680(::RPG::GameCore::BaseModifierInstance* a1, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BaseModifierInstance*, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_8EEB62BC1A870680_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0EB9855F782E8B95(::RPG::GameCore::BaseModifierInstance* a1, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BaseModifierInstance*, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_0EB9855F782E8B95_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_80B80BDA3D851C52(::RPG::PoolList_1<::Class_1_812813014E8C3777*>* a1, ::Class_2_7AA0468CE6C1F3D7_1* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3)
	{
		return ((::System::Int32(*)(::RPG::PoolList_1<::Class_1_812813014E8C3777*>*, ::Class_2_7AA0468CE6C1F3D7_1*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_80B80BDA3D851C52_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_80B80BDA3D851C52_1(::RPG::PoolList_1<::Class_1_812813014E8C3777*>* a1, ::Class_2_7AA0468CE6C1F3D7_1* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3)
	{
		return ((::System::Int32(*)(::RPG::PoolList_1<::Class_1_812813014E8C3777*>*, ::Class_2_7AA0468CE6C1F3D7_1*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_80B80BDA3D851C52_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_14073DA1D5FF940A(::RPG::PoolList_1<::Class_1_812813014E8C3777*>* a1, ::Class_2_7AA0468CE6C1F3D7_1* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3)
	{
		return ((::System::Int32(*)(::RPG::PoolList_1<::Class_1_812813014E8C3777*>*, ::Class_2_7AA0468CE6C1F3D7_1*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_14073DA1D5FF940A_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::FixPoint Method_1_63E15215ACF74C4B(::RPG::PoolList_1<::Class_1_812813014E8C3777*>* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::PoolList_1<::Class_1_812813014E8C3777*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_63E15215ACF74C4B_OFFSET))(a1, a2);
	}

	static ::RPG::PoolList_1<::Class_1_812813014E8C3777*>* Method_1_F33861C175975EC1(::System::String* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedModifierConfig* a3)
	{
		return ((::RPG::PoolList_1<::Class_1_812813014E8C3777*>*(*)(::System::String*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_F33861C175975EC1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_4DCF086ABDAD87EE(::System::String* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::Class_1_812813014E8C3777* a3, ::RPG::GameCore::TurnBasedModifierConfig* a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_812813014E8C3777*, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_4DCF086ABDAD87EE_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_7AA0468CE6C1F3D7_1* Method_1_2281EBC2DE9D3ACF(::Struct_2_02BD084C1EA35FFC a1, ::System::Boolean a2)
	{
		return ((::Class_2_7AA0468CE6C1F3D7_1*(*)(::Struct_2_02BD084C1EA35FFC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_2281EBC2DE9D3ACF_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Method_1_90DB115EF15092B2(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_90DB115EF15092B2_OFFSET))(a1, a2);
	}

	static ::Class_2_7AA0468CE6C1F3D7_1* Method_1_DD3D0D2472E8DB9D(::RPG::GameCore::SubModifierData* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* a3, ::System::Boolean a4)
	{
		return ((::Class_2_7AA0468CE6C1F3D7_1*(*)(::RPG::GameCore::SubModifierData*, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_DD3D0D2472E8DB9D_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_4BFF852F54E308B2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_4BFF852F54E308B2_OFFSET))(a1);
	}

	static ::RPG::GameCore::TurnBasedModifierConfig* Method_1_08F9FA519AD6E154(::System::String* a1, ::Class_2_1DB6C02CA182EEBA* a2)
	{
		return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::System::String*, ::Class_2_1DB6C02CA182EEBA*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_08F9FA519AD6E154_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_93A4200C68599550(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_380*>* a1, ::System::Boolean a2, ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_380*>*, ::System::Boolean, ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_93A4200C68599550_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_1DB6C02CA182EEBA* Method_1_94D7074EF9F1BF2D(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::Class_2_1DB6C02CA182EEBA*(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_94D7074EF9F1BF2D_OFFSET))(a1);
	}

	static ::Struct_2_FF88F3A376A07684 Method_1_A0CC09F4682C8A01(::RPG::GameCore::EntityManager* a1, ::Class_1_A2D8E5AB4B623162* a2)
	{
		return ((::Struct_2_FF88F3A376A07684(*)(::RPG::GameCore::EntityManager*, ::Class_1_A2D8E5AB4B623162*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_A0CC09F4682C8A01_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0CD7C02A03C2CB4B(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_0CD7C02A03C2CB4B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_5A26A5915142E19A(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::EnumStatusType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_5A26A5915142E19A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_73DD48D58191807C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_73DD48D58191807C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_052DC76F62B88326(::Class_0_16E4307DCC419505_513* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_513*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_052DC76F62B88326_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_21A72E7EEEAA708C(::Class_0_16E4307DCC419505_513* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_513*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_21A72E7EEEAA708C_OFFSET))(a1);
	}

	static ::RPG::GameCore::ModifierBehaviorFlag Method_1_4F2FE4DBB043D1D0(::Class_0_16E4307DCC419505_513* a1)
	{
		return ((::RPG::GameCore::ModifierBehaviorFlag(*)(::Class_0_16E4307DCC419505_513*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_4F2FE4DBB043D1D0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E378C2C916C37AD8(::RPG::GameCore::ModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_E378C2C916C37AD8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E378C2C916C37AD8_1(::RPG::GameCore::ModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_E378C2C916C37AD8_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CFC26D12F77E15D5(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_CFC26D12F77E15D5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7A8262CCFF2DC830(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_7A8262CCFF2DC830_OFFSET))(a1);
	}

	static ::System::Void Method_1_C7DCAC1DCF1A0CB6(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_C7DCAC1DCF1A0CB6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_24FA83C23CECB055(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierConfig* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_24FA83C23CECB055_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0B415C587E53E248(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_0B415C587E53E248_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EDF3DE0B139DA9BE(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_EDF3DE0B139DA9BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A1639E55C181FF3F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_A1639E55C181FF3F_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::System::Int32> Method_1_A977BF99CA321764(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42_METHOD_1_A977BF99CA321764_OFFSET))(a1, a2);
	}
};
