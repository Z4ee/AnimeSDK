#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPECIALNPCMAPOFFSETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D54B460)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D54BE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCMapOffsetRow_TypeDefinitionIndex = 14962;

	class SpecialNPCMapOffsetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* MapOffset; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialNPCMapOffsetRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialNPCMapOffsetRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
