#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D8A60)
#define RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D8E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSpecialGoodsConfigRow_TypeDefinitionIndex = 12868;

	class GridFightSpecialGoodsConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* MiniIconPath; // 0x18
		::System::String* JsonPath; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x28
		::RPG::Client::TextID GoodDesc; // 0x30
		::RPG::Client::TextID GoodName; // 0x40
		::System::UInt32 GroupID; // 0x50
		::System::UInt32 Quality; // 0x54
		::System::UInt32 ID; // 0x58
		::System::UInt32 Cost; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
