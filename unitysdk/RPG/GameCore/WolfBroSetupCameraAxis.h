#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS_METHOD_3_3294ED9BF83B5492_OFFSET UNITYSDK_OFFSET(0x1EFA8E80)
#define RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS_METHOD_3_E1CF3B40BE771009_OFFSET UNITYSDK_OFFSET(0x1EFA8E40)
#define RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA8E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroSetupCameraAxis_TypeDefinitionIndex = 21340;

	class WolfBroSetupCameraAxis : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Save; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1CF3B40BE771009(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroSetupCameraAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroSetupCameraAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS_METHOD_3_E1CF3B40BE771009_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3294ED9BF83B5492(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroSetupCameraAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroSetupCameraAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROSETUPCAMERAAXIS_METHOD_3_3294ED9BF83B5492_OFFSET))(a1, a2);
		}
	};
}
