#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_LOOKATTARGET_METHOD_4_70B5588ED36D7458_OFFSET UNITYSDK_OFFSET(0x1D4D1B40)
#define RPG_GAMECORE_ST_SIDE_LOOKATTARGET_METHOD_4_8504F445FBD37095_OFFSET UNITYSDK_OFFSET(0x1D4D1C10)
#define RPG_GAMECORE_ST_SIDE_LOOKATTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D1C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_LookAtTarget_TypeDefinitionIndex = 19876;

	class ST_Side_LookAtTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LOOKATTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_70B5588ED36D7458(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_LookAtTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_LookAtTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LOOKATTARGET_METHOD_4_70B5588ED36D7458_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8504F445FBD37095(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_LookAtTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_LookAtTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LOOKATTARGET_METHOD_4_8504F445FBD37095_OFFSET))(a1, a2);
		}
	};
}
