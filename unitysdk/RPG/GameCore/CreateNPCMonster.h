#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CREATENPCMONSTER_METHOD_3_166DF6316EECEBF4_OFFSET UNITYSDK_OFFSET(0x1D008680)
#define RPG_GAMECORE_CREATENPCMONSTER_METHOD_3_21B1B84ADBAE75F0_OFFSET UNITYSDK_OFFSET(0x1D0086D0)
#define RPG_GAMECORE_CREATENPCMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0086C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateNPCMonster_TypeDefinitionIndex = 20054;

	class CreateNPCMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_166DF6316EECEBF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateNPCMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateNPCMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCMONSTER_METHOD_3_166DF6316EECEBF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21B1B84ADBAE75F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateNPCMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateNPCMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCMONSTER_METHOD_3_21B1B84ADBAE75F0_OFFSET))(a1, a2);
		}
	};
}
