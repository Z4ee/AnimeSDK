#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CeilingType.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GACHACEILINGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197ADA00)
#define RPG_GAMECORE_GACHACEILINGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197AE020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaCeilingConfigRow_TypeDefinitionIndex = 12720;

	class GachaCeilingConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CeilingItemList; // 0x10
		::System::UInt32 CeilingNum; // 0x18
		::RPG::GameCore::CeilingType CeilingType; // 0x1C
		::RPG::GameCore::GachaType GachaType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GachaCeilingConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachaCeilingConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
