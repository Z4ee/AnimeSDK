#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETAVATARDETACHABLEENABLE_METHOD_3_7D227E2A234BA308_OFFSET UNITYSDK_OFFSET(0x1D4E1D40)
#define RPG_GAMECORE_SETAVATARDETACHABLEENABLE_METHOD_3_C57755742D76ECDB_OFFSET UNITYSDK_OFFSET(0x1D4E1D80)
#define RPG_GAMECORE_SETAVATARDETACHABLEENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E1D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAvatarDetachableEnable_TypeDefinitionIndex = 20521;

	class SetAvatarDetachableEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DetachableEnable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDETACHABLEENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7D227E2A234BA308(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAvatarDetachableEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAvatarDetachableEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDETACHABLEENABLE_METHOD_3_7D227E2A234BA308_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C57755742D76ECDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAvatarDetachableEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAvatarDetachableEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDETACHABLEENABLE_METHOD_3_C57755742D76ECDB_OFFSET))(a1, a2);
		}
	};
}
