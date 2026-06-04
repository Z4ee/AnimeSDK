#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GACHAGROUPDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197AEB60)
#define RPG_GAMECORE_GACHAGROUPDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197AF900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaGroupDataRow_TypeDefinitionIndex = 12727;

	class GachaGroupDataRow : public ::System::Object
	{
	public:
		::System::String* PoolLabelIcon; // 0x10
		::System::String* PoolLabelIconSelected; // 0x18
		::Il2CppArray<::System::UInt32>* GachaIDList; // 0x20
		::RPG::GameCore::GachaGroupType GroupType; // 0x28
		::System::UInt32 GroupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GachaGroupDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachaGroupDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
