#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITELATIONTEMPLATECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DCE70)
#define RPG_GAMECORE_GRIDFIGHTTRAITELATIONTEMPLATECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DD0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitElationTemplateConfigRow_TypeDefinitionIndex = 12973;

	class GridFightTraitElationTemplateConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PreEquipList; // 0x10
		::Il2CppArray<::System::UInt32>* FirstRecommendEquipList; // 0x18
		::Il2CppArray<::System::UInt32>* SecondRecommendEquipList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 Weight; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITELATIONTEMPLATECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitElationTemplateConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitElationTemplateConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITELATIONTEMPLATECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
