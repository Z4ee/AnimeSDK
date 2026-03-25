#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_7A8FB7EDAFC5C8F4;

#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x174A18D0)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174A1A10)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x174A1860)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_RESET_OFFSET UNITYSDK_OFFSET(0x174A18C0)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174A1B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipPackRow_TypeDefinitionIndex = 13161;

	class PerformanceSkipPackRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_7A8FB7EDAFC5C8F4*>* PackList; // 0x10
		::System::UInt32 PackID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceSkipPackRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipPackRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceSkipPackRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipPackRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
