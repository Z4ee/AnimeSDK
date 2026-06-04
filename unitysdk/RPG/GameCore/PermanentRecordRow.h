#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERMANENTRECORDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A004A0)
#define RPG_GAMECORE_PERMANENTRECORDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A005C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PermanentRecordRow_TypeDefinitionIndex = 13705;

	class PermanentRecordRow : public ::System::Object
	{
	public:
		::System::UInt32 RefreshID; // 0x10
		::System::UInt32 RecordID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERMANENTRECORDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PermanentRecordRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PermanentRecordRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERMANENTRECORDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
