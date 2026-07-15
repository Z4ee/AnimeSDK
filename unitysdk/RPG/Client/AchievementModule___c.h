#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class AchievementSeriesRow; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACHIEVEMENTMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1747E8F0)
#define RPG_CLIENT_ACHIEVEMENTMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1747E920)
#define RPG_CLIENT_ACHIEVEMENTMODULE___C__GETACHIEVEMENTDATABYSERIES_B__14_0_OFFSET UNITYSDK_OFFSET(0x1747E950)
#define RPG_CLIENT_ACHIEVEMENTMODULE___C__GETACHIEVEMENTDATABYSERIES_B__14_1_OFFSET UNITYSDK_OFFSET(0x1747E970)
#define RPG_CLIENT_ACHIEVEMENTMODULE___C__GETACHIEVEMENTSERIES_B__8_0_OFFSET UNITYSDK_OFFSET(0x1747E930)
#define RPG_CLIENT_ACHIEVEMENTMODULE___C__GETFINISHHINTDATA_B__17_0_OFFSET UNITYSDK_OFFSET(0x1747EA70)
#define RPG_CLIENT_ACHIEVEMENTMODULE___C__GETITEMDISPLAYDATAS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1747E9F0)
#define RPG_CLIENT_ACHIEVEMENTMODULE___C__GET_ACHIEVEDNUM_B__65_0_OFFSET UNITYSDK_OFFSET(0x1747EC40)
#define RPG_CLIENT_ACHIEVEMENTMODULE___C__INITACHIEVEMENTDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0x1747EB00)
#define RPG_CLIENT_ACHIEVEMENTMODULE___C__INITACHIEVEMENTDATA_B__22_1_OFFSET UNITYSDK_OFFSET(0x1747EBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AchievementModule___c_TypeDefinitionIndex = 58624;

	class AchievementModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::AchievementData*, ::System::Boolean>** StaticGet___9__65_0()
		{
			return (::System::Func_2<::RPG::Client::AchievementData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AchievementModule___c_TypeDefinitionIndex)->GetStaticField(0x368E0);
		}
		static ::System::Comparison_1<::RPG::Client::AchievementData*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::RPG::Client::AchievementData*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementModule___c_TypeDefinitionIndex)->GetStaticField(0x368E8);
		}
		static ::System::Comparison_1<::RPG::Client::ItemDisplayData*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::RPG::Client::ItemDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementModule___c_TypeDefinitionIndex)->GetStaticField(0x368F0);
		}
		static ::System::Action** StaticGet___9__22_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AchievementModule___c_TypeDefinitionIndex)->GetStaticField(0x368F8);
		}
		static ::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AchievementModule___c_TypeDefinitionIndex)->GetStaticField(0x36900);
		}
		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AchievementModule___c_TypeDefinitionIndex)->GetStaticField(0x36908);
		}
		static ::RPG::Client::AchievementModule___c** StaticGet___9()
		{
			return (::RPG::Client::AchievementModule___c**)Il2CppClass::FromTypeDefinitionIndex(AchievementModule___c_TypeDefinitionIndex)->GetStaticField(0x36910);
		}
		static ::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AchievementModule___c_TypeDefinitionIndex)->GetStaticField(0x36918);
		}
		static ::System::Func_2<::RPG::GameCore::AchievementSeriesRow*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::AchievementSeriesRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AchievementModule___c_TypeDefinitionIndex)->GetStaticField(0x36920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAchievementSeries_b__8_0(::RPG::GameCore::AchievementSeriesRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AchievementSeriesRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___C__GETACHIEVEMENTSERIES_B__8_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAchievementDataBySeries_b__14_0(::RPG::Client::AchievementData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___C__GETACHIEVEMENTDATABYSERIES_B__14_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAchievementDataBySeries_b__14_1(::RPG::Client::AchievementData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___C__GETACHIEVEMENTDATABYSERIES_B__14_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetItemDisplayDatas_b__16_0(::RPG::Client::ItemDisplayData* a1, ::RPG::Client::ItemDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___C__GETITEMDISPLAYDATAS_B__16_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetFinishHintData_b__17_0(::RPG::Client::AchievementData* a1, ::RPG::Client::AchievementData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AchievementData*, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___C__GETFINISHHINTDATA_B__17_0_OFFSET))(this, a1, a2);
		}

		::System::Void _InitAchievementData_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___C__INITACHIEVEMENTDATA_B__22_0_OFFSET))(this);
		}

		::System::Void _InitAchievementData_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___C__INITACHIEVEMENTDATA_B__22_1_OFFSET))(this);
		}

		::System::Boolean _get_AchievedNum_b__65_0(::RPG::Client::AchievementData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___C__GET_ACHIEVEDNUM_B__65_0_OFFSET))(this, a1);
		}
	};
}
