#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNLOCKCAMERA_METHOD_3_194CFD073DF8FF28_OFFSET UNITYSDK_OFFSET(0x19E32BB0)
#define RPG_GAMECORE_UNLOCKCAMERA_METHOD_3_8910B86451F83CDC_OFFSET UNITYSDK_OFFSET(0x19E32AA0)
#define RPG_GAMECORE_UNLOCKCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x19E32B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnLockCamera_TypeDefinitionIndex = 19027;

	class UnLockCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8910B86451F83CDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnLockCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnLockCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKCAMERA_METHOD_3_8910B86451F83CDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_194CFD073DF8FF28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnLockCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnLockCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKCAMERA_METHOD_3_194CFD073DF8FF28_OFFSET))(a1, a2);
		}
	};
}
