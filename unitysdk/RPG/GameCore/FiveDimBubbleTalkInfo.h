#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimActionBubbleTalkInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_FIVEDIMBUBBLETALKINFO_METHOD_3_E0E0277B42C1F00B_OFFSET UNITYSDK_OFFSET(0x19734530)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKINFO_METHOD_3_E709C00EA31437F6_OFFSET UNITYSDK_OFFSET(0x19726110)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19726100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBubbleTalkInfo_TypeDefinitionIndex = 20288;

	class FiveDimBubbleTalkInfo : public ::RPG::GameCore::FiveDimActionBubbleTalkInfo
	{
	public:
		::RPG::GameCore::DynamicString* EntityID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0E0277B42C1F00B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBubbleTalkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBubbleTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKINFO_METHOD_3_E0E0277B42C1F00B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E709C00EA31437F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBubbleTalkInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBubbleTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKINFO_METHOD_3_E709C00EA31437F6_OFFSET))(a1, a2);
		}
	};
}
