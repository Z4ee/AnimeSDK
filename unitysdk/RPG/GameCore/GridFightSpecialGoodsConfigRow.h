#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3BAAF0)
#define RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BAEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSpecialGoodsConfigRow_TypeDefinitionIndex = 13492;

	class GridFightSpecialGoodsConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::System::String* MiniIconPath; // 0x28
		::RPG::Client::TextID GoodDesc; // 0x30
		::System::UInt32 Cost; // 0x40
		::System::UInt32 Quality; // 0x44
		::RPG::Client::TextID GoodName; // 0x48
		::System::UInt32 GroupID; // 0x58
		::System::UInt32 ID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
