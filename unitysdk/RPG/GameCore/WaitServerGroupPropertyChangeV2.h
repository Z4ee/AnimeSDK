#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2_METHOD_3_E31B986D792FE736_OFFSET UNITYSDK_OFFSET(0x1DEC1740)
#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2_METHOD_3_FA7896951CC41623_OFFSET UNITYSDK_OFFSET(0x1DEC1780)
#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC1770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerGroupPropertyChangeV2_TypeDefinitionIndex = 20937;

	class WaitServerGroupPropertyChangeV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E31B986D792FE736(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerGroupPropertyChangeV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerGroupPropertyChangeV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2_METHOD_3_E31B986D792FE736_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FA7896951CC41623(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerGroupPropertyChangeV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerGroupPropertyChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2_METHOD_3_FA7896951CC41623_OFFSET))(a1, a2);
		}
	};
}
