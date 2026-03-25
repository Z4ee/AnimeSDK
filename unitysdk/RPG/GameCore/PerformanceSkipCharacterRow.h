#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1749EB90)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1749EC80)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1749EB20)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_RESET_OFFSET UNITYSDK_OFFSET(0x1749EB80)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1749EDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipCharacterRow_TypeDefinitionIndex = 13154;

	class PerformanceSkipCharacterRow : public ::System::Object
	{
	public:
		::System::String* TalkSentenceName; // 0x10
		::System::String* IconPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceSkipCharacterRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipCharacterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceSkipCharacterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipCharacterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
