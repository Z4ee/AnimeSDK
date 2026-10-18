#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/System/Object.h"

class Class_1_07B74073C7F8D5A1;
class Class_1_2FEB0D469BFEA77C;
class Class_1_4A42FCB6B3DCAEBA;
class Class_1_9788BF934C00DE98;
class Class_1_9E3925703742C6E4_1;
class Class_1_A7D9701F5F4CE19E;
class Class_1_B1429A4347DAE014_1;
class Class_1_D9D0E65EB43D53F9;
namespace RPG::GameCore { class GlobalMarbleAIConfig; }
namespace RPG::GameCore { class GlobalMarbleBuffConfig; }
namespace RPG::GameCore { class GlobalMarbleSkillConfig; }
namespace RPG::GameCore { class GlobalPetMarbleBuffConfig; }
namespace RPG::GameCore { class GlobalPetMarbleSkillConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class MarbleBuffConditionRow; }
namespace RPG::GameCore { class MarbleGameConfig; }
namespace RPG::GameCore { class MarbleMatchLevelConfigRow; }
namespace RPG::GameCore { class MarbleMatchTitleRow; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace RPG::GameCore { class MarbleRandomBuffRow; }
namespace RPG::GameCore { class MarbleSealLevelConfigRow; }
namespace RPG::GameCore { class MarbleSealRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B7B821F9DDAD5843_GET_COOPBOSSTURNLIMIT_OFFSET UNITYSDK_OFFSET(0x1C903630)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_17BEBA898C1A3B09_OFFSET UNITYSDK_OFFSET(0x1C903CB0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_199168491584A33F_OFFSET UNITYSDK_OFFSET(0x1C903720)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_3A461A4AD83A0F7A_1_OFFSET UNITYSDK_OFFSET(0x1C903990)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_3A461A4AD83A0F7A_2_OFFSET UNITYSDK_OFFSET(0x1C903A00)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_3A461A4AD83A0F7A_3_OFFSET UNITYSDK_OFFSET(0x1C904F20)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_3A461A4AD83A0F7A_4_OFFSET UNITYSDK_OFFSET(0x1C904F90)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_3A461A4AD83A0F7A_OFFSET UNITYSDK_OFFSET(0x1C903920)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_57E22D6A7003BF96_OFFSET UNITYSDK_OFFSET(0x1C9035A0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_659085B60C5BBBE5_OFFSET UNITYSDK_OFFSET(0x1C903840)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_6D85D2FC89ACF6D5_1_OFFSET UNITYSDK_OFFSET(0x1C904EB0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_6D85D2FC89ACF6D5_OFFSET UNITYSDK_OFFSET(0x1C904AC0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_70270E425F4EA04F_OFFSET UNITYSDK_OFFSET(0x1C904450)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_7AC8BD5C35C24E40_OFFSET UNITYSDK_OFFSET(0x1C903A70)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_7C7FC229E8E77326_OFFSET UNITYSDK_OFFSET(0x1C903E90)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_7EFDC36F01981F37_OFFSET UNITYSDK_OFFSET(0x1C904A20)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_97EBE81F1FDB8257_OFFSET UNITYSDK_OFFSET(0x1C903640)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_9B4F059FA9266A7D_OFFSET UNITYSDK_OFFSET(0x1C9034B0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_9DE4DA16AFD48520_1_OFFSET UNITYSDK_OFFSET(0x1C904C80)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_9DE4DA16AFD48520_OFFSET UNITYSDK_OFFSET(0x1C9047A0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_C03B4E8970BB96E3_OFFSET UNITYSDK_OFFSET(0x1C9046B0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_C04BD78C1B764E94_OFFSET UNITYSDK_OFFSET(0x1C9051B0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_C343F48A7EFF58B4_1_OFFSET UNITYSDK_OFFSET(0x1C905000)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_C343F48A7EFF58B4_2_OFFSET UNITYSDK_OFFSET(0x1C905090)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_C343F48A7EFF58B4_OFFSET UNITYSDK_OFFSET(0x1C9037B0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_C3BD809808A74DF0_OFFSET UNITYSDK_OFFSET(0x1C905120)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_C5DBA9F26AA74E51_OFFSET UNITYSDK_OFFSET(0x1C9044D0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C9035F0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_D3746F353C145DB9_1_OFFSET UNITYSDK_OFFSET(0x1C904990)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_D3746F353C145DB9_OFFSET UNITYSDK_OFFSET(0x1C904620)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_DE93D76325285526_OFFSET UNITYSDK_OFFSET(0x1C904100)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_E8B9C43BD87E9A84_OFFSET UNITYSDK_OFFSET(0x1C905220)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_E99B5347029721B8_OFFSET UNITYSDK_OFFSET(0x1C9036B0)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_EF16A0C31A265E6D_OFFSET UNITYSDK_OFFSET(0x1C904B30)
#define CLASS_1_B7B821F9DDAD5843_METHOD_1_EF48269F439C0951_OFFSET UNITYSDK_OFFSET(0x1C9038B0)
#define CLASS_1_B7B821F9DDAD5843__CTOR_OFFSET UNITYSDK_OFFSET(0x1C903240)

inline static constexpr unsigned int Class_1_B7B821F9DDAD5843_TypeDefinitionIndex = 43039;

class Class_1_B7B821F9DDAD5843 : public ::System::Object
{
public:
	// static const ::System::String* POKLHGLCDHC; // 0x0
	::RPG::GameCore::MarbleGameConfig* DPHDFKHIMEC; // 0x10
	::RPG::GameCore::GlobalMarbleBuffConfig* MBOKKHFKBAJ; // 0x18
	::RPG::GameCore::GlobalPetMarbleBuffConfig* GEJIIJCLDAD; // 0x20
	::RPG::GameCore::GlobalMarbleAIConfig* EGJAHHPMEGL; // 0x28
	::RPG::GameCore::GlobalMarbleSkillConfig* APOJICIKJPF; // 0x30
	::RPG::GameCore::GlobalPetMarbleSkillConfig* FCGFENPKNMM; // 0x38
	::System::UInt32 _CoopBossTurnLimit_k__BackingField; // 0x40
	::System::UInt32 ABNPHONMCEP; // 0x44

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843__CTOR_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_9B4F059FA9266A7D()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_9B4F059FA9266A7D_OFFSET))();
	}

	static ::System::UInt32 Method_1_57E22D6A7003BF96(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_57E22D6A7003BF96_OFFSET))(a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::UInt32 get_CoopBossTurnLimit()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_GET_COOPBOSSTURNLIMIT_OFFSET))(this);
	}

	::RPG::GameCore::MarbleSealRow* Method_1_97EBE81F1FDB8257(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleSealRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_97EBE81F1FDB8257_OFFSET))(this, a1);
	}

	::RPG::GameCore::MarbleSealLevelConfigRow* Method_1_E99B5347029721B8(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MarbleSealLevelConfigRow*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_E99B5347029721B8_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*> Method_1_199168491584A33F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_199168491584A33F_OFFSET))(this);
	}

	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_A7D9701F5F4CE19E*> Method_1_C343F48A7EFF58B4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_A7D9701F5F4CE19E*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_C343F48A7EFF58B4_OFFSET))(this);
	}

	::RPG::GameCore::MarblePVPRankConfigRow* Method_1_659085B60C5BBBE5(::RPG::GameCore::MultiPlayerGameMode a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MarblePVPRankConfigRow*(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_659085B60C5BBBE5_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::MarbleMatchLevelConfigRow* Method_1_EF48269F439C0951(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleMatchLevelConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_EF48269F439C0951_OFFSET))(this, a1);
	}

	::Class_1_B1429A4347DAE014_1* Method_1_3A461A4AD83A0F7A(::System::UInt32 a1)
	{
		return ((::Class_1_B1429A4347DAE014_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_3A461A4AD83A0F7A_OFFSET))(this, a1);
	}

	::Class_1_2FEB0D469BFEA77C* Method_1_3A461A4AD83A0F7A_1(::System::UInt32 a1)
	{
		return ((::Class_1_2FEB0D469BFEA77C*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_3A461A4AD83A0F7A_1_OFFSET))(this, a1);
	}

	::Class_1_9788BF934C00DE98* Method_1_3A461A4AD83A0F7A_2(::System::UInt32 a1)
	{
		return ((::Class_1_9788BF934C00DE98*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_3A461A4AD83A0F7A_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_7AC8BD5C35C24E40()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_7AC8BD5C35C24E40_OFFSET))(this);
	}

	::System::UInt32 Method_1_17BEBA898C1A3B09(::RPG::GameCore::PetMarbleLevelMode a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_17BEBA898C1A3B09_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_7C7FC229E8E77326(::RPG::GameCore::PetMarbleLevelMode a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_7C7FC229E8E77326_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_70270E425F4EA04F(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_70270E425F4EA04F_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_1_C5DBA9F26AA74E51(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_C5DBA9F26AA74E51_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_C03B4E8970BB96E3(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_C03B4E8970BB96E3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DE93D76325285526(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_DE93D76325285526_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_1_D3746F353C145DB9(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_D3746F353C145DB9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_9DE4DA16AFD48520()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_9DE4DA16AFD48520_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_D3746F353C145DB9_1(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_D3746F353C145DB9_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_7EFDC36F01981F37(::RPG::GameCore::PetMarbleLevelMode a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_7EFDC36F01981F37_OFFSET))(this, a1);
	}

	::Class_1_07B74073C7F8D5A1* Method_1_6D85D2FC89ACF6D5(::System::UInt32 a1)
	{
		return ((::Class_1_07B74073C7F8D5A1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_6D85D2FC89ACF6D5_OFFSET))(this, a1);
	}

	::Class_1_07B74073C7F8D5A1* Method_1_EF16A0C31A265E6D(::System::UInt32 a1)
	{
		return ((::Class_1_07B74073C7F8D5A1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_EF16A0C31A265E6D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_9DE4DA16AFD48520_1()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_9DE4DA16AFD48520_1_OFFSET))(this);
	}

	::Class_1_4A42FCB6B3DCAEBA* Method_1_6D85D2FC89ACF6D5_1(::System::UInt32 a1)
	{
		return ((::Class_1_4A42FCB6B3DCAEBA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_6D85D2FC89ACF6D5_1_OFFSET))(this, a1);
	}

	::Class_1_D9D0E65EB43D53F9* Method_1_3A461A4AD83A0F7A_3(::System::UInt32 a1)
	{
		return ((::Class_1_D9D0E65EB43D53F9*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_3A461A4AD83A0F7A_3_OFFSET))(this, a1);
	}

	::Class_1_9E3925703742C6E4_1* Method_1_3A461A4AD83A0F7A_4(::System::UInt32 a1)
	{
		return ((::Class_1_9E3925703742C6E4_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_3A461A4AD83A0F7A_4_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_D9D0E65EB43D53F9*> Method_1_C343F48A7EFF58B4_1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_D9D0E65EB43D53F9*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_C343F48A7EFF58B4_1_OFFSET))(this);
	}

	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_9E3925703742C6E4_1*> Method_1_C343F48A7EFF58B4_2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_9E3925703742C6E4_1*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_C343F48A7EFF58B4_2_OFFSET))(this);
	}

	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRandomBuffRow*> Method_1_C3BD809808A74DF0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRandomBuffRow*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_C3BD809808A74DF0_OFFSET))(this);
	}

	::RPG::GameCore::MarbleBuffConditionRow* Method_1_C04BD78C1B764E94(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleBuffConditionRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_C04BD78C1B764E94_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameLevelConfig* Method_1_E8B9C43BD87E9A84(::System::String* a1)
	{
		return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B7B821F9DDAD5843_METHOD_1_E8B9C43BD87E9A84_OFFSET))(this, a1);
	}
};
