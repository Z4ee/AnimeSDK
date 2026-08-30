#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCESHIFTBLOCKCFGROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D428B50)
#define RPG_GAMECORE_PERFORMANCESHIFTBLOCKCFGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D428C40)
#define RPG_GAMECORE_PERFORMANCESHIFTBLOCKCFGROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D428AE0)
#define RPG_GAMECORE_PERFORMANCESHIFTBLOCKCFGROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D428B40)
#define RPG_GAMECORE_PERFORMANCESHIFTBLOCKCFGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D428D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceShiftBlockCfgRow_TypeDefinitionIndex = 14251;

	class PerformanceShiftBlockCfgRow : public ::System::Object
	{
	public:
		::System::UInt32 PerformanceID; // 0x10
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESHIFTBLOCKCFGROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESHIFTBLOCKCFGROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESHIFTBLOCKCFGROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceShiftBlockCfgRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceShiftBlockCfgRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESHIFTBLOCKCFGROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceShiftBlockCfgRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceShiftBlockCfgRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESHIFTBLOCKCFGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
