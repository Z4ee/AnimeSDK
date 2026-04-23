#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18BE7AE0)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BE7C70)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18BE7A70)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_RESET_OFFSET UNITYSDK_OFFSET(0x18BE7AD0)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE7E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplayOverrideRow_TypeDefinitionIndex = 13598;

	class PerformanceReplayOverrideRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc; // 0x10
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x20
		::System::UInt32 PerformanceID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceReplayOverrideRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceReplayOverrideRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
