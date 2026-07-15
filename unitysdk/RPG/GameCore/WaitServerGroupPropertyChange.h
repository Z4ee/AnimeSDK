#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE_METHOD_3_51BD3BC089F1AAC3_OFFSET UNITYSDK_OFFSET(0x1D1BC360)
#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE_METHOD_3_F099AFDB50D03EBF_OFFSET UNITYSDK_OFFSET(0x1D1BC310)
#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BC350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerGroupPropertyChange_TypeDefinitionIndex = 20383;

	class WaitServerGroupPropertyChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F099AFDB50D03EBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerGroupPropertyChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerGroupPropertyChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE_METHOD_3_F099AFDB50D03EBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_51BD3BC089F1AAC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerGroupPropertyChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerGroupPropertyChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE_METHOD_3_51BD3BC089F1AAC3_OFFSET))(a1, a2);
		}
	};
}
