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
class Class_3_6974676991F6AE7F;
class Class_3_795ECCED069014FF;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAbilityConfig; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_79C4E496FAECF1AA_METHOD_1_0F4A3B4BCD10FA7D_OFFSET UNITYSDK_OFFSET(0x10C6CB10)
#define CLASS_1_79C4E496FAECF1AA_METHOD_1_12CB0F962449D672_OFFSET UNITYSDK_OFFSET(0x10C6CC60)
#define CLASS_1_79C4E496FAECF1AA_METHOD_1_424A225E1D8CA90F_OFFSET UNITYSDK_OFFSET(0x10C6D5D0)
#define CLASS_1_79C4E496FAECF1AA_METHOD_1_52479945B648DDD7_OFFSET UNITYSDK_OFFSET(0x10C6C7E0)
#define CLASS_1_79C4E496FAECF1AA_METHOD_1_6707D5DF301176FD_OFFSET UNITYSDK_OFFSET(0x10C6DC10)
#define CLASS_1_79C4E496FAECF1AA_METHOD_1_74AFC327D126EA40_OFFSET UNITYSDK_OFFSET(0x10C6D930)
#define CLASS_1_79C4E496FAECF1AA_METHOD_1_85B4FDF4CD622E3C_OFFSET UNITYSDK_OFFSET(0x10C6DA70)
#define CLASS_1_79C4E496FAECF1AA_METHOD_1_977A60B39D0814F5_OFFSET UNITYSDK_OFFSET(0x10C6C990)
#define CLASS_1_79C4E496FAECF1AA__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C6DE30)

inline static constexpr unsigned int Class_1_79C4E496FAECF1AA_TypeDefinitionIndex = 50536;

class Class_1_79C4E496FAECF1AA : public ::System::Object
{
public:
	static ::RPG::GameCore::RtAbilityConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::RtAbilityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79C4E496FAECF1AA_TypeDefinitionIndex)->GetStaticField(0x127D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_79C4E496FAECF1AA__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::RtModifierConfig* Method_1_52479945B648DDD7(::System::String* a1, ::Class_2_F3B643C4D5BD11F2* a2)
	{
		return ((::RPG::GameCore::RtModifierConfig*(*)(::System::String*, ::Class_2_F3B643C4D5BD11F2*))((::PBYTE)hIl2Cpp + CLASS_1_79C4E496FAECF1AA_METHOD_1_52479945B648DDD7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_977A60B39D0814F5(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_79C4E496FAECF1AA_METHOD_1_977A60B39D0814F5_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_F3B643C4D5BD11F2* Method_1_0F4A3B4BCD10FA7D(::Class_3_795ECCED069014FF* a1)
	{
		return ((::Class_2_F3B643C4D5BD11F2*(*)(::Class_3_795ECCED069014FF*))((::PBYTE)hIl2Cpp + CLASS_1_79C4E496FAECF1AA_METHOD_1_0F4A3B4BCD10FA7D_OFFSET))(a1);
	}

	static ::Struct_2_59F35947304F45AC Method_1_12CB0F962449D672(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::System::String* a4, ::RPG::GameCore::RtModifierConfig* a5, ::RPG::GameCore::FixPoint a6)
	{
		return ((::Struct_2_59F35947304F45AC(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::System::String*, ::RPG::GameCore::RtModifierConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_79C4E496FAECF1AA_METHOD_1_12CB0F962449D672_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::RPG::PoolList_1<::RPG::GameCore::RtBehaviorFlag>* Method_1_85B4FDF4CD622E3C(::Class_3_795ECCED069014FF* a1)
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::RtBehaviorFlag>*(*)(::Class_3_795ECCED069014FF*))((::PBYTE)hIl2Cpp + CLASS_1_79C4E496FAECF1AA_METHOD_1_85B4FDF4CD622E3C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_74AFC327D126EA40(::Class_3_6974676991F6AE7F* a1, ::RPG::GameCore::EnumStatusType a2)
	{
		return ((::System::Boolean(*)(::Class_3_6974676991F6AE7F*, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + CLASS_1_79C4E496FAECF1AA_METHOD_1_74AFC327D126EA40_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_424A225E1D8CA90F(::Class_3_6974676991F6AE7F* a1, ::RPG::GameCore::GameEntity* a2, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a3)
	{
		return ((::System::Boolean(*)(::Class_3_6974676991F6AE7F*, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_1_79C4E496FAECF1AA_METHOD_1_424A225E1D8CA90F_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_24193089A4D2255F* Method_1_6707D5DF301176FD(::Class_3_795ECCED069014FF* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* a3)
	{
		return ((::Class_2_24193089A4D2255F*(*)(::Class_3_795ECCED069014FF*, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*))((::PBYTE)hIl2Cpp + CLASS_1_79C4E496FAECF1AA_METHOD_1_6707D5DF301176FD_OFFSET))(a1, a2, a3);
	}
};
