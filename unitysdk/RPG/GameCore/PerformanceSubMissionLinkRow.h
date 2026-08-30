#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D323C50)
#define RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D323DF0)
#define RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D323BD0)
#define RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D323C30)
#define RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D323FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSubMissionLinkRow_TypeDefinitionIndex = 14242;

	class PerformanceSubMissionLinkRow : public ::System::Object
	{
	public:
		::System::UInt32 PerformanceID; // 0x10
		::System::UInt32 SubMissionID; // 0x14
		::System::Boolean HasCg; // 0x18
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSubMissionLinkRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSubMissionLinkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSubMissionLinkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSubMissionLinkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESUBMISSIONLINKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
