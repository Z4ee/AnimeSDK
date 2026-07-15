#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace RPG::GameCore { class PreviewCellPerformConfig; }

#define RPG_GAMECORE_CHENLINGFESITEMCONFIG_METHOD_3_89760219F30609A1_OFFSET UNITYSDK_OFFSET(0x1C384470)
#define RPG_GAMECORE_CHENLINGFESITEMCONFIG_METHOD_3_B731C295AFC01886_OFFSET UNITYSDK_OFFSET(0x1C3844E0)
#define RPG_GAMECORE_CHENLINGFESITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3844D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesItemConfig_TypeDefinitionIndex = 17707;

	class ChenLingFesItemConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Boolean AutoAbsorb; // 0x14
		::System::Boolean AutoAbsorbOnlyInit; // 0x15
		::System::Boolean IfPreviewIncome; // 0x16
		::RPG::MVector2 Pivot; // 0x18
		::Il2CppArray<::RPG::GameCore::ChenLingFesPosition*>* OccupyCellList; // 0x20
		::Il2CppArray<::RPG::GameCore::ChenLingFesPosition*>* EffectCellList; // 0x28
		::Il2CppArray<::RPG::GameCore::ChenLingFesPosition*>* EffectItemList; // 0x30
		::Il2CppArray<::RPG::GameCore::PreviewCellPerformConfig*>* PreviewCellPerformList; // 0x38
		::System::Single OccupyEffectOffsetX; // 0x40
		::System::Single OccupyEffectOffsetZ; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89760219F30609A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMCONFIG_METHOD_3_89760219F30609A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B731C295AFC01886(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesItemConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMCONFIG_METHOD_3_B731C295AFC01886_OFFSET))(a1, a2);
		}
	};
}
