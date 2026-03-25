#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_LOOKATTARGET_METHOD_4_5094B626D7FBAEEA_OFFSET UNITYSDK_OFFSET(0x17699490)
#define RPG_GAMECORE_ST_SIDE_LOOKATTARGET_METHOD_4_8504F445FBD37095_OFFSET UNITYSDK_OFFSET(0x1768D5F0)
#define RPG_GAMECORE_ST_SIDE_LOOKATTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1768D5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_LookAtTarget_TypeDefinitionIndex = 18394;

	class ST_Side_LookAtTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LOOKATTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5094B626D7FBAEEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_LookAtTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_LookAtTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LOOKATTARGET_METHOD_4_5094B626D7FBAEEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8504F445FBD37095(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_LookAtTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_LookAtTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LOOKATTARGET_METHOD_4_8504F445FBD37095_OFFSET))(a1, a2);
		}
	};
}
