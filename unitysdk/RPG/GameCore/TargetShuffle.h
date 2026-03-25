#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_1D5CF062A0A7A4C9_OFFSET UNITYSDK_OFFSET(0x177D3010)
#define RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_5398DF62FE539598_OFFSET UNITYSDK_OFFSET(0x177D0EA0)
#define RPG_GAMECORE_TARGETSHUFFLE__CTOR_OFFSET UNITYSDK_OFFSET(0x177D0E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetShuffle_TypeDefinitionIndex = 22177;

	class TargetShuffle : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D5CF062A0A7A4C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetShuffle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetShuffle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_1D5CF062A0A7A4C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5398DF62FE539598(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetShuffle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetShuffle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_5398DF62FE539598_OFFSET))(a1, a2);
		}
	};
}
