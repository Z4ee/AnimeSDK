#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_METHOD_3_AACB64638028164E_OFFSET UNITYSDK_OFFSET(0x1CDCB410)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_METHOD_3_F048BD78F3D9864B_OFFSET UNITYSDK_OFFSET(0x1CDCB340)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCB400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGameplayTrackNpcInit_TypeDefinitionIndex = 21938;

	class AdvGameplayTrackNpcInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F048BD78F3D9864B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcInit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcInit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_METHOD_3_F048BD78F3D9864B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AACB64638028164E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGameplayTrackNpcInit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGameplayTrackNpcInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCINIT_METHOD_3_AACB64638028164E_OFFSET))(a1, a2);
		}
	};
}
