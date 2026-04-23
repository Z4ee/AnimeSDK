#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GACHABASICINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18937F20)
#define RPG_GAMECORE_GACHABASICINFOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18938410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaBasicInfoConfigRow_TypeDefinitionIndex = 12627;

	class GachaBasicInfoConfigRow : public ::System::Object
	{
	public:
		::System::String* StartTime; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::String* PoolLabelIconSelected; // 0x20
		::System::String* PoolLabelIcon; // 0x28
		::System::String* EndTime; // 0x30
		::System::UInt32 GachaID; // 0x38
		::RPG::Client::TextID PoolDescFTC; // 0x40
		::RPG::Client::TextID PoolName; // 0x50
		::RPG::GameCore::GachaType GachaType; // 0x60
		::System::UInt32 SortID; // 0x64
		::RPG::Client::TextID TypeTitle; // 0x68
		::RPG::Client::TextID PoolDesc; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHABASICINFOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GachaBasicInfoConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachaBasicInfoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHABASICINFOCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
