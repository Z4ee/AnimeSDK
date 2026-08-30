#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE_METHOD_2_4216E5166463F957_OFFSET UNITYSDK_OFFSET(0x1D330BF0)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE_METHOD_2_CAC0DC54921FD8F9_OFFSET UNITYSDK_OFFSET(0x1D331390)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3313F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyGroupEventBase_TypeDefinitionIndex = 16802;

	class PingPongEnemyGroupEventBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4216E5166463F957(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyGroupEventBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyGroupEventBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE_METHOD_2_4216E5166463F957_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_CAC0DC54921FD8F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyGroupEventBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyGroupEventBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENTBASE_METHOD_2_CAC0DC54921FD8F9_OFFSET))(a1, a2);
		}
	};
}
