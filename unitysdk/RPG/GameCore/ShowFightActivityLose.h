#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWFIGHTACTIVITYLOSE_METHOD_3_035EE27F3E5A91C6_OFFSET UNITYSDK_OFFSET(0x1D527C50)
#define RPG_GAMECORE_SHOWFIGHTACTIVITYLOSE_METHOD_3_D7111ACD40E44543_OFFSET UNITYSDK_OFFSET(0x1D527B80)
#define RPG_GAMECORE_SHOWFIGHTACTIVITYLOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D527C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFightActivityLose_TypeDefinitionIndex = 23197;

	class ShowFightActivityLose : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTACTIVITYLOSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7111ACD40E44543(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFightActivityLose*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFightActivityLose*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTACTIVITYLOSE_METHOD_3_D7111ACD40E44543_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_035EE27F3E5A91C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFightActivityLose* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFightActivityLose*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIGHTACTIVITYLOSE_METHOD_3_035EE27F3E5A91C6_OFFSET))(a1, a2);
		}
	};
}
