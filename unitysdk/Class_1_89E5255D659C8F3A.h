#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/Struct_2_59F35947304F45AC.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/System/Object.h"

class Class_2_24193089A4D2255F;
class Class_2_F3B643C4D5BD11F2;
class Class_3_024B137FE9F1BACE;
class Class_3_881497162334D4FF;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAbilityConfig; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_89E5255D659C8F3A_METHOD_1_11F0946664EBB1FB_OFFSET UNITYSDK_OFFSET(0x9590700)
#define CLASS_1_89E5255D659C8F3A_METHOD_1_424A225E1D8CA90F_OFFSET UNITYSDK_OFFSET(0x9590FE0)
#define CLASS_1_89E5255D659C8F3A_METHOD_1_4551AF0606E97C21_OFFSET UNITYSDK_OFFSET(0x95905C0)
#define CLASS_1_89E5255D659C8F3A_METHOD_1_5163A2A0808CBD8B_OFFSET UNITYSDK_OFFSET(0x9590300)
#define CLASS_1_89E5255D659C8F3A_METHOD_1_74AFC327D126EA40_OFFSET UNITYSDK_OFFSET(0x95913A0)
#define CLASS_1_89E5255D659C8F3A_METHOD_1_7DD6F8F892CCCCE4_OFFSET UNITYSDK_OFFSET(0x95914F0)
#define CLASS_1_89E5255D659C8F3A_METHOD_1_C1066C5AE4D06921_OFFSET UNITYSDK_OFFSET(0x95916F0)
#define CLASS_1_89E5255D659C8F3A_METHOD_1_C20000A6B9D5D55E_OFFSET UNITYSDK_OFFSET(0x9590430)
#define CLASS_1_89E5255D659C8F3A__CCTOR_OFFSET UNITYSDK_OFFSET(0x9591930)

inline static constexpr unsigned int Class_1_89E5255D659C8F3A_TypeDefinitionIndex = 49869;

class Class_1_89E5255D659C8F3A : public ::System::Object
{
public:
	static ::RPG::GameCore::RtAbilityConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::RtAbilityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89E5255D659C8F3A_TypeDefinitionIndex)->GetStaticField(0x23530);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89E5255D659C8F3A__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::RtModifierConfig* Method_1_5163A2A0808CBD8B(::System::String* a1, ::Class_2_F3B643C4D5BD11F2* a2)
	{
		return ((::RPG::GameCore::RtModifierConfig*(*)(::System::String*, ::Class_2_F3B643C4D5BD11F2*))((::PBYTE)hIl2Cpp + CLASS_1_89E5255D659C8F3A_METHOD_1_5163A2A0808CBD8B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C20000A6B9D5D55E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_89E5255D659C8F3A_METHOD_1_C20000A6B9D5D55E_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_F3B643C4D5BD11F2* Method_1_4551AF0606E97C21(::Class_3_024B137FE9F1BACE* a1)
	{
		return ((::Class_2_F3B643C4D5BD11F2*(*)(::Class_3_024B137FE9F1BACE*))((::PBYTE)hIl2Cpp + CLASS_1_89E5255D659C8F3A_METHOD_1_4551AF0606E97C21_OFFSET))(a1);
	}

	static ::Struct_2_59F35947304F45AC Method_1_11F0946664EBB1FB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::System::String* a4, ::RPG::GameCore::RtModifierConfig* a5, ::RPG::GameCore::FixPoint a6)
	{
		return ((::Struct_2_59F35947304F45AC(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::System::String*, ::RPG::GameCore::RtModifierConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_89E5255D659C8F3A_METHOD_1_11F0946664EBB1FB_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::RPG::PoolList_1<::RPG::GameCore::RtBehaviorFlag>* Method_1_7DD6F8F892CCCCE4(::Class_3_024B137FE9F1BACE* a1)
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::RtBehaviorFlag>*(*)(::Class_3_024B137FE9F1BACE*))((::PBYTE)hIl2Cpp + CLASS_1_89E5255D659C8F3A_METHOD_1_7DD6F8F892CCCCE4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_74AFC327D126EA40(::Class_3_881497162334D4FF* a1, ::RPG::GameCore::EnumStatusType a2)
	{
		return ((::System::Boolean(*)(::Class_3_881497162334D4FF*, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + CLASS_1_89E5255D659C8F3A_METHOD_1_74AFC327D126EA40_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_424A225E1D8CA90F(::Class_3_881497162334D4FF* a1, ::RPG::GameCore::GameEntity* a2, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a3)
	{
		return ((::System::Boolean(*)(::Class_3_881497162334D4FF*, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_1_89E5255D659C8F3A_METHOD_1_424A225E1D8CA90F_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_24193089A4D2255F* Method_1_C1066C5AE4D06921(::Class_3_024B137FE9F1BACE* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* a3)
	{
		return ((::Class_2_24193089A4D2255F*(*)(::Class_3_024B137FE9F1BACE*, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*))((::PBYTE)hIl2Cpp + CLASS_1_89E5255D659C8F3A_METHOD_1_C1066C5AE4D06921_OFFSET))(a1, a2, a3);
	}
};
