#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18BE6A50)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BE6B90)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18BE69E0)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_RESET_OFFSET UNITYSDK_OFFSET(0x18BE6A40)
#define RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE6D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplayGenderRow_TypeDefinitionIndex = 13610;

	class PerformanceReplayGenderRow : public ::System::Object
	{
	public:
		::System::UInt32 PerformanceID; // 0x10
		::RPG::GameCore::GenderType Gender; // 0x14
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceReplayGenderRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayGenderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceReplayGenderRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayGenderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYGENDERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
