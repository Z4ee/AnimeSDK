#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_7A8FB7EDAFC5C8F4;

#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1B4B8380)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4B84C0)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B4B8310)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW_RESET_OFFSET UNITYSDK_OFFSET(0x1B4B8370)
#define RPG_GAMECORE_PERFORMANCESKIPPACKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B8610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipPackRow_TypeDefinitionIndex = 13841;

	class PerformanceSkipPackRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_7A8FB7EDAFC5C8F4*>* PackList; // 0x10
		::System::UInt32 PackID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSkipPackRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipPackRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSkipPackRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipPackRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPPACKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
