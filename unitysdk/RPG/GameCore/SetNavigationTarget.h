#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETNAVIGATIONTARGET_METHOD_3_4664254D2B22BF45_OFFSET UNITYSDK_OFFSET(0x1D509B10)
#define RPG_GAMECORE_SETNAVIGATIONTARGET_METHOD_3_D5EF00CFCDB6BF86_OFFSET UNITYSDK_OFFSET(0x1D509AD0)
#define RPG_GAMECORE_SETNAVIGATIONTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D509B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNavigationTarget_TypeDefinitionIndex = 24083;

	class SetNavigationTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NodeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNAVIGATIONTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D5EF00CFCDB6BF86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNavigationTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNavigationTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNAVIGATIONTARGET_METHOD_3_D5EF00CFCDB6BF86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4664254D2B22BF45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNavigationTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNavigationTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNAVIGATIONTARGET_METHOD_3_4664254D2B22BF45_OFFSET))(a1, a2);
		}
	};
}
