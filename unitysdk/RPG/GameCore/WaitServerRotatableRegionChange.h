#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE_METHOD_3_1CF80741BE80973D_OFFSET UNITYSDK_OFFSET(0x1D1BC4D0)
#define RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE_METHOD_3_CCA271D324565CF9_OFFSET UNITYSDK_OFFSET(0x1D1BC480)
#define RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BC4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerRotatableRegionChange_TypeDefinitionIndex = 20454;

	class WaitServerRotatableRegionChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CCA271D324565CF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerRotatableRegionChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerRotatableRegionChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE_METHOD_3_CCA271D324565CF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CF80741BE80973D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerRotatableRegionChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerRotatableRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE_METHOD_3_1CF80741BE80973D_OFFSET))(a1, a2);
		}
	};
}
