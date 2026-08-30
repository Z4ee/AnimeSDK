#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D4269B0)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D426AF0)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D426940)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D4269A0)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D426C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplayGenderRow_TypeDefinitionIndex = 14245;

	class PerformanceReplayGenderRow : public ::System::Object
	{
	public:
		::RPG::GameCore::GenderType Gender; // 0x10
		::System::UInt32 PerformanceID; // 0x14
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceReplayGenderRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayGenderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceReplayGenderRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayGenderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
