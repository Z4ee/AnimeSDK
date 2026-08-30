#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPDROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D320820)
#define RPG_GAMECORE_PERFORMANCESKIPDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3209F0)
#define RPG_GAMECORE_PERFORMANCESKIPDROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D3207A0)
#define RPG_GAMECORE_PERFORMANCESKIPDROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D320800)
#define RPG_GAMECORE_PERFORMANCESKIPDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D320BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipDRow_TypeDefinitionIndex = 14267;

	class PerformanceSkipDRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ActorList; // 0x10
		::System::UInt32 PerformanceID; // 0x18
		::System::Boolean ContainImportBranch; // 0x1C
		::System::Boolean Skippable; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPDROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPDROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPDROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSkipDRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipDRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPDROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSkipDRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipDRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
