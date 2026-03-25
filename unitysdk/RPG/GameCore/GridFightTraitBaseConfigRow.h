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

#define RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172877B0)
#define RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17287D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBaseConfigRow_TypeDefinitionIndex = 12502;

	class GridFightTraitBaseConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BEIDList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* TraitLayerList; // 0x18
		::System::String* CutinPath; // 0x20
		::System::String* TraitSearchKey; // 0x28
		::Il2CppArray<::System::UInt32>* TraitEffectList; // 0x30
		::System::String* MiniIconPath; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* BaseDescParamList; // 0x40
		::System::String* IconPath; // 0x48
		::RPG::Client::TextID TraitName; // 0x50
		::System::UInt32 SeasonID; // 0x60
		::RPG::GameCore::GridFightActivationType ActivationType; // 0x64
		::System::UInt32 TraitSortPriority; // 0x68
		::System::UInt32 ID; // 0x6C
		::RPG::Client::TextID TraitBaseSimpleDesc; // 0x70
		::RPG::Client::TextID TraitBaseDesc; // 0x80
		::RPG::GameCore::GridFightTraitType TraitType; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitBaseConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitBaseConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBASECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
