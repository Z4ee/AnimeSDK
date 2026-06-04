#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION_METHOD_3_06B1D112378BF985_OFFSET UNITYSDK_OFFSET(0x19ABA760)
#define RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION_METHOD_3_E026BB97B36428B5_OFFSET UNITYSDK_OFFSET(0x19ABA6D0)
#define RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABA730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RegisterPropServerStateRotation_TypeDefinitionIndex = 19212;

	class RegisterPropServerStateRotation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E026BB97B36428B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RegisterPropServerStateRotation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RegisterPropServerStateRotation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION_METHOD_3_E026BB97B36428B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_06B1D112378BF985(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RegisterPropServerStateRotation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RegisterPropServerStateRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERPROPSERVERSTATEROTATION_METHOD_3_06B1D112378BF985_OFFSET))(a1, a2);
		}
	};
}
