#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MazeBuffDisplayType.h"
#include "unitysdk/RPG/GameCore/MazeBuffInBattleBindingType.h"
#include "unitysdk/RPG/GameCore/MazeBuffType.h"
#include "unitysdk/RPG/GameCore/MazeBuffUseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEBUFFROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x198FAB90)
#define RPG_GAMECORE_MAZEBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198FB3E0)
#define RPG_GAMECORE_MAZEBUFFROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x198FC8C0)
#define RPG_GAMECORE_MAZEBUFFROW_RESET_OFFSET UNITYSDK_OFFSET(0x198FC920)
#define RPG_GAMECORE_MAZEBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198FC960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffRow_TypeDefinitionIndex = 13356;

	class MazeBuffRow : public ::System::Object
	{
	public:
		::System::String* InBattleBindingKey; // 0x10
		::System::String* BuffEffect; // 0x18
		::System::String* ModifierName; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::System::String* BuffIcon; // 0x30
		::RPG::GameCore::MazeBuffUseType UseType; // 0x38
		::RPG::GameCore::EnumStatusType MazeBuffIconType; // 0x3C
		::System::UInt32 MazeBuffPool; // 0x40
		::RPG::GameCore::MazeBuffInBattleBindingType InBattleBindingType; // 0x44
		::System::Boolean IsDisplayEnvInLevel; // 0x48
		::RPG::Client::TextID BuffDescBattle; // 0x50
		::RPG::Client::TextID BuffDesc; // 0x60
		::RPG::GameCore::MazeBuffDisplayType DisplayType; // 0x70
		::System::UInt32 BuffDescParamByAvatarSkillID; // 0x74
		::System::UInt32 BuffSeries; // 0x78
		::RPG::GameCore::MazeBuffType MazeBuffType; // 0x7C
		::System::UInt32 Lv; // 0x80
		::System::UInt32 ID; // 0x84
		::System::UInt32 LvMax; // 0x88
		::System::UInt32 BuffRarity; // 0x8C
		::RPG::Client::TextID BuffSimpleDesc; // 0x90
		::RPG::Client::TextID BuffName; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeBuffRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeBuffRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
