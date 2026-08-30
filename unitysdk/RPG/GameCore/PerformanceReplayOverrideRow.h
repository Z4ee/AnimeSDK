#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D31ED50)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D31EEE0)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D31ECE0)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D31ED40)
#define RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31F0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplayOverrideRow_TypeDefinitionIndex = 14233;

	class PerformanceReplayOverrideRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14
		::RPG::Client::TextID Desc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceReplayOverrideRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceReplayOverrideRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
