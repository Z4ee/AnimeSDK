#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18BE9800)
#define RPG_GAMECORE_PERFORMANCESKIPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BE99D0)
#define RPG_GAMECORE_PERFORMANCESKIPEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18BE9780)
#define RPG_GAMECORE_PERFORMANCESKIPEROW_RESET_OFFSET UNITYSDK_OFFSET(0x18BE97E0)
#define RPG_GAMECORE_PERFORMANCESKIPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE9BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipERow_TypeDefinitionIndex = 13632;

	class PerformanceSkipERow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ActorList; // 0x10
		::System::UInt32 PerformanceID; // 0x18
		::System::Boolean ContainImportBranch; // 0x1C
		::System::Boolean Skippable; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPEROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPEROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceSkipERow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPEROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceSkipERow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipERow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
