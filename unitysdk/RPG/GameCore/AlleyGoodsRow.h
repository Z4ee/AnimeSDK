#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLEYGOODSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18695590)
#define RPG_GAMECORE_ALLEYGOODSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18695C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyGoodsRow_TypeDefinitionIndex = 11914;

	class AlleyGoodsRow : public ::System::Object
	{
	public:
		::System::String* GoodsConfig; // 0x10
		::System::String* SettleAudioEvent; // 0x18
		::System::String* GoodsPic; // 0x20
		::System::String* GoodsPicLocked; // 0x28
		::System::String* RotateAudioEvent; // 0x30
		::System::UInt32 GoodsID; // 0x38
		::System::UInt32 GoodsProfit; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleyGoodsRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyGoodsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
