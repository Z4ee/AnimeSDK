#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYADDBATHBUFF_METHOD_3_33752FA822E5249A_OFFSET UNITYSDK_OFFSET(0x178A7EB0)
#define RPG_GAMECORE_TRAINPARTYADDBATHBUFF_METHOD_3_F0B65C35D89D3AA3_OFFSET UNITYSDK_OFFSET(0x178A7F30)
#define RPG_GAMECORE_TRAINPARTYADDBATHBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x178A7F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyAddBathBuff_TypeDefinitionIndex = 20556;

	class TrainPartyAddBathBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CustomName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYADDBATHBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_33752FA822E5249A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyAddBathBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyAddBathBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYADDBATHBUFF_METHOD_3_33752FA822E5249A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F0B65C35D89D3AA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyAddBathBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyAddBathBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYADDBATHBUFF_METHOD_3_F0B65C35D89D3AA3_OFFSET))(a1, a2);
		}
	};
}
