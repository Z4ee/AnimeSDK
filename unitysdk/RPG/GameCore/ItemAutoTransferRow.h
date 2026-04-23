#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_927AEEA01B635CB6;

#define RPG_GAMECORE_ITEMAUTOTRANSFERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A24310)
#define RPG_GAMECORE_ITEMAUTOTRANSFERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A24460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemAutoTransferRow_TypeDefinitionIndex = 13172;

	class ItemAutoTransferRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_927AEEA01B635CB6*>* TransferList; // 0x10
		::System::UInt32 ItemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMAUTOTRANSFERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemAutoTransferRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemAutoTransferRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMAUTOTRANSFERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
