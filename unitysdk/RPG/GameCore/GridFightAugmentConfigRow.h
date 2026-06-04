#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197D9B10)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197DA100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentConfigRow_TypeDefinitionIndex = 12766;

	class GridFightAugmentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChapterLimitList; // 0x10
		::System::String* JsonPath; // 0x18
		::Il2CppArray<::System::UInt32>* AugmentGameRefScore; // 0x20
		::Il2CppArray<::System::UInt32>* AugmentGameRefTrait; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x30
		::System::String* AugmentSearchKey; // 0x38
		::Il2CppArray<::System::String*>* AugmentSavedValueList; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x48
		::System::String* IconPath; // 0x50
		::System::String* MiniIconPath; // 0x58
		::RPG::Client::TextID HexDesc; // 0x60
		::RPG::GameCore::GridFightAugmentQuality Quality; // 0x70
		::System::UInt32 IsOCEffective; // 0x74
		::System::UInt32 CategoryID; // 0x78
		::System::UInt32 ID; // 0x7C
		::RPG::Client::TextID HexName; // 0x80

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
