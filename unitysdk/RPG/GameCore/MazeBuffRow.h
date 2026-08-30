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

#define RPG_GAMECORE_MAZEBUFFROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D273C70)
#define RPG_GAMECORE_MAZEBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2744C0)
#define RPG_GAMECORE_MAZEBUFFROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D2759B0)
#define RPG_GAMECORE_MAZEBUFFROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D275A10)
#define RPG_GAMECORE_MAZEBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D275A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffRow_TypeDefinitionIndex = 13921;

	class MazeBuffRow : public ::System::Object
	{
	public:
		::System::String* BuffIcon; // 0x10
		::System::String* InBattleBindingKey; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::System::String* ModifierName; // 0x28
		::System::String* BuffEffect; // 0x30
		::RPG::Client::TextID BuffSimpleDesc; // 0x38
		::System::UInt32 BuffRarity; // 0x48
		::RPG::GameCore::MazeBuffType MazeBuffType; // 0x4C
		::RPG::GameCore::MazeBuffUseType UseType; // 0x50
		::RPG::Client::TextID BuffDesc; // 0x58
		::System::UInt32 MazeBuffPool; // 0x68
		::System::UInt32 Lv; // 0x6C
		::System::UInt32 BuffSeries; // 0x70
		::System::UInt32 BuffDescParamByAvatarSkillID; // 0x74
		::System::Boolean IsDisplayEnvInLevel; // 0x78
		::RPG::GameCore::MazeBuffInBattleBindingType InBattleBindingType; // 0x7C
		::RPG::Client::TextID BuffName; // 0x80
		::RPG::Client::TextID BuffDescBattle; // 0x90
		::System::UInt32 ID; // 0xA0
		::System::UInt32 LvMax; // 0xA4
		::RPG::GameCore::MazeBuffDisplayType DisplayType; // 0xA8
		::RPG::GameCore::EnumStatusType MazeBuffIconType; // 0xAC

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
