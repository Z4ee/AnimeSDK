#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYADDBATHBUFF_METHOD_3_44FDAF36E0E18890_OFFSET UNITYSDK_OFFSET(0x1C15D020)
#define RPG_GAMECORE_TRAINPARTYADDBATHBUFF_METHOD_3_F0B65C35D89D3AA3_OFFSET UNITYSDK_OFFSET(0x1C15D060)
#define RPG_GAMECORE_TRAINPARTYADDBATHBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15D050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyAddBathBuff_TypeDefinitionIndex = 21548;

	class TrainPartyAddBathBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CustomName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYADDBATHBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_44FDAF36E0E18890(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyAddBathBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyAddBathBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYADDBATHBUFF_METHOD_3_44FDAF36E0E18890_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F0B65C35D89D3AA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyAddBathBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyAddBathBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYADDBATHBUFF_METHOD_3_F0B65C35D89D3AA3_OFFSET))(a1, a2);
		}
	};
}
