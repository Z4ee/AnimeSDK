#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightActivationType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D16B760)
#define RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16BD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBaseConfigRow_TypeDefinitionIndex = 13558;

	class GridFightTraitBaseConfigRow : public ::System::Object
	{
	public:
		::System::String* MiniIconPath; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* TraitLayerList; // 0x18
		::Il2CppArray<::System::UInt32>* TraitEffectList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* BaseDescParamList; // 0x28
		::Il2CppArray<::System::UInt32>* BEIDList; // 0x30
		::System::String* TraitSearchKey; // 0x38
		::System::String* CutinPath; // 0x40
		::System::String* IconPath; // 0x48
		::RPG::GameCore::GridFightTraitType TraitType; // 0x50
		::System::UInt32 TraitSortPriority; // 0x54
		::System::UInt32 ID; // 0x58
		::RPG::Client::TextID TraitName; // 0x60
		::RPG::GameCore::GridFightActivationType ActivationType; // 0x70
		::System::UInt32 SeasonID; // 0x74
		::RPG::Client::TextID TraitBaseDesc; // 0x78
		::RPG::Client::TextID TraitBaseSimpleDesc; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightTraitBaseConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitBaseConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
