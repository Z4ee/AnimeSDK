#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class ChimeraDuelItemData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x938EAE0)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x938EB20)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP___C___SORTCHIMERAGROUPDATALIST_B__4_0_OFFSET UNITYSDK_OFFSET(0x938EB30)
#define RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP___C___SORTITEMGROUPDATALIST_B__7_0_OFFSET UNITYSDK_OFFSET(0x938EBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelAchievementDataGroup___c_TypeDefinitionIndex = 51365;

	class ChimeraDuelAchievementDataGroup___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraDuelAchievementDataGroup___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelAchievementDataGroup___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAchievementDataGroup___c_TypeDefinitionIndex)->GetStaticField(0x46BC0);
		}
		static ::System::Comparison_1<::RPG::Client::ChimeraDuelItemData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChimeraDuelItemData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAchievementDataGroup___c_TypeDefinitionIndex)->GetStaticField(0x46BC8);
		}
		static ::System::Comparison_1<::RPG::Client::ChimeraDuelChimeraData*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChimeraDuelChimeraData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAchievementDataGroup___c_TypeDefinitionIndex)->GetStaticField(0x46BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortChimeraGroupDataList_b__4_0(::RPG::Client::ChimeraDuelChimeraData* a, ::RPG::Client::ChimeraDuelChimeraData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP___C___SORTCHIMERAGROUPDATALIST_B__4_0_OFFSET))(this, a, b);
		}

		::System::Int32 __SortItemGroupDataList_b__7_0(::RPG::Client::ChimeraDuelItemData* a, ::RPG::Client::ChimeraDuelItemData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelItemData*, ::RPG::Client::ChimeraDuelItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACHIEVEMENTDATAGROUP___C___SORTITEMGROUPDATALIST_B__7_0_OFFSET))(this, a, b);
		}
	};
}
