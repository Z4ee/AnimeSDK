#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18BE67B0)
#define RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BE68A0)
#define RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18BE6740)
#define RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_RESET_OFFSET UNITYSDK_OFFSET(0x18BE67A0)
#define RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE69D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplayExcludeRow_TypeDefinitionIndex = 13604;

	class PerformanceReplayExcludeRow : public ::System::Object
	{
	public:
		::System::UInt32 PerformanceID; // 0x10
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceReplayExcludeRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayExcludeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceReplayExcludeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayExcludeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYEXCLUDEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
