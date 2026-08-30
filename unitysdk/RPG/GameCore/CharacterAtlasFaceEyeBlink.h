#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterAtlasFaceEyeShapeGroup; }

#define RPG_GAMECORE_CHARACTERATLASFACEEYEBLINK_METHOD_2_516B220D5B584251_OFFSET UNITYSDK_OFFSET(0x1CF8F010)
#define RPG_GAMECORE_CHARACTERATLASFACEEYEBLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF8F290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAtlasFaceEyeBlink_TypeDefinitionIndex = 17259;

	class CharacterAtlasFaceEyeBlink : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 CloseEyeIndex; // 0x10
		::Il2CppArray<::System::Int32>* BlinkIndexList; // 0x18
		::System::Single MinBlinkGap; // 0x20
		::System::Single MaxBlinkGap; // 0x24
		::System::Single BlinkingDuration; // 0x28
		::Il2CppArray<::RPG::GameCore::CharacterAtlasFaceEyeShapeGroup*>* ShapeGroupList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEYEBLINK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_516B220D5B584251(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterAtlasFaceEyeBlink*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterAtlasFaceEyeBlink*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEYEBLINK_METHOD_2_516B220D5B584251_OFFSET))(a1, a2);
		}
	};
}
