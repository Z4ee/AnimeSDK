#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEMATCHDETAILROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17390DD0)
#define RPG_GAMECORE_MARBLEMATCHDETAILROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17390F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchDetailRow_TypeDefinitionIndex = 10906;

	class MarbleMatchDetailRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NpcList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHDETAILROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleMatchDetailRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMatchDetailRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHDETAILROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
