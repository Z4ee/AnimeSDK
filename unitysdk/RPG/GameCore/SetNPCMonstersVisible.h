#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETNPCMONSTERSVISIBLE_METHOD_3_26B77EF6B80A680D_OFFSET UNITYSDK_OFFSET(0x176D97F0)
#define RPG_GAMECORE_SETNPCMONSTERSVISIBLE_METHOD_3_69852CACFFE2E2FD_OFFSET UNITYSDK_OFFSET(0x176D9880)
#define RPG_GAMECORE_SETNPCMONSTERSVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D9850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNPCMonstersVisible_TypeDefinitionIndex = 18609;

	class SetNPCMonstersVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERSVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_26B77EF6B80A680D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNPCMonstersVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNPCMonstersVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERSVISIBLE_METHOD_3_26B77EF6B80A680D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69852CACFFE2E2FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNPCMonstersVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNPCMonstersVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERSVISIBLE_METHOD_3_69852CACFFE2E2FD_OFFSET))(a1, a2);
		}
	};
}
