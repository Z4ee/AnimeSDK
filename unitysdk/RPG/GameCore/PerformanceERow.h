#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceChangePlayerType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18BE0A20)
#define RPG_GAMECORE_PERFORMANCEEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BE0DD0)
#define RPG_GAMECORE_PERFORMANCEEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18BE19F0)
#define RPG_GAMECORE_PERFORMANCEEROW_RESET_OFFSET UNITYSDK_OFFSET(0x18BE1A50)
#define RPG_GAMECORE_PERFORMANCEEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE1A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceERow_TypeDefinitionIndex = 13590;

	class PerformanceERow : public ::System::Object
	{
	public:
		::System::String* PerformancePath; // 0x10
		::System::String* PerformanceCharacter; // 0x18
		::RPG::GameCore::StoryBlackType StartBlack; // 0x20
		::RPG::GameCore::PerformanceChangePlayerType ChangePlayerType; // 0x24
		::System::UInt32 FloorID; // 0x28
		::System::UInt32 PerformanceID; // 0x2C
		::RPG::GameCore::PerformanceSkipType IsSkip; // 0x30
		::System::UInt32 PlaneID; // 0x34
		::RPG::GameCore::StoryBlackType EndBlack; // 0x38
		::System::Boolean IsIntroDialogue; // 0x3C
		::System::Boolean EndWithCrack; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceERow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceERow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceERow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
