#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongEnemyGroupEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT_METHOD_3_6581437210E25E78_OFFSET UNITYSDK_OFFSET(0x19A0D3B0)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT_METHOD_3_E33D878E0364DDD2_OFFSET UNITYSDK_OFFSET(0x19A0CF90)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0CF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyGroupEvent_ModifyUnit_TypeDefinitionIndex = 16136;

	class PingPongEnemyGroupEvent_ModifyUnit : public ::RPG::GameCore::PingPongEnemyGroupEventBase
	{
	public:
		::Il2CppArray<::System::String*>* UnitNameList; // 0x10
		::System::Boolean IsCore; // 0x18
		::System::Boolean IsBreakable; // 0x19
		::System::Boolean CanShoot; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6581437210E25E78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT_METHOD_3_6581437210E25E78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E33D878E0364DDD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT_METHOD_3_E33D878E0364DDD2_OFFSET))(a1, a2);
		}
	};
}
