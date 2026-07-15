#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HandbookGrowthGuideEquipmentDataItem; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FD3A50)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18FD3A90)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C___PREPAREDATALIST_B__8_0_OFFSET UNITYSDK_OFFSET(0x18FD3AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideEquipmentData___c_TypeDefinitionIndex = 62698;

	class HandbookGrowthGuideEquipmentData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::HandbookGrowthGuideEquipmentData___c** StaticGet___9()
		{
			return (::RPG::Client::HandbookGrowthGuideEquipmentData___c**)Il2CppClass::FromTypeDefinitionIndex(HandbookGrowthGuideEquipmentData___c_TypeDefinitionIndex)->GetStaticField(0x2FF00);
		}
		static ::System::Comparison_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(HandbookGrowthGuideEquipmentData___c_TypeDefinitionIndex)->GetStaticField(0x2FF08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __PrepareDataList_b__8_0(::RPG::Client::HandbookGrowthGuideEquipmentDataItem* a1, ::RPG::Client::HandbookGrowthGuideEquipmentDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideEquipmentDataItem*, ::RPG::Client::HandbookGrowthGuideEquipmentDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA___C___PREPAREDATALIST_B__8_0_OFFSET))(this, a1, a2);
		}
	};
}
