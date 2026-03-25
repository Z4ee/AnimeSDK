#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComefromOpenType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMCOMEFROMLIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172C3BB0)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172C48A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComefromLimitRow_TypeDefinitionIndex = 12674;

	class ItemComefromLimitRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* OpenParaList; // 0x10
		::System::UInt32 ComefromID; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::GameCore::ComefromOpenType OpenType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemComefromLimitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemComefromLimitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
