#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x199FB2B0)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199FB3A0)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x199FB240)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_RESET_OFFSET UNITYSDK_OFFSET(0x199FB2A0)
#define RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199FB4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipCharacterRow_TypeDefinitionIndex = 13686;

	class PerformanceSkipCharacterRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* TalkSentenceName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSkipCharacterRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipCharacterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSkipCharacterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSkipCharacterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPCHARACTERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
