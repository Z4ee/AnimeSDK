#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_METHOD_3_7A903F4CC8FBE9B1_OFFSET UNITYSDK_OFFSET(0x1CDCB5A0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_METHOD_3_FB2A0522F0F67374_OFFSET UNITYSDK_OFFSET(0x1CDCB4D0)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCB590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpcReset_TypeDefinitionIndex = 21937;

	class AdvGameplayTrackNpcReset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FB2A0522F0F67374(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcReset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcReset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_METHOD_3_FB2A0522F0F67374_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A903F4CC8FBE9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcReset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCRESET_METHOD_3_7A903F4CC8FBE9B1_OFFSET))(a1, a2);
		}
	};
}
