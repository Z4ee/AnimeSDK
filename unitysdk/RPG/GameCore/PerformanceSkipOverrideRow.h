#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x199FCE30)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199FD1D0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x199FDE60)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_RESET_OFFSET UNITYSDK_OFFSET(0x199FDEC0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199FDEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipOverrideRow_TypeDefinitionIndex = 13689;

	class PerformanceSkipOverrideRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* OverrideCharacterList; // 0x10
		::System::UInt32 PackID; // 0x18
		::System::UInt32 IsOverrideCharacter; // 0x1C
		::System::UInt32 IsConfirmRequiredToSkipFlag; // 0x20
		::System::UInt32 IsOverrideImportantFlag; // 0x24
		::System::UInt32 PerformanceID; // 0x28
		::RPG::Client::TextID Desc; // 0x30
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x40
		::System::UInt32 OverrideImportantFlag; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSkipOverrideRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSkipOverrideRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
