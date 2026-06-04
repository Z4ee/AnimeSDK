#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtBehaviorFlagStateAction; }
namespace RPG::GameCore { class RtDamageConstConfig; }
namespace RPG::GameCore { class RtDefenceStageRow; }
namespace RPG::GameCore { class RtDefenceUnitRow; }
namespace RPG::GameCore { class RtDefenceValueIncreasement; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTDEFENCECONST_METHOD_2_1A5DE62F43868946_OFFSET UNITYSDK_OFFSET(0x19BE7EE0)
#define RPG_GAMECORE_RTDEFENCECONST_METHOD_2_45583901427D1ACC_OFFSET UNITYSDK_OFFSET(0x19BE76A0)
#define RPG_GAMECORE_RTDEFENCECONST_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x19BE7C00)
#define RPG_GAMECORE_RTDEFENCECONST_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19BE7C80)
#define RPG_GAMECORE_RTDEFENCECONST_METHOD_2_A694B6A26398247A_OFFSET UNITYSDK_OFFSET(0x19BE80B0)
#define RPG_GAMECORE_RTDEFENCECONST_METHOD_2_A6A79CD8936F654D_OFFSET UNITYSDK_OFFSET(0x19BE7D10)
#define RPG_GAMECORE_RTDEFENCECONST_METHOD_2_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x19BE7D90)
#define RPG_GAMECORE_RTDEFENCECONST_METHOD_2_B74F0266CBEA732F_1_OFFSET UNITYSDK_OFFSET(0x19BE8070)
#define RPG_GAMECORE_RTDEFENCECONST_METHOD_2_B74F0266CBEA732F_OFFSET UNITYSDK_OFFSET(0x19BE8030)
#define RPG_GAMECORE_RTDEFENCECONST_METHOD_2_D83796106DF8E5C5_OFFSET UNITYSDK_OFFSET(0x19BE7CA0)
#define RPG_GAMECORE_RTDEFENCECONST_METHOD_2_EC24AC00C231F088_OFFSET UNITYSDK_OFFSET(0x19BE8000)
#define RPG_GAMECORE_RTDEFENCECONST__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE7B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceConst_TypeDefinitionIndex = 17171;

	class RtDefenceConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::RPG::GameCore::RtDefenceConst** StaticGet_Config()
		{
			return (::RPG::GameCore::RtDefenceConst**)Il2CppClass::FromTypeDefinitionIndex(RtDefenceConst_TypeDefinitionIndex)->GetStaticField(0x171C0);
		}
		::System::UInt32 AvatarIDMin; // 0x10
		::System::UInt32 AvatarIDMax; // 0x14
		::System::UInt32 MonsterIDMin; // 0x18
		::System::UInt32 MonsterIDMax; // 0x1C
		::System::UInt32 BaseID; // 0x20
		::RPG::GameCore::FixPoint BaseHp; // 0x28
		::RPG::GameCore::FixPoint StartCoin; // 0x30
		::System::String* MainLevelGraphPath; // 0x38
		::Il2CppArray<::RPG::GameCore::RtDefenceStageRow*>* StageList; // 0x40
		::Il2CppArray<::RPG::GameCore::RtDefenceUnitRow*>* UnitList; // 0x48
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlagStateAction*>* FlagActions; // 0x50
		::RPG::GameCore::RtDefenceValueIncreasement* SummonCost; // 0x58
		::RPG::GameCore::RtDefenceValueIncreasement* UpgradeCost; // 0x60
		::RPG::GameCore::RtDamageConstConfig* DamageConst; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RtDefenceUnitRow*>* _UnitRowDict; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_45583901427D1ACC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceConst*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceConst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_METHOD_2_45583901427D1ACC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_METHOD_2_5790A55946AA509D_OFFSET))();
		}

		static ::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_METHOD_2_832295EC279E5994_OFFSET))();
		}

		static ::RPG::GameCore::RtDefenceStageRow* Method_2_D83796106DF8E5C5(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RtDefenceStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_METHOD_2_D83796106DF8E5C5_OFFSET))(a1);
		}

		::RPG::GameCore::RtDefenceUnitRow* Method_2_A6A79CD8936F654D(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RtDefenceUnitRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_METHOD_2_A6A79CD8936F654D_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtDefenceUnitRow* Method_2_1A5DE62F43868946(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RtDefenceUnitRow*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_METHOD_2_1A5DE62F43868946_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_ABE7CF9FA1B8CCA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_METHOD_2_ABE7CF9FA1B8CCA3_OFFSET))(this);
		}

		static ::System::Boolean Method_2_EC24AC00C231F088(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_METHOD_2_EC24AC00C231F088_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_B74F0266CBEA732F(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_METHOD_2_B74F0266CBEA732F_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_B74F0266CBEA732F_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_METHOD_2_B74F0266CBEA732F_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Method_2_A694B6A26398247A(::RPG::GameCore::RtDefenceValueIncreasement* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::RtDefenceValueIncreasement*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECONST_METHOD_2_A694B6A26398247A_OFFSET))(a1, a2);
		}
	};
}
