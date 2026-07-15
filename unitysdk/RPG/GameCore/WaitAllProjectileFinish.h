#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITALLPROJECTILEFINISH_METHOD_3_5DEE8A5C0BD1D577_OFFSET UNITYSDK_OFFSET(0x1B89FBF0)
#define RPG_GAMECORE_WAITALLPROJECTILEFINISH_METHOD_3_F0455338C7EBBF1A_OFFSET UNITYSDK_OFFSET(0x1B89FB20)
#define RPG_GAMECORE_WAITALLPROJECTILEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89FBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAllProjectileFinish_TypeDefinitionIndex = 22707;

	class WaitAllProjectileFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITALLPROJECTILEFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0455338C7EBBF1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAllProjectileFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAllProjectileFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITALLPROJECTILEFINISH_METHOD_3_F0455338C7EBBF1A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5DEE8A5C0BD1D577(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAllProjectileFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAllProjectileFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITALLPROJECTILEFINISH_METHOD_3_5DEE8A5C0BD1D577_OFFSET))(a1, a2);
		}
	};
}
