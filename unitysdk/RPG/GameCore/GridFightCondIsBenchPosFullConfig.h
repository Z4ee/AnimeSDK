#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_METHOD_6_1F341AC89A425EED_OFFSET UNITYSDK_OFFSET(0x189A4950)
#define RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_METHOD_6_7D937BB63F389759_OFFSET UNITYSDK_OFFSET(0x189A4B10)
#define RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189A4A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondIsBenchPosFullConfig_TypeDefinitionIndex = 18362;

	class GridFightCondIsBenchPosFullConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1F341AC89A425EED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_METHOD_6_1F341AC89A425EED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7D937BB63F389759(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsBenchPosFullConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISBENCHPOSFULLCONFIG_METHOD_6_7D937BB63F389759_OFFSET))(a1, a2);
		}
	};
}
