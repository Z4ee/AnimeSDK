#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceChangePlayerType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D420820)
#define RPG_GAMECORE_PERFORMANCEEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D420BD0)
#define RPG_GAMECORE_PERFORMANCEEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D4217F0)
#define RPG_GAMECORE_PERFORMANCEEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D421850)
#define RPG_GAMECORE_PERFORMANCEEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D421860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceERow_TypeDefinitionIndex = 14225;

	class PerformanceERow : public ::System::Object
	{
	public:
		::System::String* PerformanceCharacter; // 0x10
		::System::String* PerformancePath; // 0x18
		::RPG::GameCore::PerformanceChangePlayerType ChangePlayerType; // 0x20
		::RPG::GameCore::StoryBlackType StartBlack; // 0x24
		::RPG::GameCore::StoryBlackType EndBlack; // 0x28
		::System::UInt32 PlaneID; // 0x2C
		::System::UInt32 PerformanceID; // 0x30
		::System::UInt32 FloorID; // 0x34
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x38
		::System::Boolean EndWithCrack; // 0x3C
		::System::Boolean IsIntroDialogue; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceERow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceERow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceERow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
