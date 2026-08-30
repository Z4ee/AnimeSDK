#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D14B1C0)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14B760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentConfigRow_TypeDefinitionIndex = 13294;

	class GridFightAugmentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AugmentGameRefTrait; // 0x10
		::System::String* AugmentSearchKey; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::System::String* MiniIconPath; // 0x28
		::System::String* JsonPath; // 0x30
		::System::String* IconPath; // 0x38
		::Il2CppArray<::System::UInt32>* ChapterLimitList; // 0x40
		::Il2CppArray<::System::String*>* AugmentSavedValueList; // 0x48
		::Il2CppArray<::System::UInt32>* AugmentGameRefScore; // 0x50
		::RPG::Client::TextID HexDesc; // 0x58
		::System::UInt32 IsOCEffective; // 0x68
		::System::UInt32 ID; // 0x6C
		::RPG::GameCore::GridFightAugmentQuality Quality; // 0x70
		::System::UInt32 CategoryID; // 0x74
		::RPG::Client::TextID HexName; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightAugmentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightAugmentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
