#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/CompareType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR_METHOD_3_30032D40CAEE2873_OFFSET UNITYSDK_OFFSET(0x185EF0C0)
#define RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR_METHOD_3_DB78B6C8C6A5DBB6_OFFSET UNITYSDK_OFFSET(0x185EF100)
#define RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x185EF0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AICompareCustomValueSelector_TypeDefinitionIndex = 14762;

	class AICompareCustomValueSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::System::String* CustomValueKey; // 0x10
		::RPG::GameCore::CompareType CompareType; // 0x18
		::System::Int32 CompareTarget; // 0x1C
		::System::Boolean InverseResultFlag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_30032D40CAEE2873(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AICompareCustomValueSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AICompareCustomValueSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR_METHOD_3_30032D40CAEE2873_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB78B6C8C6A5DBB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AICompareCustomValueSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AICompareCustomValueSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR_METHOD_3_DB78B6C8C6A5DBB6_OFFSET))(a1, a2);
		}
	};
}
