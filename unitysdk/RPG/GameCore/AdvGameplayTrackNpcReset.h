#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_METHOD_3_7A903F4CC8FBE9B1_OFFSET UNITYSDK_OFFSET(0x18652DC0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_METHOD_3_CDDAADFEBA948F7D_OFFSET UNITYSDK_OFFSET(0x18652CB0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x18652D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpcReset_TypeDefinitionIndex = 21053;

	class AdvGameplayTrackNpcReset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDDAADFEBA948F7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcReset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcReset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_METHOD_3_CDDAADFEBA948F7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A903F4CC8FBE9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcReset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_METHOD_3_7A903F4CC8FBE9B1_OFFSET))(a1, a2);
		}
	};
}
