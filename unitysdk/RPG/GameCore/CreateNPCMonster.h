#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CREATENPCMONSTER_METHOD_3_21B1B84ADBAE75F0_OFFSET UNITYSDK_OFFSET(0x1713C8B0)
#define RPG_GAMECORE_CREATENPCMONSTER_METHOD_3_F55C200A887EC250_OFFSET UNITYSDK_OFFSET(0x1713C820)
#define RPG_GAMECORE_CREATENPCMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1713C880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateNPCMonster_TypeDefinitionIndex = 18576;

	class CreateNPCMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F55C200A887EC250(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateNPCMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateNPCMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCMONSTER_METHOD_3_F55C200A887EC250_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21B1B84ADBAE75F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateNPCMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateNPCMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCMONSTER_METHOD_3_21B1B84ADBAE75F0_OFFSET))(a1, a2);
		}
	};
}
