#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D313BC0)
#define RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D313D40)
#define RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D313B50)
#define RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D313BB0)
#define RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D313F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceBackupLockRow_TypeDefinitionIndex = 14248;

	class PerformanceBackupLockRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14
		::RPG::GameCore::ELevelPerformanceType BackupPerformanceType; // 0x18
		::System::UInt32 BackupPerformanceID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceBackupLockRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceBackupLockRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceBackupLockRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceBackupLockRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
