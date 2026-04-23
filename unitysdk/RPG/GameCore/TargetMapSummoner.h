#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_D0F7E4D2667872D2_OFFSET UNITYSDK_OFFSET(0x18EE9BD0)
#define RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_DCD2D56BEA1A9566_OFFSET UNITYSDK_OFFSET(0x18EE9AA0)
#define RPG_GAMECORE_TARGETMAPSUMMONER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE9BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSummoner_TypeDefinitionIndex = 22943;

	class TargetMapSummoner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean Recursive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCD2D56BEA1A9566(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSummoner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSummoner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_DCD2D56BEA1A9566_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D0F7E4D2667872D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSummoner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_D0F7E4D2667872D2_OFFSET))(a1, a2);
		}
	};
}
