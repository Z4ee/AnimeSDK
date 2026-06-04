#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS_METHOD_3_ABF72AF229E35ED1_OFFSET UNITYSDK_OFFSET(0x198AC390)
#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS_METHOD_3_F3F21784D03E7E25_OFFSET UNITYSDK_OFFSET(0x198AC4A0)
#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x198AC470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockMainStreamSourceToPlayerTeleportPos_TypeDefinitionIndex = 19361;

	class LockMainStreamSourceToPlayerTeleportPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ABF72AF229E35ED1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS_METHOD_3_ABF72AF229E35ED1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3F21784D03E7E25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOPLAYERTELEPORTPOS_METHOD_3_F3F21784D03E7E25_OFFSET))(a1, a2);
		}
	};
}
